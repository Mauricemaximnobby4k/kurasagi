/*
 * @file Entry.cpp
 * @brief Entry Point.
 */

#include "Include.hpp"
#include "Module.hpp"
#include "Global.hpp"
#include "Log.hpp"

extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
	UNREFERENCED_PARAMETER(DriverObject);
	UNREFERENCED_PARAMETER(RegistryPath);
	
	if (!gl::RtVar::InitializeRuntimeVariables()) {
		LogError("DriverEntry: Failed to initialize runtime variables.");
		return STATUS_UNSUCCESSFUL;
	}
	
	PKTIMER* timerList = NULL;
	size_t timerCount = 0;

	if (!wsbp::Timer::GetPatchGuardTimers(NULL, &timerCount)) {
		return STATUS_UNSUCCESSFUL;
	}

	timerList = (PKTIMER*)ExAllocatePool2(POOL_FLAG_PAGED, sizeof(PKTIMER) * timerCount, KURASAGI_POOL_TAG);
	if (timerList == NULL) {
		LogError("DriverEntry: Couldn't allocate timerList, sizeof %llu", sizeof(PKTIMER) * timerCount);
		return STATUS_UNSUCCESSFUL;
	}

	if (!wsbp::Timer::GetPatchGuardTimers(timerList, &timerCount)) {
		ExFreePoolWithTag(timerList, KURASAGI_POOL_TAG);
		return STATUS_UNSUCCESSFUL;
	}

	for (size_t i = 0; i < timerCount; i++) {
		LogInfo("Timer %llu: %p", i, timerList[i]);
	}
	LogInfo("Timer counts: %llu", timerCount);

	ExFreePoolWithTag(timerList, KURASAGI_POOL_TAG);

	return STATUS_SUCCESS;
}