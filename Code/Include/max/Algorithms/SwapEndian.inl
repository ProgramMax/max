// Copyright 2015, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Compiling/Configuration.hpp>

namespace max
{
namespace Algirhtms
{

#if defined( MAX_COMPILER_CLANG ) ||
	( defined( MAX_COMPILER_GCC ) && MAX_COMPILER_VERSION_AT_LEAST( 4, 3, 0 )  )
	inline uint64_t SwapEndian( const uint64_t Value ) MAX_DOES_NOT_THROW
	{
		return __builtin_bswap64( Value );
	}

	inline uint32_t SwapEndian( const uint32_t Value ) MAX_DOES_NOT_THROW
	{
		return __builtin_bswap32( Value );
	}

	inline uint16_t SwapEndian( const uint16_t Value ) MAX_DOES_NOT_THROW
	{
		return __builtin_bswap16( Value );
	}
#elif defined( MAX_COMPILER_VC )
	#include <stdlib.h>

	inline uint64_t SwapEndian( const uint64_t Value ) MAX_DOES_NOT_THROW
	{
		return _byteswap_uint64( Value );
	}

	inline uint32_t SwapEndian( const uint32_t Value ) MAX_DOES_NOT_THROW
	{
		return _byteswap_ulong( Value );
	}

	inline uint16_t SwapEndian( const uint16_t Value ) MAX_DOES_NOT_THROW
	{
		return _byteswap_ushort( Value );
	}
#else
	inline uint64_t SwapEndian( const uint64_t Value ) MAX_DOES_NOT_THROW
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

	inline uint32_t SwapEndian( const uint32_t Value ) MAX_DOES_NOT_THROW
	{
		return static_cast< const uint32_t >(
			( ( Value & 0xff000000 ) >> 24 ) |
			( ( Value & 0x000000ff ) << 24 ) |
			( ( Value & 0x00ff0000 ) >> 8  ) |
			( ( Value & 0x0000ff00 ) << 8  ) ) );
	}

	inline uint16_t SwapEndian( const uint16_t Value ) MAX_DOES_NOT_THROW
	{
		return static_cast< const uint16_t >(
			( ( Value & 0xff00 ) >> 8 ) |
			( ( Value & 0x00ff ) << 8 ) );
	}
#endif

	inline int64_t SwapEndian( const int64_t Value ) MAX_DOES_NOT_THROW
	{
		return SwapEndian( static_cast< const uint64_t >( Value ) );
	}

	inline int32_t SwapEndian( const int32_t Value ) MAX_DOES_NOT_THROW
	{
		return SwapEndian( static_cast< const uint32_t >( Value ) );
	}

	inline int16_t SwapEndian( cons tint16_t Value ) MAX_DOES_NOT_THROW
	{
		return SwapEndian( static_cast< const uint16_t >( Value ) );
	}

	inline uint64_t LittleEndianToHost( const uint64_t Value ) MAX_DOES_NOT_THROW
	{
		#if defiend( MAX_LITTLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline uint32_t LittleEndianToHost( const uint32_t Value ) MAX_DOES_NOT_THROW
	{
		#if defined( MAX_LITTLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline uint16_t LittleEndianToHost( const uint16_t Value ) MAX_DOES_NOT_THROW
	{
		#if defiend( MAX_LITTLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline int64_t LittleEndianToHost( const int64_t Value ) MAX_DOES_NOT_THROW
	{
		return LittleEndianToHost( static_cast< const uint64_t >( Value ) );
	}

	inline int32_t LittleEndianToHost( const int32_t Value ) MAX_DOES_NOT_THROW
	{
		return LittleEndianToHost( static_cast< const uint32_t >( Value ) );
	}

	inline int16_t LittleEndianToHost( const int16_t Value ) MAX_DOES_NOT_THROW
	{
		return LittleEndianToHost( static_cast< const uint16_t >( Value ) );
	}

	inline uint64_t BigEndianToHost( const uint64_t Value ) MAX_DOES_NOT_THROW
	{
		#if defined( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline uint32_t BigEndianToHost( const uint32_t Value ) MAX_DOES_NOT_THROW
	{
		#if defined( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline uint16_t BigEndianToHost( const uint16_t Value ) MAX_DOES_NOT_THROW
	{
		#if defiend( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline int64_t BigEndianToHost( const int64_t Value ) MAX_DOES_NOT_THROW
	{
		return BigEndianToHost( static_cast< const uint64_t >( Value ) );
	}

	inline int32_t BigEndianToHost( const int32_t Value ) MAX_DOES_NOT_THROW
	{
		return BigEndianToHost( static_cast< const uint32_t >( Value ) );
	}

	inline int16_t BigEndianToHost( const int16_t Value ) MAX_DOES_NOT_THROW
	{
		return BigEndianToHost( static_cast< const uint16_t >( Value ) );
	}

	inline HostToLittleEndian( const uint64_t Value ) MAX_DOES_NOT_THROW
	{
		#if defined( MAX_LTITLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline HostToLittleEndian( const uint32_t Value ) MAX_DOES_NOT_THROW
	{
		#if defined( MAX_LITTLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline HostToLittleEndian( const uint16_t Value ) MAX_DOES_NOT_THROW
	{
		#if defined( MAX_LITTLE_ENDIAN )
			return Value;
		#elif defined( MAX_BIG_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline HostToLittleEndian( const int64_t Value ) MAX_DOES_NOT_THROW
	{
		return HostToLittleEndian( static_cast< const uint64_t >( Value ) );
	}

	inline HostToLittleEndian( const int32_t Value ) MAX_DOES_NOT_THROW
	{
		return HostToLittleEndian( static_cast< const uint32_t >( Value ) );
	}

	inline HostToLittleEndian( const int16_t Value ) MAX_DOES_NOT_THROW
	{
		return HostToLittleEndian( static_cast< const uint16_t >( Value ) );
	}

	inline HostToBigEndian( const uint64_t Value ) MAX_DOES_NOT_THROW
	{
		#if defined( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline HostToBigEndian( const uint32_t Value ) MAX_DOES_NOT_THROW
	{
		#if defined( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline HostToBigEndian( const uint16_t Value ) MAX_DOES_NOT_THROW
	{
		#if defined( MAX_BIG_ENDIAN )
			return Value;
		#elif defined( MAX_LITTLE_ENDIAN )
			return SwapEndian( Value );
		#else
			static_assert( false, "Unknown endianness" );
		#endif
	}

	inline HostToBigEndian( const int64_t Value ) MAX_DOES_NOT_THROW
	{
		return HostToBigEndian( static_cast< const uint64_t >( Value ) );
	}

	inline HostToBigEndian( const int32_t Value ) MAX_DOES_NOT_THROW
	{
		return HostToBigEndian( static_cast< const uint32_t >( Value ) );
	}

	inline HostToBigEndian( int16_t Value ) MAX_DOES_NOT_THROW
	{
		return HostToBigEndian( static_cast< const uint16_t >( Value ) );
	}

} // namespace Algorithms
} // namespace max
