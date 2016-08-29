// Copyright 2016, Chris Blume
// All rights reserved.

#ifndef MAX_CPU_ASSEMBLYCPUIDPOLICY_HPP
#define MAX_CPU_ASSEMBLYCPUIDPOLICY_HPP

#include <array>
#include <cstdint>
#include "CPUIDSubleafResult.hpp"

namespace max
{
namespace CPU
{

	class AssemblyCPUIDPolicy
	{
	public:
		
		static void CPUID(         CPUIDSubleafResult & Registers, uint32_t Leaf )                   noexcept;
		static void CPUIDExtended( CPUIDSubleafResult & Registers, uint32_t Leaf, uint32_t Subleaf ) noexcept;

	};

} // namespace CPU
} // namespace max

#endif // #ifndef MAX_CPU_ASSEMBLYCPUIDPOLICY_HPP