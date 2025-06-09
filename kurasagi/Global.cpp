/*
 * @file Global.cpp
 * @brief Implementation of Global.hpp
 */

#include "Global.hpp"
#include "Log.hpp"

void* gl::RtVar::KernelBase = NULL;
ULONG64* gl::RtVar::KiWaitAlwaysPtr = NULL;
ULONG64* gl::RtVar::KiWaitNeverPtr = NULL;
void* gl::RtVar::KeBugCheckExPtr = NULL;
void* (*gl::RtVar::KeGetCurrentPrcbPtr)() = NULL;
void* gl::RtVar::CcBcbProfilerPtr = NULL;
void* gl::RtVar::CcBcbProfiler2Ptr = NULL;

BOOLEAN gl::RtVar::InitializeRuntimeVariables() {

	// Try to get kernel base by usually known 'PIE-Base trick'
	UNICODE_STRING strKeBugCheckEx;
	RtlInitUnicodeString(&strKeBugCheckEx, L"KeBugCheckEx");
	KeBugCheckExPtr = MmGetSystemRoutineAddress(&strKeBugCheckEx);

	if (!KeBugCheckExPtr) {
		LogError("InitializeRuntimeVariables: Couldn't get KeBugCheckEx routine address, what?");
		return FALSE;
	}

	KernelBase = (void*)((uintptr_t)KeBugCheckExPtr - gl::Offsets::KeBugCheckExOff);

	// Check sanity: It should be aligned to PAGE_SIZE..
	if (((ULONG64)KernelBase & 0xFFFULL) != 0) {
		LogError("InitializeRuntimeVariables: Kernel Base is not aligned to PAGE_SIZE");
		return FALSE;
	}

	// Check Sanity: It should start with 5A4D..
	__try {
		if (*(unsigned short*)KernelBase != 0x5A4D) {
			LogError("InitializeRuntimeVariables: KernelBase does not start with PE header.");
			return FALSE;
		}
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		LogError("InitializeRuntimeVariables: Cannot derefer KernelBase pointer");
		return FALSE;
	}

	KiWaitAlwaysPtr = (ULONG64*)((uintptr_t)KernelBase + gl::Offsets::KiWaitAlwaysOff);
	KiWaitNeverPtr = (ULONG64*)((uintptr_t)KernelBase + gl::Offsets::KiWaitNeverOff);
	KeGetCurrentPrcbPtr = (void* (*)())((uintptr_t)KernelBase + gl::Offsets::KeGetCurrentPrcbOff);
	CcBcbProfilerPtr = (void*)((uintptr_t)KernelBase + gl::Offsets::CcBcbProfilerOff);
	CcBcbProfiler2Ptr = (void*)((uintptr_t)KernelBase + gl::Offsets::CcBcbProfiler2Off);

	return TRUE;
}