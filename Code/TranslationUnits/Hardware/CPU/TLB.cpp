// Copyright 2016, Chris Blume
// All rights reserved.

#include <max/Hardware/CPU/TLB.hpp>

namespace max
{
namespace CPU
{

	TLBConfiguration::TLBConfiguration(       std::vector< uint32_t  > && PageSizesInBytes,
	                                    const Associativity &             AssociativityInfo,
	                                    const uint32_t                    EntryCount       ) noexcept
		: PageSizesInBytes( std::move( PageSizesInBytes ) )
		, AssociativityInfo(           AssociativityInfo  )
		, EntryCount(                  EntryCount         )
	{
	}

	TLB::TLB( const CacheContentType                   ContentType,
	                std::vector< TLBConfiguration > && Configurations ) noexcept
		: CacheInfo(                 CacheInfoType::TLB   )
		, ContentType(               ContentType          )
		, Configurations( std::move( Configurations )     )
	{
	}

} // namespace CPU
} // namespace max