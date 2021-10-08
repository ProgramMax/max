// Copyright 2016, The max Contibutors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

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

		explicit CacheInfo( CacheInfoType Type ) noexcept;

		CacheInfoType Type;

	};

} // namespace CPU
} // namespace max

#endif // #ifndef MAX_CPU_CACHEINFO_HPP
