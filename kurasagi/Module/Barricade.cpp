/*
 * @file Barricade.cpp
 * @brief Implementation for Barricade.hpp
 */

#include "Barricade.hpp"
#include "../Log.hpp"
#include "../Util/Memory.hpp"
#include "../Global.hpp"

/*
 * @brief Return if the ipxe index should be ignored.
 */
BOOLEAN ToIgnoreIpxe(size_t ipxeIndex) {

	UCHAR ipxeVaType = GetPml4eVaType(ipxeIndex);
	if (ipxeVaType == 0xFF) {
		LogInfo("ToIgnoreIpxe: Warning, couldn't fetch pml4 index. (is it usermode?)");
		return TRUE;
	}

	using namespace gl::Constants::MiSystemVaType;

	INT32 toIgnoreList[] = {
		MiVaProcessSpace,
		MiVaDriverImages,
		MiVaPagedPool,
		MiVaSystemPtes,
		MiVaSystemPtesLarge
	};

	for (auto i : toIgnoreList) {
		if (ipxeVaType == i)
			return TRUE;
	}

	return FALSE;
}

NTSTATUS NTAPI wsbp::Barricade::HkMmAccessFault(
	_In_ ULONG FaultCode,
	_In_ PVOID Address,
	_In_ KPROCESSOR_MODE Mode,
	_In_ PVOID TrapInformation
) {
	UNREFERENCED_PARAMETER(FaultCode);
	UNREFERENCED_PARAMETER(Mode);

	UNREFERENCED_PARAMETER(Address);
	UNREFERENCED_PARAMETER(TrapInformation);

	return STATUS_SUCCESS;
}

BOOLEAN wsbp::Barricade::CustomNxFaultHandler(void* faultAddress, PKTRAP_FRAME trapFrame) {

	size_t pml4Index = ((uintptr_t)faultAddress >> 39) & 0x1FF;

	if (ToIgnoreIpxe(pml4Index)) {
		return FALSE;
	}

	void** stack = (void**)(trapFrame->Rsp & ~0b111uLL);
	KIRQL curIrql = KeGetCurrentIrql();

	LogInfo("Nx exception caught at %llX", trapFrame->Rip);
	
	// -=-=-=-=-=-=-=-=-=-=-=-= Debug -=-=-=-=-=-=-=-=-=-=-=-=
	
	// copied from WinDbg registers
	LogVerbose("RAX: %llX", trapFrame->Rax);
	LogVerbose("RBX: %llX", trapFrame->Rbx);
	LogVerbose("RCX: %llX", trapFrame->Rcx);
	LogVerbose("RDX: %llX", trapFrame->Rdx);
	LogVerbose("RSI: %llX", trapFrame->Rsi);
	LogVerbose("RDI: %llX", trapFrame->Rdi);
	LogVerbose("RSP: %llX", trapFrame->Rsp);
	LogVerbose("RBP: %llX", trapFrame->Rbp);
	LogVerbose(" R8: %llX", trapFrame->R8);
	LogVerbose(" R9: %llX", trapFrame->R9);
	LogVerbose("R10: %llX", trapFrame->R10);
	LogVerbose("R11: %llX", trapFrame->R11);
	LogVerbose("IRQL: %u", curIrql);

	// I'll add features if it gets detected, currently I think I bypassed all
	// WITHOUT barricade method, so I'll keep it next

	TODO("Add detailed tracing");

	// -=-=-=-=-=-=-=-=-=-=-=-= Debug -=-=-=-=-=-=-=-=-=-=-=-=

	UNREFERENCED_PARAMETER(stack);

	UINT64* pte = NULL;
	for (size_t level = 4;; level--) {
		pte = GetPageTableEntryPointer(faultAddress, level);
		if (*pte & 1) { // Present?
			break;
		}
	}

	if (pte) {
		// It should be false positive. (or BSOD..)
		*pte &= ~(1ULL << 63);
	}
	else {
		return FALSE; // We couldn't find the PTE, so we can't fix it.
	}

	return TRUE;
}

BOOLEAN wsbp::Barricade::FlipPteNxBitIdPc(KDPC* Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2) {
	UNREFERENCED_PARAMETER(Dpc);
	UNREFERENCED_PARAMETER(DeferredContext);

	auto LambdaRecursePteToFlip = [ ](auto&& self, PVOID virtualAddress, size_t remainingRecurse) {
		
		UINT64* ptEntryPtr = GetPageTableEntryPointer(virtualAddress, remainingRecurse);
		if (!(*ptEntryPtr & 1)) { // not present
			return;
		}
		
		if (remainingRecurse > 1) { // not PTE

			if (!((*ptEntryPtr >> 7) & 0x1)) { // not large page
				
				for (size_t ipte = 0; ipte < 512; ipte++) {
					self(self,
						(PVOID)((uintptr_t)virtualAddress | (ipte << (12 + 9 * (remainingRecurse - 2)))),
						remainingRecurse - 1);
				}
				return;

			}

			// We do process large pages.
		}

		// Check if it is RWX.
		//         Can't Read/Write    or        execute_disable
		if (!((*ptEntryPtr >> 1) & 0x1) || ((*ptEntryPtr >> 63) & 0x1)) {
			return;
		}

		if ((*ptEntryPtr >> 2) & 1) { // Usermode
			LogVerbose("LambdaRecursePteToFlip: Virtual Address %p is in usermode, skipping..", virtualAddress);
			return;
		}

		// Check if it is our driver code section.
		if ((uintptr_t)virtualAddress < gl::RtVar::Self::SelfBase + gl::RtVar::Self::SelfSize &&
			(uintptr_t)virtualAddress >= gl::RtVar::Self::SelfBase) {
			LogVerbose("LambdaRecursePteToFlip: Virtual Address %p is in our driver, skipping..", virtualAddress);
			return;
		}

		*ptEntryPtr |= (1ULL << 63); // Flip the NX bit.
	};

	// Since we have same PTE base for every core, we can multithread it to improve performance.
	size_t procTotal = KeQueryActiveProcessorCountEx(0);
	size_t procNum = KeGetCurrentProcessorNumberEx(0);

	size_t rangePerCpu = max(256 / procTotal, 1);
	size_t rangeStart = min(256 + procNum * rangePerCpu, 512);
	size_t rangeEnd = min(256 + (procNum + 1) * rangePerCpu, 512);

	if (procNum == procTotal - 1) {
		rangeEnd = 512;
	}

	LogVerbose("FlipPteNxBitIdPc: CPU %llu doing [%llu, %llu)", procNum, rangeStart, rangeEnd);

	for (size_t ipxe = rangeStart; ipxe < rangeEnd; ipxe++) { // Iterate PML4s to initiate the recursive routine.
		if (ToIgnoreIpxe(ipxe)) {
			continue;
		}

		LambdaRecursePteToFlip(LambdaRecursePteToFlip,
			MakeCanonicalAddress((PVOID)(ipxe << 39)),
			4);
	}

	// Lastly flush TLB.
	FlushTlb;

	KeSignalCallDpcSynchronize(SystemArgument2);
	KeSignalCallDpcDone(SystemArgument1);

	return TRUE;
}

VOID wsbp::Barricade::FlipPteNxBit() {

	// This also need to be processed on individual processor.
	KeGenericCallDpc((PKDEFERRED_ROUTINE)FlipPteNxBitIdPc, NULL);

	LogInfo("FlipPteNxBit: Done.");

	return;
}

BOOLEAN wsbp::Barricade::InjectCustomInterruptHandlerIdPc(KDPC* Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2) {
	
	UNREFERENCED_PARAMETER(Dpc);
	UNREFERENCED_PARAMETER(DeferredContext);

	KeSignalCallDpcSynchronize(SystemArgument2);
	KeSignalCallDpcDone(SystemArgument1);

	return TRUE;
}

VOID wsbp::Barricade::InjectCustomInterruptHandler() {

	KeGenericCallDpc((PKDEFERRED_ROUTINE)InjectCustomInterruptHandlerIdPc, NULL);
	
	LogInfo("InjectCustomInterruptHandler: Done.");

	return;
}

BOOLEAN wsbp::Barricade::SetupBarricade() {

	InjectCustomInterruptHandler();
	FlipPteNxBit();

	LogInfo("SetupBarricade: Barricade was successfully set up.");

	return TRUE;
}

void wsbp::Barricade::TrampolineArea() {
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
	DbgBreakPoint();
}