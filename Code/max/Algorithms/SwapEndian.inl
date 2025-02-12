// Copyright 2015, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Compiling/Configuration.hpp>

#if defined( MAX_COMPILER_VC )
#include <stdlib.h>
#endif
#include <bit>

namespace max
{
namespace v0
{
namespace Algorithms
{

	template < std::integral T >
	MAX_PURE_DEFINITION( constexpr inline T LittleEndianToHost( const T Value ) noexcept )
	{
		static_assert( std::endian::native == std::endian::little ||
		               std::endian::native == std::endian::big,
		               "Unknown endianness" );

		if constexpr ( std::endian::native == std::endian::little ) {
			return Value;
		} else if constexpr ( std::endian::native == std::endian::big ) {
			return std::byteswap( Value );
		}
	}

	template < std::integral T >
	MAX_PURE_DEFINITION( constexpr inline T BigEndianToHost( const T Value ) noexcept )
	{
		static_assert( std::endian::native == std::endian::little ||
		               std::endian::native == std::endian::big,
		               "Unknown endianness" );

		if constexpr ( std::endian::native == std::endian::big ) {
			return Value;
		} else if constexpr ( std::endian::native == std::endian::little ) {
			return std::byteswap( Value );
		}
	}

	template < std::integral T >
	MAX_PURE_DEFINITION( constexpr inline T HostToLittleEndian( const T Value ) noexcept )
	{
		static_assert( std::endian::native == std::endian::little ||
		               std::endian::native == std::endian::big,
		               "Unknown endianness" );

		if constexpr ( std::endian::native == std::endian::little ) {
			return Value;
		} else if constexpr ( std::endian::native == std::endian::big ) {
			return std::byteswap( Value );
		}
	}

	template < std::integral T >
	MAX_PURE_DEFINITION( constexpr inline T HostToBigEndian( const T Value ) noexcept )
	{
		static_assert( std::endian::native == std::endian::little ||
		               std::endian::native == std::endian::big,
		               "Unknown endianness" );

		if constexpr ( std::endian::native == std::endian::big ) {
			return Value;
		} else if constexpr ( std::endian::native == std::endian::little ) {
			return std::byteswap( Value );
		}
	}

	MAX_PURE_DEFINITION( constexpr inline uint64_t CombinePieces( const uint8_t First8Bits,
	                                                              const uint8_t Second8Bits,
	                                                              const uint8_t Third8Bits,
	                                                              const uint8_t Fourth8Bits,
	                                                              const uint8_t Fifth8Bits,
	                                                              const uint8_t Sixth8Bits,
	                                                              const uint8_t Seventh8Bits,
	                                                              const uint8_t Eighth8Bits ) noexcept )
	{
		auto ExpandedFirst8Bits  = static_cast< uint64_t >( First8Bits );
		auto ExpandedSecond8Bits = static_cast< uint64_t >( Second8Bits );
		auto ExpandedThird8Bits  = static_cast< uint64_t >( Third8Bits );
		auto ExpandedFourth8Bits = static_cast< uint64_t >( Fourth8Bits );
		auto ExpandedFifth8Bits  = static_cast< uint64_t >( Fifth8Bits );
		auto ExpandedSixth8Bits  = static_cast< uint64_t >( Sixth8Bits );
		auto ExpandedSeventh8Bits = static_cast< uint64_t >( Seventh8Bits );
		auto ExpandedEighth8Bits = static_cast< uint64_t >( Eighth8Bits );

		#if defined( MAX_LITTLE_ENDIAN )
			return static_cast< uint64_t >( ExpandedFirst8Bits | ExpandedSecond8Bits << 8 | ExpandedThird8Bits << 16 | ExpandedFourth8Bits << 24 | ExpandedFifth8Bits << 32 | ExpandedSixth8Bits << 40 | ExpandedSeventh8Bits << 48 | ExpandedEighth8Bits << 56 );
		#elif defined( MAX_BIG_ENDIAN )
			return static_cast< uint64_t >( ExpandedFirst8Bits << 56 | ExpandedSecond8Bits << 48 | ExpandedThird8Bits << 40 | ExpandedFourth8Bits << 32 | ExpandedFifth8Bits << 24 | ExpandedSixth8Bits << 16 | ExpandedSeventh8Bits << 8 | ExpandedEighth8Bits );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline uint32_t CombinePieces( const uint8_t First8Bits,
	                                                              const uint8_t Second8Bits,
	                                                              const uint8_t Third8Bits,
	                                                              const uint8_t Fourth8Bits ) noexcept )
	{
		auto ExpandedFirst8Bits  = static_cast< uint32_t >( First8Bits );
		auto ExpandedSecond8Bits = static_cast< uint32_t >( Second8Bits );
		auto ExpandedThird8Bits  = static_cast< uint32_t >( Third8Bits );
		auto ExpandedFourth8Bits = static_cast< uint32_t >( Fourth8Bits );

		#if defined( MAX_LITTLE_ENDIAN )
			return static_cast< uint32_t >( ExpandedFirst8Bits | ExpandedSecond8Bits << 8 | ExpandedThird8Bits <<  16 | ExpandedFourth8Bits << 24 );
		#elif defined( MAX_BIG_ENDIAN )
			return static_cast< uint32_t >( ExpandedFirst8Bits << 24 | ExpandedSecond8Bits << 16 | ExpandedThird8Bits << 8 | ExpandedFourth8bits );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline uint16_t CombinePieces( const uint8_t First8Bits,
	                                                              const uint8_t Second8Bits ) noexcept )
	{
		auto ExpandedFirst8Bits  = static_cast< uint16_t >( First8Bits );
		auto ExpandedSecond8Bits = static_cast< uint16_t >( Second8Bits );

		#if defined( MAX_LITTLE_ENDIAN )
			return static_cast< uint16_t >( ExpandedFirst8Bits | ExpandedSecond8Bits << 8 );
		#elif defined( MAX_BIG_ENDIAN )
			return static_cast< uint16_t >( ExpandedFirst8Bits << 8 | ExpandedSecond8Bits );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline int64_t CombinePieces( const int8_t First8Bits,
	                                                             const int8_t Second8Bits,
	                                                             const int8_t Third8Bits,
	                                                             const int8_t Fourth8Bits,
	                                                             const int8_t Fifth8Bits,
	                                                             const int8_t Sixth8Bits,
	                                                             const int8_t Seventh8Bits,
	                                                             const int8_t Eighth8Bits ) noexcept )
	{
		return static_cast< int64_t >(
			CombinePieces( static_cast< uint8_t >( First8Bits ), static_cast< uint8_t >( Second8Bits ), static_cast< uint8_t >( Third8Bits ), static_cast< uint8_t >( Fourth8Bits ), static_cast< uint8_t >( Fifth8Bits ), static_cast< uint8_t >( Sixth8Bits ), static_cast< uint8_t >( Seventh8Bits ), static_cast< uint8_t >( Eighth8Bits ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int32_t CombinePieces( const int8_t First8Bits,
	                                                             const int8_t Second8Bits,
	                                                             const int8_t Third8Bits,
	                                                             const int8_t Fourth8Bits) noexcept )
	{
		return static_cast< int32_t >(
			CombinePieces( static_cast< uint8_t >( First8Bits ), static_cast< uint8_t >( Second8Bits ), static_cast< uint8_t >( Third8Bits ), static_cast< uint8_t >( Fourth8Bits ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int16_t CombinePieces( const int8_t First8Bits,
	                                                             const int8_t Second8Bits ) noexcept )
	{
		return static_cast< int16_t >(
			CombinePieces( static_cast< uint8_t >( First8Bits ), static_cast< uint8_t >( Second8Bits ) )
		);
	}

} // namespace Algorithms
} // namespace v0
} // namespace max
