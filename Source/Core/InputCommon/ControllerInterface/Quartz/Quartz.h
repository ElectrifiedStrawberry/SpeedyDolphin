// Copyright 2016 Dolphin Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "InputCommon/ControllerInterface/InputBackend.h"

namespace ciface::Quartz
{
std::unique_ptr<ciface::InputBackend> CreateInputBackend(ControllerInterface* controller_interface);
}  // namespace ciface::Quartz
