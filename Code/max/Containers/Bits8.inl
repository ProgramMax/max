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
namespace Bits8
{

	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit0( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit1( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit2( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit3( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit4( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit5( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit6( const uint8_t Mask ) MAX_DOES_NOT_THROW );
	MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit7( const uint8_t Mask ) MAX_DOES_NOT_THROW );

	
} // namespace Bits8
} // namespace ImplementationDetails

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
		return ImplementationDetails::Bits8::CheckBit0( Value );
	}

} // namespaxe Containers
} // namespace v0
} // namespace max

MAX_SEMI_PURE_DEFINITION( constexpr max::Containers::Bits8 operator"" _b8( const unsigned long long int Value ) MAX_DOES_NOT_THROW )
{
	return max::Containers::Bits8{ static_cast< uint8_t >( Value ) };
}

namespace max
{
namespace v0
{
namespace Containers
{
namespace ImplementationDetails
{
namespace Bits8
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
			return ( Mask & 0b10000 ) ? 4 : CheckBit5( Mask ); //-V112
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

} // namespace Bits8
} // namespace ImplementationDetails

} // namespaxe Containers
} // namespace v0
} // namespace max
