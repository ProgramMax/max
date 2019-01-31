// Copyright 2017, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "Bits32Test.hpp"
#include <max/Containers/Bits32.hpp>
#include <max/Testing/TestSuite.hpp>

namespace maxAutomatedTests
{
namespace Containers
{

	void RunBits32TestSuite()
	{
		static_assert( max::Containers::Bits32{ static_cast< uint32_t >( 0 ) }.Value == 0, "max::Containers::Bits32 uint32_t ctor should be constexpr." );
		static_assert( max::Containers::Bits32{ static_cast<  int32_t >( 0 ) }.Value == 0, "max::Containers::Bits32 int32_t ctor should be constexpr." );

		static_assert( (0_b32).Value == 0, R"(max::Containers::operator"" _b32 not supported.)" );
		static_assert( (1_b32).Value == 1, R"(max::Containers::operator"" _b32 not supported.)" );

		static_assert( (0b0000'0000'0000'0000'0000'0000'0000'0001_b32).BitScanForward() == 0,  "max::Containers::Bits32::BitScanForward not reporting bit 0 set." );
		static_assert( (0b0000'0000'0000'0000'0000'0000'0000'0010_b32).BitScanForward() == 1,  "max::Containers::Bits32::BitScanForward not reporting bit 1 set." );
		static_assert( (0b0000'0000'0000'0000'0000'0000'0000'0100_b32).BitScanForward() == 2,  "max::Containers::Bits32::BitScanForward not reporting bit 2 set." );
		static_assert( (0b0000'0000'0000'0000'0000'0000'0000'1000_b32).BitScanForward() == 3,  "max::Containers::Bits32::BitScanForward not reporting bit 3 set." );
		static_assert( (0b0000'0000'0000'0000'0000'0000'0001'0000_b32).BitScanForward() == 4,  "max::Containers::Bits32::BitScanForward not reporting bit 4 set." ); //-V112
		static_assert( (0b0000'0000'0000'0000'0000'0000'0010'0000_b32).BitScanForward() == 5,  "max::Containers::Bits32::BitScanForward not reporting bit 5 set." );
		static_assert( (0b0000'0000'0000'0000'0000'0000'0100'0000_b32).BitScanForward() == 6,  "max::Containers::Bits32::BitScanForward not reporting bit 6 set." );
		static_assert( (0b0000'0000'0000'0000'0000'0000'1000'0000_b32).BitScanForward() == 7,  "max::Containers::Bits32::BitScanForward not reporting bit 7 set." );
		static_assert( (0b0000'0000'0000'0000'0000'0001'0000'0000_b32).BitScanForward() == 8,  "max::Containers::Bits32::BitScanForward not reporting bit 8 set." );
		static_assert( (0b0000'0000'0000'0000'0000'0010'0000'0000_b32).BitScanForward() == 9,  "max::Containers::Bits32::BitScanForward not reporting bit 9 set." );
		static_assert( (0b0000'0000'0000'0000'0000'0100'0000'0000_b32).BitScanForward() == 10, "max::Containers::Bits32::BitScanForward not reporting bit 10 set." );
		static_assert( (0b0000'0000'0000'0000'0000'1000'0000'0000_b32).BitScanForward() == 11, "max::Containers::Bits32::BitScanForward not reporting bit 11 set." );
		static_assert( (0b0000'0000'0000'0000'0001'0000'0000'0000_b32).BitScanForward() == 12, "max::Containers::Bits32::BitScanForward not reporting bit 12 set." );
		static_assert( (0b0000'0000'0000'0000'0010'0000'0000'0000_b32).BitScanForward() == 13, "max::Containers::Bits32::BitScanForward not reporting bit 13 set." );
		static_assert( (0b0000'0000'0000'0000'0100'0000'0000'0000_b32).BitScanForward() == 14, "max::Containers::Bits32::BitScanForward not reporting bit 14 set." );
		static_assert( (0b0000'0000'0000'0000'1000'0000'0000'0000_b32).BitScanForward() == 15, "max::Containers::Bits32::BitScanForward not reporting bit 15 set." );
		static_assert( (0b0000'0000'0000'0001'0000'0000'0000'0000_b32).BitScanForward() == 16, "max::Containers::Bits32::BitScanForward not reporting bit 16 set." );
		static_assert( (0b0000'0000'0000'0010'0000'0000'0000'0000_b32).BitScanForward() == 17, "max::Containers::Bits32::BitScanForward not reporting bit 17 set." );
		static_assert( (0b0000'0000'0000'0100'0000'0000'0000'0000_b32).BitScanForward() == 18, "max::Containers::Bits32::BitScanForward not reporting bit 18 set." );
		static_assert( (0b0000'0000'0000'1000'0000'0000'0000'0000_b32).BitScanForward() == 19, "max::Containers::Bits32::BitScanForward not reporting bit 19 set." );
		static_assert( (0b0000'0000'0001'0000'0000'0000'0000'0000_b32).BitScanForward() == 20, "max::Containers::Bits32::BitScanForward not reporting bit 20 set." );
		static_assert( (0b0000'0000'0010'0000'0000'0000'0000'0000_b32).BitScanForward() == 21, "max::Containers::Bits32::BitScanForward not reporting bit 21 set." );
		static_assert( (0b0000'0000'0100'0000'0000'0000'0000'0000_b32).BitScanForward() == 22, "max::Containers::Bits32::BitScanForward not reporting bit 22 set." );
		static_assert( (0b0000'0000'1000'0000'0000'0000'0000'0000_b32).BitScanForward() == 23, "max::Containers::Bits32::BitScanForward not reporting bit 23 set." );
		static_assert( (0b0000'0001'0000'0000'0000'0000'0000'0000_b32).BitScanForward() == 24, "max::Containers::Bits32::BitScanForward not reporting bit 24 set." );
		static_assert( (0b0000'0010'0000'0000'0000'0000'0000'0000_b32).BitScanForward() == 25, "max::Containers::Bits32::BitScanForward not reporting bit 25 set." );
		static_assert( (0b0000'0100'0000'0000'0000'0000'0000'0000_b32).BitScanForward() == 26, "max::Containers::Bits32::BitScanForward not reporting bit 26 set." );
		static_assert( (0b0000'1000'0000'0000'0000'0000'0000'0000_b32).BitScanForward() == 27, "max::Containers::Bits32::BitScanForward not reporting bit 27 set." );
		static_assert( (0b0001'0000'0000'0000'0000'0000'0000'0000_b32).BitScanForward() == 28, "max::Containers::Bits32::BitScanForward not reporting bit 28 set." );
		static_assert( (0b0010'0000'0000'0000'0000'0000'0000'0000_b32).BitScanForward() == 29, "max::Containers::Bits32::BitScanForward not reporting bit 29 set." );
		static_assert( (0b0100'0000'0000'0000'0000'0000'0000'0000_b32).BitScanForward() == 30, "max::Containers::Bits32::BitScanForward not reporting bit 30 set." );
		static_assert( (0b1000'0000'0000'0000'0000'0000'0000'0000_b32).BitScanForward() == 31, "max::Containers::Bits32::BitScanForward not reporting bit 31 set." );

		static_assert( (0b0000'0000'0000'0000'1111'1111'1111'1000_b32).BitScanForward() == 3, "max::Containers::Bits32::BitScanForward should report the last significant set bit." );

		static_assert( (0b1000'0111'0110'0101'0100'0011'0010'0001_b32).SwapEndian() == (0b0010'0001'0100'0011'0110'0101'1000'0111_b32), "max::Containers::Bits32::SwapEndian() should swap high and low 16 bits." );
	}

} // namespace Containers
} // namespace maxAutomatedTests