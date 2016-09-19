// Copyright 2016, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Hardware/CPU/IsCPUIDAvailablePolicies/X64AssemblyIsCPUIDAvailablePolicy.hpp>

extern "C"
{
	bool __cdecl max_Hardware_CPU_X64AssemblyIsCPUIDAvailablePolicies_IsCPUIDAvailable();
}

namespace max
{
namespace CPU
{

	bool X64AssemblyIsCPUIDAvailablePolicy::IsCPUIDAvailable() noexcept
	{
		return max_Hardware_CPU_X64AssemblyIsCPUIDAvailablePolicies_IsCPUIDAvailable();
	}

} // namespace CPU
} // namespace max