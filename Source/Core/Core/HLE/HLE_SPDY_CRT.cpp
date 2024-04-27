#ifdef SPDY_HLE_EX
#include "HLE_SPDY_CRT.h"

#include "Common/Common.h"
#include "Common/CommonTypes.h"
#include "Core/Core.h"
#include "Core/GeckoCode.h"
#include "Core/HW/CPU.h"
#include "Core/Host.h"
#include "Core/PowerPC/MMU.h"
#include "Core/PowerPC/PowerPC.h"
#include "Core/System.h"

namespace HLE_SPDY_CRT
{
// High level emulation of the `sqrt` function.
// This takes in a 64-bit double and while games do just do a 64-bit
// sqrt on 32-bit operands, it's what they do.
void HLE_CRT_Sqrt(const Core::CPUThreadGuard& guard)
{
  auto& system = guard.GetSystem();
  auto& ppc_state = system.GetPPCState();

  const double operand = ppc_state.ps[1].PS0AsDouble();
  ppc_state.ps[1].Fill(sqrt(operand));
  ppc_state.npc = LR(ppc_state);
}

void HLE_CRT_Sin(const Core::CPUThreadGuard& guard)
{
  auto& system = guard.GetSystem();
  auto& ppc_state = system.GetPPCState();

  const double operand = ppc_state.ps[1].PS0AsDouble();
  ppc_state.ps[1].Fill(sin(operand));
  ppc_state.npc = LR(ppc_state);
}

void HLE_CRT_Cos(const Core::CPUThreadGuard& guard)
{
  auto& system = guard.GetSystem();
  auto& ppc_state = system.GetPPCState();

  const double operand = ppc_state.ps[1].PS0AsDouble();
  ppc_state.ps[1].Fill(cos(operand));
  ppc_state.npc = LR(ppc_state);
}

void HLE_CRT_Tan(const Core::CPUThreadGuard& guard)
{
  auto& system = guard.GetSystem();
  auto& ppc_state = system.GetPPCState();

  const double operand = ppc_state.ps[1].PS0AsDouble();
  ppc_state.ps[1].Fill(tan(operand));
  ppc_state.npc = LR(ppc_state);
}
}  // namespace HLE_SPDY_CRT
#endif
