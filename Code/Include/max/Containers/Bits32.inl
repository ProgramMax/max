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
namespace Bits32
{

	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit0(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit1(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit2(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit3(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit4(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit5(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit6(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit7(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit8(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit9(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit10( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit11( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit12( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit13( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit14( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit15( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit16( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit17( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit18( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit19( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit20( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit21( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit22( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit23( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit24( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit25( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit26( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit27( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit28( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit29( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit30( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit31( const uint32_t Mask ) MAX_DOES_NOT_THROW );
	
} // namespace Bits32
} // namespace ImplementationDetails

	// Documentation: ../../../../Docs/max/v0/Containers/Bits32_ctor.md
	MAX_SEMI_PURE_DEFINITION( constexpr Bits32::Bits32( const uint32_t Value ) MAX_DOES_NOT_THROW )
		: Value( Value )
	{
	}

	MAX_SEMI_PURE_DEFINITION( constexpr Bits32::Bits32( const int32_t Value ) MAX_DOES_NOT_THROW )
		: Value( static_cast< uint32_t >( Value ) )
	{
	}

	MAX_SEMI_PURE_DEFINITION( constexpr uint8_t Bits32::BitScanForward() const MAX_DOES_NOT_THROW )
	{
		// This will continue a call chain until all bits are checked.
		return ImplementationDetails::Bits32::CheckBit0( Value );
	}

	MAX_SEMI_PURE_DEFINITION( constexpr Bits32 Bits32::SwapEndian() const MAX_DOES_NOT_THROW )
	{
		return Bits32{ ( ( ( Value & 0xff000000 ) >> 24 ) |    // move byte 3 to byte 0
		                 ( ( Value & 0x00ff0000 ) >> 8  ) |    // move byte 2 to byte 1
			             ( ( Value & 0x0000ff00 ) << 8  ) |    // move byte 1 to byte 2
			             ( ( Value & 0x000000ff ) << 24 ) ) }; // move byte 0 to byte 3
	}

	
	MAX_SEMI_PURE_DEFINITION( constexpr bool Bits32::operator ==( const Bits32 & rhs ) const MAX_DOES_NOT_THROW )
	{
		return Value == rhs.Value;
	}

} // namespaxe Containers
} // namespace v0
} // namespace max

MAX_SEMI_PURE_DEFINITION( constexpr max::Containers::Bits32 operator"" _b32( const unsigned long long int Value ) MAX_DOES_NOT_THROW )
{
	return max::Containers::Bits32{ static_cast< uint32_t >( Value ) };
}

namespace max
{
namespace v0
{
namespace Containers
{
namespace ImplementationDetails
{
namespace Bits32
{

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit0( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b1 ) ? 0 : CheckBit1( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit1( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b10 ) ? 1 : CheckBit2( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit2( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b100 ) ? 2 : CheckBit3( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit3( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b1000 ) ? 3 : CheckBit4( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit4( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b10000 ) ? 4 : CheckBit5( Mask ); //-V112
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit5( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b100000 ) ? 5 : CheckBit6( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit6( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b1000000 ) ? 6 : CheckBit7( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit7( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b10000000 ) ? 7 : CheckBit8( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit8( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b100000000 ) ? 8 : CheckBit9( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit9( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b1000000000 ) ? 9 : CheckBit10( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit10( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b10000000000 ) ? 10 : CheckBit11( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit11( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b100000000000 ) ? 11 : CheckBit12( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit12( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b1000000000000 ) ? 12 : CheckBit13( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit13( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b10000000000000 ) ? 13 : CheckBit14( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit14( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b100000000000000 ) ? 14 : CheckBit15( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit15( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b1000000000000000 ) ? 15 : CheckBit16( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit16( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b10000000000000000 ) ? 16 : CheckBit17( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit17( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b100000000000000000 ) ? 17 : CheckBit18( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit18( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b1000000000000000000 ) ? 18 : CheckBit19( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit19( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b10000000000000000000 ) ? 19 : CheckBit20( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit20( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b100000000000000000000 ) ? 20 : CheckBit21( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit21( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b1000000000000000000000 ) ? 21 : CheckBit22( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit22( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b10000000000000000000000 ) ? 22 : CheckBit23( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit23( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b100000000000000000000000 ) ? 23 : CheckBit24( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit24( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b1000000000000000000000000 ) ? 24 : CheckBit25( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit25( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b10000000000000000000000000 ) ? 25 : CheckBit26( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit26( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b100000000000000000000000000 ) ? 26 : CheckBit27( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit27( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b1000000000000000000000000000 ) ? 27 : CheckBit28( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit28( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b10000000000000000000000000000 ) ? 28 : CheckBit29( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit29( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b100000000000000000000000000000 ) ? 29 : CheckBit30( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit30( const uint32_t Mask ) MAX_DOES_NOT_THROW )
	{
		return ( Mask & 0b1000000000000000000000000000000 ) ? 30 : CheckBit31( Mask );
	}

	MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit31( const uint32_t /* Mask */ ) MAX_DOES_NOT_THROW )
	{
		// If we got here, this bit must be set.
		// (Behavior is undefined if no bits are set.)
		return 31;
	}

} // namespace Bits32
} // namespace ImplementationDetails

} // namespaxe Containers
} // namespace v0
} // namespace max
