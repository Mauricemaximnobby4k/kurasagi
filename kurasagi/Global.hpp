/*
 * @file Global.hpp
 * @brief Global definitions, structs, and etc..
 */

#pragma once

#include "Include.hpp"

namespace gl {

	namespace Constants {
		const size_t TimerTableEntryCount = 512;
	}

	namespace Offsets {

		// Function Offsets.
		const size_t KiWaitAlwaysOff = 0xFC6260;
		const size_t KiWaitNeverOff = 0xFC5F80;
		const size_t KeBugCheckExOff = 0x5017D0;
		const size_t KeGetCurrentPrcbOff = 0x451A20;
		const size_t CcBcbProfilerOff = 0x50DAB0;
		const size_t CcBcbProfiler2Off = 0x6F86E0;

		// Timer
		const size_t PrcbTimerTableOff = 0x4100;
		const size_t TimerTableEntryOff = 0x200;
	}

	namespace RtVar {
		extern void* KernelBase;
		extern ULONG64* KiWaitAlwaysPtr;
		extern ULONG64* KiWaitNeverPtr;
		extern void* KeBugCheckExPtr;
		extern void* (*KeGetCurrentPrcbPtr)();
		extern void* CcBcbProfilerPtr;
		extern void* CcBcbProfiler2Ptr;

		BOOLEAN InitializeRuntimeVariables();
	}
}

constexpr auto KURASAGI_POOL_TAG = 'Krsg';