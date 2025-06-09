/*
 * @file Log.hpp
 * @brief Log functions
 */

#include "Include.hpp"

#define LogDbgViewInfo(Format, ...) DbgPrintEx(0, 0, "[Kurasagi] INFO: " Format "\n", __VA_ARGS__)

#define LogDbgViewError(Format, ...) DbgPrintEx(0, 0, "[Kurasagi] ERROR: " Format "\n", __VA_ARGS__)

#if DBG

#define LogInfo(Format, ...) LogDbgViewInfo(Format, __VA_ARGS__)
#define LogError(Format, ...) LogDbgViewError(Format, __VA_ARGS__)

#else

 // TODO: Add log to file when release mode.
#define LogInfo(Format, ...)
#define LogError(Format, ...)

#endif