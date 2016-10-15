// Copyright 2016, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Hardware/CPU/CPUIDPolicies/X64GCCAssemblyCPUIDPolicy.hpp>

namespace max
{
namespace CPU
{

	void X64GCCAssemblyCPUIDPolicy::CPUID( CPUIDSubleafResult & Registers, uint32_t Leaf ) noexcept
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
			: "rax",
			  "rbx",
			  "rcx",
			  "rdx" );
	}

	void X64GCCAssemblyCPUIDPolicy::CPUIDExtended( CPUIDSubleafResult & Registers, uint32_t Leaf, uint32_t Subleaf ) noexcept
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
			: "rax",
			  "rbx",
			  "rcx",
			  "rdx" );
	}

} // namespace CPU
} // namespace max
