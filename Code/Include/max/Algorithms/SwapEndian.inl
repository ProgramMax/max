// Copyright 2015, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Compiling/Configuration.hpp>

namespace max
{
namespace Algirhtms
{

#if defined( MAX_COMPILER_CLANG ) || \
	( defined( MAX_COMPILER_GCC ) && MAX_COMPILER_VERSION_AT_LEAST( 4, 3, 0 )  )
	MAX_PURE_DEFINITION( constexpr inline uint64_t SwapEndian( const uint64_t Value ) MAX_DOES_NOT_THROW )
	{
		return __builtin_bswap64( Value );
	}

	MAX_PURE_DEFINITION( constexpr inline uint32_t SwapEndian( const uint32_t Value ) MAX_DOES_NOT_THROW )
	{
		return __builtin_bswap32( Value );
	}

	MAX_PURE_DEFINITION( constexpr inline uint16_t SwapEndian( const uint16_t Value ) MAX_DOES_NOT_THROW )
	{
		return __builtin_bswap16( Value );
	}
#elif defined( MAX_COMPILER_VC )
	#include <stdlib.h>

	MAX_PURE_DEFINITION( constexpr inline uint64_t SwapEndian( const uint64_t Value ) MAX_DOES_NOT_THROW )
	{
		return _byteswap_uint64( Value );
	}

	MAX_PURE_DEFINITION( constexpr inline uint32_t SwapEndian( const uint32_t Value ) MAX_DOES_NOT_THROW )
	{
		return _byteswap_ulong( Value );
	}

	MAX_PURE_DEFINITION( constexpr inline uint16_t SwapEndian( const uint16_t Value ) MAX_DOES_NOT_THROW )
	{
		return _byteswap_ushort( Value );
	}
#else
	MAX_PURE_DEFINITION( constexpr inline uint64_t SwapEndian( const uint64_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< const uint16_t >(
			( ( Value & 0xff00'0000'0000'0000ull >> 56 ) |
			( ( Value & 0x0000'0000'0000'00ffull << 56 ) |
			( ( Value & 0x00ff'0000'0000'0000ull >> 40 ) |
			( ( Value & 0x0000'0000'0000'ff00ull << 40 ) |
			( ( Value & 0x0000'ff00'0000'0000ull >> 24 ) |
			( ( Value & 0x0000'0000'00ff'0000ull << 24 ) |
			( ( Value & 0x0000'00ff'0000'0000ull >> 8  ) |
			( ( Value & 0x0000'0000'ff00'0000ull << 8  ) ) );
	}

	MAX_PURE_DEFINITION( constexpr inline uint32_t SwapEndian( const uint32_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< const uint32_t >(
			( ( Value & 0xff000000 ) >> 24 ) |
			( ( Value & 0x000000ff ) << 24 ) |
			( ( Value & 0x00ff0000 ) >> 8  ) |
			( ( Value & 0x0000ff00 ) << 8  ) ) );
	}

	MAX_PURE_DEFINITION( constexpr inline uint16_t SwapEndian( const uint16_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< const uint16_t >(
			( ( Value & 0xff00 ) >> 8 ) |
			( ( Value & 0x00ff ) << 8 ) );
	}
#endif

	MAX_PURE_DEFINITION( constexpr inline int64_t SwapEndian( const int64_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int64_t >(
			SwapEndian( static_cast< const uint64_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int32_t SwapEndian( const int32_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int32_t >(
			SwapEndian( static_cast< const uint32_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int16_t SwapEndian( const int16_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int16_t >(
			SwapEndian( static_cast< const uint16_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline uint64_t LittleEndianToHost( const uint64_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_LITTLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline uint32_t LittleEndianToHost( const uint32_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_LITTLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline uint16_t LittleEndianToHost( const uint16_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_LITTLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline int64_t LittleEndianToHost( const int64_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int64_t >(
			LittleEndianToHost( static_cast< const uint64_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int32_t LittleEndianToHost( const int32_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int32_t >(
			LittleEndianToHost( static_cast< const uint32_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int16_t LittleEndianToHost( const int16_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int16_t >(
			LittleEndianToHost( static_cast< const uint16_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline uint64_t BigEndianToHost( const uint64_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline uint32_t BigEndianToHost( const uint32_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline uint16_t BigEndianToHost( const uint16_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline int64_t BigEndianToHost( const int64_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int64_t >(
			BigEndianToHost( static_cast< const uint64_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int32_t BigEndianToHost( const int32_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int32_t >(
			BigEndianToHost( static_cast< const uint32_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int16_t BigEndianToHost( const int16_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int16_t >(
			BigEndianToHost( static_cast< const uint16_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline uint64_t HostToLittleEndian( const uint64_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_LITTLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline uint32_t HostToLittleEndian( const uint32_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_LITTLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline uint16_t HostToLittleEndian( const uint16_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_LITTLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline int64_t HostToLittleEndian( const int64_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int64_t >(
			HostToLittleEndian( static_cast< const uint64_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int32_t HostToLittleEndian( const int32_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int32_t >(
			HostToLittleEndian( static_cast< const uint32_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int16_t HostToLittleEndian( const int16_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int16_t >(
			HostToLittleEndian( static_cast< const uint16_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline uint64_t HostToBigEndian( const uint64_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline uint32_t HostToBigEndian( const uint32_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline uint16_t HostToBigEndian( const uint16_t Value ) MAX_DOES_NOT_THROW )
	{
		#if defined( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	MAX_PURE_DEFINITION( constexpr inline int64_t HostToBigEndian( const int64_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int64_t >(
			HostToBigEndian( static_cast< const uint64_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int32_t HostToBigEndian( const int32_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int32_t >(
			HostToBigEndian( static_cast< const uint32_t >( Value ) )
		);
	}

	MAX_PURE_DEFINITION( constexpr inline int16_t HostToBigEndian( int16_t Value ) MAX_DOES_NOT_THROW )
	{
		return static_cast< int16_t >(
			HostToBigEndian( static_cast< const uint16_t >( Value ) )
		);
	}

} // namespace Algorithms
} // namespace max
