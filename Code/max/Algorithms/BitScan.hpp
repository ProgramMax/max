// Copyright 2020, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_ALGORITHMS_BITSCAN_HPP
#define MAX_ALGORITHMS_BITSCAN_HPP

#include <max/Compiling/CurrentVersionNamespace.hpp>
#include <max/Compiling/AliasingOptimizations.hpp>
#include <cstdint>
#include <max/Compiling/ThrowSpecification.hpp>

namespace max
{
	MAX_CURRENT_VERSION_NAMESPACE_BEGIN(v0)
	{
		namespace Algorithms
		{

			MAX_PURE_DECLARATION( inline uint64_t BitScanForward( const uint64_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline uint32_t BitScanForward( const uint32_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline uint16_t BitScanForward( const uint16_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline uint8_t  BitScanForward( const uint8_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline int64_t  BitScanForward( const int64_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline int32_t  BitScanForward( const int32_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline int16_t  BitScanForward( const int16_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline int8_t   BitScanForward( const int8_t   Value ) MAX_DOES_NOT_THROW );

			MAX_PURE_DECLARATION( inline uint64_t BitScanBackward( const uint64_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline uint32_t BitScanBackward( const uint32_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline uint16_t BitScanBackward( const uint16_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline uint8_t  BitScanBackward( const uint8_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline int64_t  BitScanBackward( const int64_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline int32_t  BitScanBackward( const int32_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline int16_t  BitScanBackward( const int16_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( inline int8_t   BitScanBackward( const int8_t   Value ) MAX_DOES_NOT_THROW );

			MAX_PURE_DECLARATION( constexpr inline uint64_t BitScanForwardConstexpr( const uint64_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline uint32_t BitScanForwardConstexpr( const uint32_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline uint16_t BitScanForwardConstexpr( const uint16_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline uint8_t  BitScanForwardConstexpr( const uint8_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline int64_t  BitScanForwardConstexpr( const int64_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline int32_t  BitScanForwardConstexpr( const int32_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline int16_t  BitScanForwardConstexpr( const int16_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline int8_t   BitScanForwardConstexpr( const int8_t   Value ) MAX_DOES_NOT_THROW );

			MAX_PURE_DECLARATION( constexpr inline uint64_t BitScanBackwardConstexpr( const uint64_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline uint32_t BitScanBackwardConstexpr( const uint32_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline uint16_t BitScanBackwardConstexpr( const uint16_t Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline uint8_t  BitScanBackwardConstexpr( const uint8_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline int64_t  BitScanBackwardConstexpr( const int64_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline int32_t  BitScanBackwardConstexpr( const int32_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline int16_t  BitScanBackwardConstexpr( const int16_t  Value ) MAX_DOES_NOT_THROW );
			MAX_PURE_DECLARATION( constexpr inline int8_t   BitScanBackwardConstexpr( const int8_t   Value ) MAX_DOES_NOT_THROW );

		} // namespace Algorithms
	} // MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
	MAX_CURRENT_VERSION_NAMESPACE_END(v0)
} // namespace max

#include <max/Algorithms/BitScan.inl>

#endif // #ifndef MAX_ALGORITHMS_BITSCAN_HPP
