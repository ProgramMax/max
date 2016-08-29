#include <max/Hardware/CPU/Prefetch.hpp>

namespace max
{
namespace CPU
{

	Prefetch::Prefetch( const uint32_t SizeInBytes ) noexcept
		: CacheInfo(   CacheInfoType::Prefetch )
		, SizeInBytes( SizeInBytes             )
	{
	}

} // namespace CPU
} // namespace max