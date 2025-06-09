/*
 * @file Timer.cpp
 * @brief Implementation of Timer.hpp
 */

#include "Timer.hpp"
#include "../Global.hpp"
#include "../Log.hpp"

BOOLEAN IsCanonicalAddress(PVOID address) {
	UINT64 bit47 = ((UINT64)address >> 47) & 1;
	if (bit47 * 0xFFFF != ((UINT64)address >> 48)) {
		return FALSE;
	}
	return TRUE;
}

BOOLEAN wsbp::Timer::GetPatchGuardTimers(
	PKTIMER* pOutList,
	size_t* pCount
) {

	GROUP_AFFINITY oldAff, target = {0};
	target.Group = 0;
	size_t totalCount = 0;

	// First we should check all per-cpu PRCB.
	for (USHORT i = 0; i < KeQueryActiveProcessorCountEx(0); ++i) {
		target.Mask = 1ull << i;
		KeSetSystemGroupAffinityThread(&target, &oldAff); // Start per-cpu routine..
		
		LogInfo("GetPatchGuardTimers: Searching for cpu %lu", KeGetCurrentProcessorNumberEx(0));

		KTIMER_TABLE_ENTRY* timerTableEntry = \
			(KTIMER_TABLE_ENTRY*)((uintptr_t)gl::RtVar::KeGetCurrentPrcbPtr() + gl::Offsets::PrcbTimerTableOff + gl::Offsets::TimerTableEntryOff);

		for (size_t j = 0; j < gl::Constants::TimerTableEntryCount; j++) {
			PKTIMER_TABLE_ENTRY timerEntry = &timerTableEntry[j];
			KIRQL oldIrql = {0};

			KeAcquireSpinLock(&timerEntry->Lock, &oldIrql);
			if (!IsListEmpty(&timerEntry->Entry)) {
				PLIST_ENTRY currentListEntry = timerEntry->Entry.Flink;
				while (currentListEntry != &timerEntry->Entry) {
					PKTIMER currentTimer = CONTAINING_RECORD(currentListEntry, KTIMER, TimerListEntry);
					if (IsPatchGuardTimer(currentTimer)) {
						if (pOutList != NULL) {
							if (pCount != NULL && totalCount >= *pCount) {
								LogError("GetPatchGuardTimers: pOutList is not enough to hold all timers, pCount: %llu", *pCount);
								return FALSE;
							}
							pOutList[totalCount] = currentTimer;
						}
						totalCount++;
					}

					currentListEntry = currentListEntry->Flink;
				}
			}
			KeReleaseSpinLock(&timerEntry->Lock, oldIrql);
		}
		KeRevertToUserGroupAffinityThread(&oldAff);
	}

	if (pOutList == NULL) {
		if (pCount == NULL) {
			LogError("GetPatchGuardTimers: pCount should be not null, but it is null");
			return FALSE;
		}
		*pCount = totalCount;
	}
	else {
		if (pCount != NULL && *pCount != totalCount) {
			LogError("GetPatchGuardTimers: Mismatch on total counts, something's wrong...");
			return FALSE;
		}
	}
	
	return TRUE;
}

BOOLEAN wsbp::Timer::IsPatchGuardTimer(PKTIMER pTimer) {
	PKDPC kdpcContent = GetDecryptedDpc(pTimer);
	if (kdpcContent == NULL) return FALSE;

	if (IsCanonicalAddress(kdpcContent->DeferredContext) == FALSE) {
		LogInfo("IsPatchGuardTimer: Timer %p is detected by canonical address check", pTimer);
		return TRUE; // PatchGuard timer's DpcContext is not canonical address.
	}
	if (kdpcContent->DeferredRoutine == gl::RtVar::CcBcbProfilerPtr || kdpcContent->DeferredRoutine == gl::RtVar::CcBcbProfiler2Ptr) {
		LogInfo("IsPatchGuardTimer: Timer %p is detected by CcInitializeBcbProfiler check", pTimer);
		return TRUE; // We should detect standalone detection routine - CcInitializeBcbProfiler.
	}

	return FALSE;
}

PKDPC wsbp::Timer::GetDecryptedDpc(PKTIMER pTimer) {
	return (PKDPC)(*gl::RtVar::KiWaitAlwaysPtr ^ _byteswap_uint64(\
		(UINT64)pTimer ^ _rotl64(\
			(UINT64)pTimer->Dpc ^ *gl::RtVar::KiWaitNeverPtr, \
			(UCHAR)*gl::RtVar::KiWaitNeverPtr \
		)));
}