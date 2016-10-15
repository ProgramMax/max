// Copyright 2016, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Hardware/CPU/CPUIDPolicies/X86GCCAssemblyCPUIDPolicy.hpp>

namespace max
{
namespace CPU
{

	void X86GCCAssemblyCPUIDPolicy::CPUID( CPUIDSubleafResult & Registers, uint32_t Leaf ) noexcept
	{
		__asm__( R"(
			cpuid
		)"
			: "=eax"( Registers.EAX ),
			  "=ebx"( Registers.EBX ),
			  "=ecx"( Registers.ECX ),
			  "=edx"( Registers.EDX )
			: "eax"( Leaf ),
			  "ecx"( 0 )
			: );
	}

	void X86GCCAssemblyCPUIDPolicy::CPUIDExtended( CPUIDSubleafResult & Registers, uint32_t Leaf, uint32_t Subleaf ) noexcept
	{
		__asm__( R"(
			cpuid
		)"
			: "=eax"( Registers.EAX ),
			  "=ebx"( Registers.EBX ),
			  "=ecx"( Registers.ECX ),
			  "=edx"( Registers.EDX )
			: "eax"( Leaf ),
			  "ecx"( Subleaf )
			: );
	}

} // namespace CPU
} // namespace max
