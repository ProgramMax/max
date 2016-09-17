// Copyright 2016, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Hardware/CPU/CPUIDPolicies/X64AssemblyCPUIDPolicy.hpp>
#include <max/Compiling/UnreferencedValue.hpp>

namespace max
{
namespace CPU
{
	void X64AssemblyCPUIDPolicy::CPUID( CPUIDSubleafResult & Registers, uint32_t Leaf ) noexcept
	{
		max::Compiling::UnreferencedValue( Registers );
		max::Compiling::UnreferencedValue( Leaf );
		max_Hardware_CPU_CPUIDPolicies_CPUID(/*Registers, Leaf */);
	}

	void X64AssemblyCPUIDPolicy::CPUIDExtended( CPUIDSubleafResult & Registers, uint32_t Leaf, uint32_t Subleaf ) noexcept
	{
		max::Compiling::UnreferencedValue( Registers );
		max::Compiling::UnreferencedValue( Leaf );
		max::Compiling::UnreferencedValue( Subleaf );
		max_Hardware_CPU_CPUIDPolicies_CPUIDExtended(/* Registers, Leaf, Subleaf */);
	}

} // namespace CPU
} // namespace max