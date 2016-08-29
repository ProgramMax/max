#include <max/Hardware/CPU/GCCAssemblyCPUIDPolicy.hpp>

namespace max
{
namespace CPU
{

	void GCCAssemblyCPUIDPolicy::CPUID( CPUIDSubleafResult & Registers, uint32_t Leaf ) noexcept
	{
		uint32_t a, b, c, d;
		// #if defined(__GNUC__)
		__asm( "cpuid" : "=a"( a ), "=b"( b ), "=c"( c ), "=d"( d ) : "a"( Leaf ), "c"( 0 ) : );
		Registers.EAX = a;
		Registers.EBX = b;
		Registers.ECX = c;
		Registers.EDX = d;
	}

	void GCCAssemblyCPUIDPolicy::CPUIDExtended( CPUIDSubleafResult & Registers, uint32_t Leaf, uint32_t Subleaf ) noexcept
	{
		uint32_t a, b, c, d;
		__asm( "cpuid" : "=a"( a ), "=b"( b ), "=c"( c ), "=d"( d ), "a"( Leaf ), "c"( Subleaf ) : );
		Registers.EAX = a;
		Registers.EBX = b;
		Registers.ECX = c;
		Registers.EDX = d;
	}

} // namespace CPU
} // namespace max