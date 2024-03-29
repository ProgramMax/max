// Copyright 2016, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CPU_TLB_HPP
#define MAX_CPU_TLB_HPP

#include "CacheInfo.hpp"
#include <cstdint>
#include <vector>
#include "Associativity.hpp"

namespace max
{
namespace CPU
{

	class TLBConfiguration
	{
	public:


		TLBConfiguration(       std::vector< uint32_t  > && PageSizesInBytes,
		                  const Associativity &             AssociativityInfo,
		                  const uint32_t                    EntryCount        ) noexcept;

		std::vector< uint32_t  >      PageSizesInBytes;
		Associativity                 AssociativityInfo;
		uint32_t                      EntryCount;

	};

	class TLB : public CacheInfo
	{
	public:

		TLB( const CacheContentType                   ContentType,
		           std::vector< TLBConfiguration > && Configurations ) noexcept;

		CacheContentType ContentType;
		std::vector< TLBConfiguration > Configurations;

	};

} // namespace CPU
} // namespace max

#endif // #ifndef MAX_CPU_TLB_HPP
