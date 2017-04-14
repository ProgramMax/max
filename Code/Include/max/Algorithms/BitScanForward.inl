// Copyright 2017, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

namespace max
{
namespace v0
{
namespace Algorithms
{

	namespace ImplementationDetails
	{
	namespace BitScanForward
	{

		MAX_PURE_DECLARATION( constexpr inline uint8_t CheckEighthBit( const uint8_t Mask ) MAX_DOES_NOT_THROW );
		MAX_PURE_DECLARATION( constexpr inline uint8_t CheckSeventhBit( const uint8_t Mask ) MAX_DOES_NOT_THROW );
		MAX_PURE_DECLARATION( constexpr inline uint8_t CheckSixthBit( const uint8_t Mask ) MAX_DOES_NOT_THROW );
		MAX_PURE_DECLARATION( constexpr inline uint8_t CheckFifthBit( const uint8_t Mask ) MAX_DOES_NOT_THROW );
		MAX_PURE_DECLARATION( constexpr inline uint8_t CheckFourthBit( const uint8_t Mask ) MAX_DOES_NOT_THROW );
		MAX_PURE_DECLARATION( constexpr inline uint8_t CheckThirdBit( const uint8_t Mask ) MAX_DOES_NOT_THROW );
		MAX_PURE_DECLARATION( constexpr inline uint8_t CheckSecondBit( const uint8_t Mask ) MAX_DOES_NOT_THROW );
		MAX_PURE_DECLARATION( constexpr inline uint8_t CheckFirstBit( const uint8_t Mask ) MAX_DOES_NOT_THROW );

	} // BitScanForward
	} // ImplementationDetails

	// Documentation: ../../../../Documentation/max/v0/Algorithms/BitScanForward.md
	MAX_PURE_DEFINITION( constexpr inline uint8_t BitScanForward( const uint8_t Mask ) MAX_DOES_NOT_THROW )
	{
		// This will continue a call chain until all bits are checked.
		return ImplementationDetails::BitScanForward::CheckFirstBit( Mask );
	}

	namespace ImplementationDetails
	{
	namespace BitScanForward
	{

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckEighthBit( const uint8_t /* Mask */ ) MAX_DOES_NOT_THROW )
		{
			// We already checked if no bits are set.
			// If we got here, this bit must be set.
			return 7;
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckSeventhBit( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b1000000 ) ? 6 : CheckEighthBit( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckSixthBit( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b100000 ) ? 5 : CheckSeventhBit( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckFifthBit( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b10000 ) ? 4 : CheckSixthBit( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckFourthBit( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b1000 ) ? 3 : CheckFifthBit( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckThirdBit( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b100 ) ? 2 : CheckFourthBit( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckSecondBit( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b10 ) ? 1 : CheckThirdBit( Mask );
		}

		MAX_PURE_DEFINITION( constexpr inline uint8_t CheckFirstBit( const uint8_t Mask ) MAX_DOES_NOT_THROW )
		{
			return ( Mask & 0b1 ) ? 0 : CheckSecondBit( Mask );
		}

	} // BitScanForward
	} // ImplementationDetails

} // namespace Algorithms
} // namespace v0
} // namespace max