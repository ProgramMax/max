// Copyright 2016, Chris Blume
// All rights reserved.

#ifndef MAX_CPU_CACHEINFO_HPP
#define MAX_CPU_CACHEINFO_HPP

#include <cstdint>

namespace max
{
namespace CPU
{

	class CacheInfo
	{
	public:

		enum class CacheInfoType
		{
			TLB,
			CacheLevel,
			TraceCache,
			Prefetch
		};

		enum class CacheContentType
		{
			Instruction,
			Data,
			Unified
		};

		explicit CacheInfo( CacheInfoType Type )        noexcept;
		CacheInfo()                                     noexcept = delete;
		CacheInfo( const CacheInfo & rhs)               noexcept = default;
		CacheInfo( CacheInfo && rhs)                    noexcept = default;
		~CacheInfo()                                    noexcept = default;

		CacheInfo & operator =( const CacheInfo & rhs ) noexcept = default;
		CacheInfo & operator =( CacheInfo && rhs )      noexcept = default;

		CacheInfoType Type;

	};

} // namespace CPU
} // namespace max

#endif // #ifndef MAX_CPU_CACHEINFO_HPP