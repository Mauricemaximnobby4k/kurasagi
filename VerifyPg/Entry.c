/*
 * @file Entry.c
 * @brief Entry point for the VerifyPg driver.
 */

#include "Hook.h"

size_t ExQueueWorkItemOpSize = 15;

VOID (NTAPI *OriginalKeBugCheckEx)(
	_In_ ULONG BugCheckCode,
	_In_ ULONG_PTR BugCheckParameter1,
	_In_ ULONG_PTR BugCheckParameter2,
	_In_ ULONG_PTR BugCheckParameter3,
	_In_ ULONG_PTR BugCheckParameter4
);

VOID NTAPI HookedKeBugCheckEx(
	_In_ ULONG BugCheckCode,
	_In_ ULONG_PTR BugCheckParameter1,
	_In_ ULONG_PTR BugCheckParameter2,
	_In_ ULONG_PTR BugCheckParameter3,
	_In_ ULONG_PTR BugCheckParameter4
) {

	/*
	if (BugCheckCode == 0x109) {
		return;
	}
	*/

	OriginalKeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}

NTSTATUS DriverEntry(
	_In_ PDRIVER_OBJECT		DriverObject,
	_In_ PUNICODE_STRING	RegistryPath
)
{
	UNREFERENCED_PARAMETER(RegistryPath);
	UNREFERENCED_PARAMETER(DriverObject);

	UNICODE_STRING routineString = { 0 };
	RtlInitUnicodeString(&routineString, L"KeBugCheckEx");
	
	void* KeBugCheckExPtr = MmGetSystemRoutineAddress(&routineString);
	if (!KeBugCheckExPtr) {
		DbgPrintEx(0, 0, "Wtf was happened??\n");
		return STATUS_UNSUCCESSFUL;
	}

	// 10000 years ago exploit :skull:
	if (NT_SUCCESS(HkDetourFunction(KeBugCheckExPtr, (PVOID)HookedKeBugCheckEx, 15, (PVOID*)&OriginalKeBugCheckEx))) {
		DbgPrintEx(0, 0, "DriverEntry called. hooked.\n");
		return STATUS_UNSUCCESSFUL;
	}
	else {
		DbgPrintEx(0, 0, "DriverEntry called. hook failed.\n");
		return STATUS_SUCCESS;
	}
}