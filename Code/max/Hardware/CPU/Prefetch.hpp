// Copyright 2016, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CPU_PREFETCH_HPP
#define MAX_CPU_PREFETCH_HPP

#include "CacheInfo.hpp"
#include <cstdint>

namespace max
{
namespace CPU
{

	class Prefetch : public CacheInfo
	{
	public:

		explicit Prefetch( const uint32_t SizeInBytes ) noexcept;

		uint32_t SizeInBytes;

	};

} // namespace CPU
} // namespace max

#endif // #ifndef MAX_CPU_PREFETCH_HPP
