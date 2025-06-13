/*
 * @file Module.cpp
 * @brief Implementation of Module.hpp
 */

#include "Module.hpp"
#include "Log.hpp"

BOOLEAN wsbp::BypassPatchGuard() {

	if (!Timer::DisableAllTimers()) {
		return FALSE;
	}
	
	if (!Context7::DestroyContext7()) {
		return FALSE;
	}

	if (!Misc::DisableMiscRoutines()) {
		return FALSE;
	}

	if (!Barricade::SetupBarricade()) {
		return FALSE;
	}
	

	DbgPrintEx(0, 0, "BypassPatchGuard: Bypassed PatchGuard, enjoy ;)");

	return TRUE;
}