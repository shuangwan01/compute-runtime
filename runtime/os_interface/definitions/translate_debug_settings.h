/*
 * Copyright (C) 2019 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#pragma once

namespace NEO {

struct DebugVariables;

inline void translateDebugSettingsBase(DebugVariables &) {
}

void translateDebugSettings(DebugVariables &);

} // namespace NEO
