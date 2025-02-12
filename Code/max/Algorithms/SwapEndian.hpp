// Copyright 2015, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_ALGORITHMS_SWAPENDIAN_HPP
#define MAX_ALGORITHMS_SWAPENDIAN_HPP

#include <max/Compiling/CurrentVersionNamespace.hpp>
#include <max/Compiling/AliasingOptimizations.hpp>
#include <cstdint>
#include <concepts>

namespace max
{
MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
{
namespace Algorithms
{

	template <std::integral T>
	MAX_PURE_DECLARATION( constexpr inline T LittleEndianToHost(const T Value ) noexcept );

	template <std::integral T>
	MAX_PURE_DECLARATION( constexpr inline T BigEndianToHost( const T Value ) noexcept );

	template <std::integral T>
	MAX_PURE_DECLARATION( constexpr inline T HostToLittleEndian( const T Value ) noexcept );

	template <std::integral T>
	MAX_PURE_DECLARATION( constexpr inline T HostToBigEndian( const T Value ) noexcept );

	MAX_PURE_DECLARATION( constexpr inline uint64_t CombinePieces( const uint8_t First8Bits,
	                                                               const uint8_t Second8Bits,
	                                                               const uint8_t Third8Bits,
	                                                               const uint8_t Fourth8Bits,
	                                                               const uint8_t Fifth8Bits,
	                                                               const uint8_t Sixth8Bits,
	                                                               const uint8_t Seventh8Bits,
	                                                               const uint8_t Eighth8Bits ) noexcept );
	MAX_PURE_DECLARATION( constexpr inline uint32_t CombinePieces( const uint8_t First8Bits,
	                                                               const uint8_t Second8Bits,
	                                                               const uint8_t Third8Bits,
	                                                               const uint8_t Fourth8Bits ) noexcept );
	MAX_PURE_DECLARATION( constexpr inline uint16_t CombinePieces( const uint8_t First8Bits,
	                                                               const uint8_t Second8Bits ) noexcept );
	MAX_PURE_DECLARATION( constexpr inline int64_t  CombinePieces( const int8_t  First8Bits,
	                                                               const int8_t  Second8Bits,
	                                                               const int8_t  Third8Bits,
	                                                               const int8_t  Fourth8Bits,
	                                                               const int8_t  Fifth8Bits,
	                                                               const int8_t  Sixth8Bits,
	                                                               const int8_t  Seventh8Bits,
	                                                               const int8_t  Eighth8Bits ) noexcept );
	MAX_PURE_DECLARATION( constexpr inline int32_t  CombinePieces( const int8_t  First8Bits,
	                                                               const int8_t  Second8Bits,
	                                                               const int8_t  Third8Bits,
	                                                               const int8_t  Fourth8Bits ) noexcept );
	MAX_PURE_DECLARATION( constexpr inline int16_t  CombinePieces( const int8_t  First8Bits,
	                                                               const int8_t  Second8Bits ) noexcept );

} // namespace Algorithms
} // MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
MAX_CURRENT_VERSION_NAMESPACE_END( v0 )
} // namespace max

#include <max/Algorithms/SwapEndian.inl>

#endif // #ifndef MAX_ALGORITHMS_SWAPENDIAN_HPP
