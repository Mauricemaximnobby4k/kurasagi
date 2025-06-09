/*
 * @file Timer.hpp
 * @brief PatchGuard Timer bypass
 */

#pragma once

#include "../Include.hpp"

namespace wsbp {
	namespace Timer {

		typedef struct _KTIMER_TABLE_ENTRY
		{
			unsigned __int64 Lock;
			_LIST_ENTRY Entry;
			_ULARGE_INTEGER Time;
		} KTIMER_TABLE_ENTRY, * PKTIMER_TABLE_ENTRY;

		/*
		 * @brief Get PatchGuard KTIMER Objects.
		 * @param pOutList: Pointer to receive KTIMER Obejct List. if `NULL`, `pCount` will be returned.
		 * @param pCount: Pointer to receive count of KTIMER Object List. if `pOutList` is not `NULL`, this parameter will be ignored.
		 * @returns `TRUE` if operation was successful, `FALSE` otherwise.
		 */
		BOOLEAN GetPatchGuardTimers(
			PKTIMER* pOutList,
			size_t* pCount
		);

		/*
		 * @brief Judge if it is PatchGuard Timer.
		 * @param pTimer: Pointer to timer object.
		 * @returns `TRUE` if it is PatchGuard Timer, `FALSE` if it is not PatchGuard Timer.
		 */
		BOOLEAN IsPatchGuardTimer(
			PKTIMER pTimer
		);

		/*
		 * @brief Decrypt KTIMER's DPC content.
		 * @param pTimer: Pointer to timer object.
		 * @returns PKDPC Dpc Object.
		 */
		PKDPC GetDecryptedDpc(
			PKTIMER pTimer
		);
	}
}