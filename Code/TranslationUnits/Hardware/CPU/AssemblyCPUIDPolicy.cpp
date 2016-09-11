// Copyright 2016, Chris Blume
// All rights reserved.

#include <max/Hardware/CPU/AssemblyCPUIDPolicy.hpp>

namespace max
{
namespace CPU
{
	void AssemblyCPUIDPolicy::CPUID( CPUIDSubleafResult & Registers, uint32_t Leaf ) noexcept
	{
		auto * RegistersPointer = & Registers;
		__asm
		{
			mov   esi, RegistersPointer
			mov   eax, Leaf
			xor   ecx, ecx
			cpuid
			mov   dword ptr[esi +  0], eax
			mov   dword ptr[esi +  4], ebx
			mov   dword ptr[esi +  8], ecx
			mov   dword ptr[esi + 12], edx
		}
	}

	void AssemblyCPUIDPolicy::CPUIDExtended( CPUIDSubleafResult & Registers, uint32_t Leaf, uint32_t Subleaf ) noexcept
	{
		auto * RegistersPointer = & Registers;
		__asm
		{
			mov   esi, RegistersPointer
			mov   eax, Leaf
			mov   ecx, Subleaf
			cpuid
			mov   dword ptr[esi +  0], eax
			mov   dword ptr[esi +  4], ebx
			mov   dword ptr[esi +  8], ecx
			mov   dword ptr[esi + 12], edx
		}
	}

} // namespace CPU
} // namespace max