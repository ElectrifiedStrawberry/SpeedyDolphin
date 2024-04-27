#ifndef SPDY_HLE_EX
#pragma once

#include <optional>
#include <string>

#include "Common/CommonTypes.h"

namespace Core
{
class CPUThreadGuard;
};

void HLE_CRT_Sqrt(const Core::CPUThreadGuard& guard);
void HLE_CRT_Sin(const Core::CPUThreadGuard& guard);
void HLE_CRT_Cos(const Core::CPUThreadGuard& guard);
void HLE_CRT_Tan(const Core::CPUThreadGuard& guard);

#endif
