/*
 * @file Barricade.hpp
 * @brief Implementation of Barricade method to bypass PatchGuard
 */

#pragma once

#include "../Include.hpp"

namespace wsbp {

	/*
	 * Barricade method is so powerful.
	 * It will automatically bypass APC method, thread method, DPC hook method.
	 * It is for extra safety and stack-tracing.
	 */
	namespace Barricade {

		/*
		 * @brief Flip (by individual processors) PTE's NX bit.
		 * @returns `TRUE` if operation was successful, `FALSE` otherwise.
		 */
		VOID FlipPteNxBit();
		BOOLEAN FlipPteNxBitIdPc(KDPC* Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2);

		/*
		 * @brief Inject Custom Interrupt Handler (specifically for Execute Access handler)
		 * @details Inject it directly to IDT so we can handle it.
		 * @returns `TRUE` if operation was successful, `FALSE` otherwise.
		 */
		VOID InjectCustomInterruptHandler();
		BOOLEAN InjectCustomInterruptHandlerIdPc(KDPC* Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2);

		/*
		 * @brief Desiring custom NX fault handler.
		 * @returns `TRUE` if could handled. `FALSE` otherwise. the wrapout routine is `HkMmAccessFault`.
		 */
		BOOLEAN CustomNxFaultHandler(void* faultAddress, PKTRAP_FRAME trapFrame);
		NTSTATUS NTAPI HkMmAccessFault(
			_In_ ULONG FaultCode,
			_In_ PVOID Address,
			_In_ KPROCESSOR_MODE Mode,
			_In_ PVOID TrapInformation
		);

		// Used to be store trampoline shellcode. max 32 bytes.
		void TrampolineArea();

		/*
		 * @brief Setup Barricade.
		 * @returns `TRUE` if operation was successful, `FALSE` otherwise.
		 */
		BOOLEAN SetupBarricade();

	}
}