// Copyright 2016, Chris Blume
// All rights reserved.

#include <max/Hardware/CPU/TraceCache.hpp>

namespace max
{
namespace CPU
{

	TraceCache::TraceCache( const uint32_t        SizeInMicroOperations,
	                        const Associativity & AssociativityInfo    ) noexcept
		: CacheInfo(             CacheInfoType::TraceCache )
		, SizeInMicroOperations( SizeInMicroOperations     )
		, AssociativityInfo(     AssociativityInfo         )
	{
	}

} // namespace CPU
} // namespace max