#ifndef MAX_CPU_VCINTRINSICCPUIDPOLICY_HPP
#define MAX_CPU_VCINTRINSICCPUIDPOLICY_HPP

#include <array>
#include <cstdint>
#include "CPUIDSubleafResult.hpp"

namespace max
{
namespace CPU
{

	class VCIntrinsicCPUIDPolicy
	{
	public:

		static void CPUID(         CPUIDSubleafResult & Registers, uint32_t Leaf )                   noexcept;
		static void CPUIDExtended( CPUIDSubleafResult & Registers, uint32_t Leaf, uint32_t Subleaf ) noexcept;

	};

} // namespace CPU
} // namespace max

#endif // #ifndef MAX_CPU_VCINTRINSICCPUIDPOLICY_HPP