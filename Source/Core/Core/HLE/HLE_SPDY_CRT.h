#ifdef SPDY_HLE_EX
#pragma once

#include <optional>
#include <string>

#include "Common/CommonTypes.h"

namespace Core
{
class CPUThreadGuard;
};

namespace HLE_SPDY_CRT
{
void HLE_CRT_Sqrt(const Core::CPUThreadGuard& guard);
void HLE_CRT_Sin(const Core::CPUThreadGuard& guard);
void HLE_CRT_Cos(const Core::CPUThreadGuard& guard);
void HLE_CRT_Tan(const Core::CPUThreadGuard& guard);
}  // namespace HLE_SPDY_CRT

#endif
