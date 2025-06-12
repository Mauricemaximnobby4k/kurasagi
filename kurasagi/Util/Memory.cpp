/*
 * @file Memory.cpp
 * @brief Implementation for Memory.hpp
 */

#include "Memory.hpp"
#include "../Log.hpp"
#include "../Global.hpp"

BOOLEAN WriteOnReadOnlyMemory(PVOID src, PVOID dst, size_t size) {

	PMDL mdl = NULL;

	if (size == 0) return TRUE;
	mdl = IoAllocateMdl(dst, (ULONG)size, FALSE, FALSE, NULL);

	if (mdl == NULL) {
		LogError("WriteOnReadOnlyMemory: Mdl allocation failed");
		return FALSE;
	}

	PVOID mapped = NULL;
	BOOLEAN success = FALSE;

	__try {
		MmProbeAndLockPages(mdl, KernelMode, IoReadAccess);
		mapped = MmMapLockedPagesSpecifyCache(mdl, KernelMode, MmNonCached, NULL, FALSE, NormalPagePriority);

		if (mapped == NULL) {
			LogError("WriteOnReadOnlyMemory: MmMapLockedPagesSpecifyCache failed");
			__leave;
		}

		MmProtectMdlSystemAddress(mdl, PAGE_READWRITE);
		RtlCopyMemory(mapped, src, size);

		success = TRUE;
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		LogError("WriteOnReadOnlyMemory: Something went wrong, error code: 0x%X", GetExceptionCode());
		success = FALSE;
	}

	if (mapped != NULL) {
		MmUnmapLockedPages(mapped, mdl);
	}

	if (mdl != NULL) {
		MmUnlockPages(mdl);
		IoFreeMdl(mdl);
	}

	return success;
}


BOOLEAN IsCanonicalAddress(PVOID address) {
	UINT64 bit47 = ((UINT64)address >> 47) & 1;
	if (bit47 * 0xFFFF != ((UINT64)address >> 48)) {
		LogVerbose("IsCanonicalAddress: address %p is not canonical address!", address);
		return FALSE;
	}
	return TRUE;
}

UCHAR GetPml4eVaType(size_t index) {

	if (index < 256 || index >= 512) {
		return 0xFF;
	}

	UCHAR* systemVaType = (UCHAR*)((uintptr_t)*gl::RtVar::MiVisibleStatePtr + gl::Offsets::SystemVaTypeOff);
	return systemVaType[index - 256];

}

UINT64* GetPageTableEntryPointer(PVOID v, size_t level) {
	if (level == 0 || level > 4) {
		LogError("GetPageTableEntryPointer: Level is invalid!");
		return NULL;
	}

	UINT64* ptePointer = NULL;

	if (level == 1) { // Pt
		ptePointer = (UINT64*)(gl::RtVar::Pte::MmPteBase + (((ULONG64)v >> 9) & 0x7F'FFFF'FFF8));
	}
	else if (level == 2) { // Pd
		ptePointer = (UINT64*)(gl::RtVar::Pte::MmPdeBase + (((ULONG64)v >> 18) & 0x3FFF'FFF8));
	}
	else if (level == 3) { // Pdpt
		ptePointer = (UINT64*)(gl::RtVar::Pte::MmPdpteBase + (((ULONG64)v >> 27) & 0x1F'FFF8));
	}
	else { // level == 4, Pml4
		ptePointer = (UINT64*)gl::RtVar::Pte::MmPml4eBase + (((ULONG64)v >> 39) & 0x1FF);
	}
	
	return ptePointer;
}

PVOID MakeCanonicalAddress(PVOID address) {

	uintptr_t trimmedAddress = ((uintptr_t)address << 16) >> 16;
	
	if ((trimmedAddress >> 47) & 0x1) {
		trimmedAddress |= 0xFFFF'0000'0000'0000;
	}

	return (PVOID)trimmedAddress;
}