// Copyright 2016, Chris Blume
// All rights reserved.

#include <max/Hardware/CPU/CacheLevel.hpp>

namespace max
{
namespace CPU
{

	CacheLevel::CacheLevel( const uint32_t           Level,
	                        const CacheContentType   ContentType,
	                        const uint32_t           SizeInBytes,
	                        const Associativity &    AssociativityInfo,
	                        const uint32_t           CacheLineSizeInBytes,
	                        const uint32_t           CacheLinesPerSector   ) noexcept
		: CacheInfo(            CacheInfoType::CacheLevel )
		, ContentType(          ContentType               )
		, Level(                Level                     )
		, SizeInBytes(          SizeInBytes               )
		, AssociativityInfo(    AssociativityInfo         )
		, CacheLineSizeInBytes( CacheLineSizeInBytes      )
		, CacheLinesPerSector(  CacheLinesPerSector       )
	{
	}

} // namespace CPU
} // namespace max