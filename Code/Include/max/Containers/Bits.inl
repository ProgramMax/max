// Copyright 2017, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

namespace max
{
namespace v0
{
namespace Containers
{

namespace ImplementationDetails
{
namespace Bits
{

	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit0( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit1( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit2( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit3( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit4( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit5( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit6( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit7( const uint8_t Mask ) MAX_DOES_NOT_THROW );

	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit0(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit1(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit2(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit3(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit4(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit5(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit6(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit7(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit8(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit9(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit10( const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit11( const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit12( const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit13( const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit14( const uint16_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit15( const uint16_t Mask ) MAX_DOES_NOT_THROW );
	
} // namespace Bits
} // namespace ImplementationDetails

	// Documentation: ../../../../Documentation/max/v0/Containers/Bits_ctor.md
	MAX_SEMI_PURE_DEFINITION( constexpr Bits8::Bits8( const uint8_t Value ) MAX_DOES_NOT_THROW )
		: Value( Value )
	{
	}

	MAX_SEMI_PURE_DEFINITION( constexpr Bits8::Bits8( const int8_t Value ) MAX_DOES_NOT_THROW )
		: Value( static_cast< uint8_t >( Value ) )
	{
	}

	MAX_SEMI_PURE_DEFINITION( constexpr uint8_t Bits8::BitScanForward() const MAX_DOES_NOT_THROW )
	{
		// This will continue a call chain until all bits are checked.
		return ImplementationDetails::Bits::CheckBit0( Value );
	}



	// Documentation: ../../../../Documentation/max/v0/Containers/Bits_ctor.md
	MAX_SEMI_PURE_DEFINITION( constexpr Bits16::Bits16( const uint16_t Value ) MAX_DOES_NOT_THROW )
		: Value( Value )
	{
	}

	MAX_SEMI_PURE_DEFINITION( constexpr Bits16::Bits16( const int16_t Value ) MAX_DOES_NOT_THROW )
		: Value( static_cast< uint16_t >( Value ) )
	{
	}

	MAX_SEMI_PURE_DEFINITION( constexpr uint8_t Bits16::BitScanForward() const MAX_DOES_NOT_THROW )
	{
		// This will continue a call chain until all bits are checked.
		return ImplementationDetails::Bits::CheckBit0( Value );
	}

	MAX_SEMI_PURE_DEFINITION( constexpr Bits16 Bits16::SwapEndian() const MAX_DOES_NOT_THROW )
	{
		return Bits16{ static_cast< uint16_t >( ( ( Value & 0xff00 ) >> 8 ) | ( ( Value & 0x00ff ) << 8 ) ) };
	}

	
	MAX_SEMI_PURE_DEFINITION( constexpr bool Bits16::operator ==( const Bits16 & rhs ) const MAX_DOES_NOT_THROW )
	{
		return Value == rhs.Value;
	}



	// Documentation: ../../../../Documentation/max/v0/Containers/Bits_ctor.md
	MAX_SEMI_PURE_DEFINITION( constexpr Bits32::Bits32( const uint32_t Value ) MAX_DOES_NOT_THROW )
		: Value( Value )
	{
	}

	MAX_SEMI_PURE_DEFINITION( constexpr Bits32::Bits32( const int32_t Value ) MAX_DOES_NOT_THROW )
		: Value( static_cast< uint32_t >( Value ) )
	{
	}



	// Documentation: ../../../../Documentation/max/v0/Containers/Bits_ctor.md
	MAX_SEMI_PURE_DEFINITION( constexpr Bits64::Bits64( const uint64_t Value ) MAX_DOES_NOT_THROW )
		: Value( Value )
	{
	}

	MAX_SEMI_PURE_DEFINITION( constexpr Bits64::Bits64( const int64_t Value ) MAX_DOES_NOT_THROW )
		: Value( static_cast< uint64_t >( Value ) )
	{
	}

} // namespaxe Containers
} // namespace v0
} // namespace max

MAX_SEMI_PURE_DEFINITION( constexpr max::Containers::Bits8 operator"" _b8( const unsigned long long int Value ) MAX_DOES_NOT_THROW )
{
	return max::Containers::Bits8{ static_cast< uint8_t >( Value ) };
}

MAX_SEMI_PURE_DEFINITION( constexpr max::Containers::Bits16 operator"" _b16( const unsigned long long int Value ) MAX_DOES_NOT_THROW )
{
	return max::Containers::Bits16{ static_cast< uint16_t >( Value ) };
}

MAX_SEMI_PURE_DEFINITION( constexpr max::Containers::Bits32 operator"" _b32( const unsigned long long int Value ) MAX_DOES_NOT_THROW )
{
	return max::Containers::Bits32{ static_cast< uint32_t >( Value ) };
}

MAX_SEMI_PURE_DEFINITION( constexpr max::Containers::Bits64 operator"" _b64( const unsigned long long int Value ) MAX_DOES_NOT_THROW )
{
	return max::Containers::Bits64{ static_cast< uint64_t >( Value ) };
}

namespace max
{
namespace v0
{
namespace Containers
{
namespace ImplementationDetails
{
namespace Bits
{

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit0( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b1 ) ? 0 : CheckBit1( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit1( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b10 ) ? 1 : CheckBit2( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit2( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b100 ) ? 2 : CheckBit3( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit3( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b1000 ) ? 3 : CheckBit4( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit4( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b10000 ) ? 4 : CheckBit5( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit5( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b100000 ) ? 5 : CheckBit6( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit6( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b1000000 ) ? 6 : CheckBit7( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit7( const uint8_t /* Mask */ ) MAX_DOES_NOT_THROW )
		{
			// If we got here, this bit must be set.
			// (Behavior is undefined if no bits are set.)
			return 7;
		}



		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit0( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b1 ) ? 0 : CheckBit1( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit1( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b10 ) ? 1 : CheckBit2( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit2( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b100 ) ? 2 : CheckBit3( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit3( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b1000 ) ? 3 : CheckBit4( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit4( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b10000 ) ? 4 : CheckBit5( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit5( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b100000 ) ? 5 : CheckBit6( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit6( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b1000000 ) ? 6 : CheckBit7( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit7( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b10000000 ) ? 7 : CheckBit8( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit8( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b100000000 ) ? 8 : CheckBit9( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit9( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b1000000000 ) ? 9 : CheckBit10( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit10( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b10000000000 ) ? 10 : CheckBit11( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit11( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b100000000000 ) ? 11 : CheckBit12( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit12( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b1000000000000 ) ? 12 : CheckBit13( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit13( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b10000000000000 ) ? 13 : CheckBit14( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit14( const uint16_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b100000000000000 ) ? 14 : CheckBit15( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit15( const uint16_t /* Mask */ ) MAX_DOES_NOT_THROW )
		{
			// If we got here, this bit must be set.
			// (Behavior is undefined if no bits are set.)
			return 15;
		}

} // namespace Bits
} // namespace ImplementationDetails

} // namespaxe Containers
} // namespace v0
} // namespace max