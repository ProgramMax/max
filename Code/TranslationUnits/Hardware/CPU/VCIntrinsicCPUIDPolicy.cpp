#include <max/Hardware/CPU/VCIntrinsicCPUIDPolicy.hpp>
#include <intrin.h>

namespace max
{
namespace CPU
{

	void VCIntrinsicCPUIDPolicy::CPUID( CPUIDSubleafResult & Registers, uint32_t Leaf ) noexcept
	{
		static_assert( sizeof( uint32_t ) == sizeof( int ), "VC's intrinsic requires an int for the registers" );
		__cpuid( reinterpret_cast< int * >( & Registers ), Leaf );
	}

	void VCIntrinsicCPUIDPolicy::CPUIDExtended( CPUIDSubleafResult & Registers, uint32_t Leaf, uint32_t Subleaf ) noexcept
	{
		static_assert( sizeof( uint32_t ) == sizeof( int ), "VC's intrinsic requires an int for the registers" );
		__cpuidex( reinterpret_cast< int * >( & Registers ), Leaf, Subleaf );
	}

} // namespace CPU
} // namespace max