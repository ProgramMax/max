// Copyright 2016, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Hardware/CPU/CPUIDPolicies/X64AssemblyCPUIDPolicy.hpp>

extern "C"
{
	void __cdecl max_Hardware_CPU_CPUIDPolicies_CPUID(         max::CPU::CPUIDSubleafResult & Registers, uint32_t Leaf );
	void __cdecl max_Hardware_CPU_CPUIDPolicies_CPUIDExtended( max::CPU::CPUIDSubleafResult & Registers, uint32_t Leaf, uint32_t Subleaf );
}

namespace max
{
namespace CPU
{

	void X64AssemblyCPUIDPolicy::CPUID( CPUIDSubleafResult & Registers, uint32_t Leaf ) noexcept
	{
		max_Hardware_CPU_CPUIDPolicies_CPUID( Registers, Leaf );
	}

	void X64AssemblyCPUIDPolicy::CPUIDExtended( CPUIDSubleafResult & Registers, uint32_t Leaf, uint32_t Subleaf ) noexcept
	{
		max_Hardware_CPU_CPUIDPolicies_CPUIDExtended( Registers, Leaf, Subleaf );
	}

} // namespace CPU
} // namespace max