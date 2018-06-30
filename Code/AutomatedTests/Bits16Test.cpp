// Copyright 2017, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "Bits16Test.hpp"
#include <max/Containers/Bits16.hpp>
#include <max/Testing/TestSuite.hpp>

namespace maxAutomatedTests
{
namespace Containers
{

	void RunBits16TestSuite()
	{
		static_assert( max::Containers::Bits16{ static_cast< uint16_t >( 0 ) }.Value == 0, "max::Containers::Bits16 uint16_t ctor should be constexpr." );
		static_assert( max::Containers::Bits16{ static_cast<  int16_t >( 0 ) }.Value == 0, "max::Containers::Bits16 int16_t ctor should be constexpr." );

		static_assert( (0_b16).Value == 0, R"(max::Containers::operator"" _b16 not supported.)" );
		static_assert( (1_b16).Value == 1, R"(max::Containers::operator"" _b16 not supported.)" );

		static_assert( (0b0000'0000'0000'0001_b16).BitScanForward() == 0,  "max::Containers::Bits16::BitScanForward not reporting bit 0 set." );
		static_assert( (0b0000'0000'0000'0010_b16).BitScanForward() == 1,  "max::Containers::Bits16::BitScanForward not reporting bit 1 set." );
		static_assert( (0b0000'0000'0000'0100_b16).BitScanForward() == 2,  "max::Containers::Bits16::BitScanForward not reporting bit 2 set." );
		static_assert( (0b0000'0000'0000'1000_b16).BitScanForward() == 3,  "max::Containers::Bits16::BitScanForward not reporting bit 3 set." );
		static_assert( (0b0000'0000'0001'0000_b16).BitScanForward() == 4,  "max::Containers::Bits16::BitScanForward not reporting bit 4 set." );
		static_assert( (0b0000'0000'0010'0000_b16).BitScanForward() == 5,  "max::Containers::Bits16::BitScanForward not reporting bit 5 set." );
		static_assert( (0b0000'0000'0100'0000_b16).BitScanForward() == 6,  "max::Containers::Bits16::BitScanForward not reporting bit 6 set." );
		static_assert( (0b0000'0000'1000'0000_b16).BitScanForward() == 7,  "max::Containers::Bits16::BitScanForward not reporting bit 7 set." );
		static_assert( (0b0000'0001'0000'0000_b16).BitScanForward() == 8,  "max::Containers::Bits16::BitScanForward not reporting bit 8 set." );
		static_assert( (0b0000'0010'0000'0000_b16).BitScanForward() == 9,  "max::Containers::Bits16::BitScanForward not reporting bit 9 set." );
		static_assert( (0b0000'0100'0000'0000_b16).BitScanForward() == 10, "max::Containers::Bits16::BitScanForward not reporting bit 10 set." );
		static_assert( (0b0000'1000'0000'0000_b16).BitScanForward() == 11, "max::Containers::Bits16::BitScanForward not reporting bit 11 set." );
		static_assert( (0b0001'0000'0000'0000_b16).BitScanForward() == 12, "max::Containers::Bits16::BitScanForward not reporting bit 12 set." );
		static_assert( (0b0010'0000'0000'0000_b16).BitScanForward() == 13, "max::Containers::Bits16::BitScanForward not reporting bit 13 set." );
		static_assert( (0b0100'0000'0000'0000_b16).BitScanForward() == 14, "max::Containers::Bits16::BitScanForward not reporting bit 14 set." );
		static_assert( (0b1000'0000'0000'0000_b16).BitScanForward() == 15, "max::Containers::Bits16::BitScanForward not reporting bit 15 set." );

		static_assert( (0b1111'1111'1111'1000_b16).BitScanForward() == 3, "max::Containers::Bits16::BitScanForward should report the last significant set bit." );

		static_assert( (0b1111'0000'1010'0101_b16).SwapEndian() == (0b1010'0101'1111'0000_b16), "max::Containers::Bits16::SwapEndian() should swap high and low 8 bits." );
	}

} // namespace Containers
} // namespace maxAutomatedTests