// Copyright 2017, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "Bits8Test.hpp"
#include <max/Containers/Bits8.hpp>
#include <max/Testing/TestSuite.hpp>

namespace maxAutomatedTests
{
namespace Containers
{

	void RunBits8TestSuite()
	{
		static_assert( max::Containers::Bits8{ static_cast< uint8_t >( 0 ) }.Value == 0, "max::Containers::Bits8 uint8_t ctor should be constexpr." );
		static_assert( max::Containers::Bits8{ static_cast<  int8_t >( 0 ) }.Value == 0, "max::Containers::Bits8 int8_t ctor should be constexpr." );

		static_assert( (0_b8).Value == 0, R"(max::Containers::operator"" _b8 not supported.)" );
		static_assert( (1_b8).Value == 1, R"(max::Containers::operator"" _b8 not supported.)" );

		static_assert( (0b0000'0001_b8).BitScanForward() == 0, "max::Containers::Bits8::BitScanForward not reporting bit 0 set." );
		static_assert( (0b0000'0010_b8).BitScanForward() == 1, "max::Containers::Bits8::BitScanForward not reporting bit 1 set." );
		static_assert( (0b0000'0100_b8).BitScanForward() == 2, "max::Containers::Bits8::BitScanForward not reporting bit 2 set." );
		static_assert( (0b0000'1000_b8).BitScanForward() == 3, "max::Containers::Bits8::BitScanForward not reporting bit 3 set." );
		static_assert( (0b0001'0000_b8).BitScanForward() == 4, "max::Containers::Bits8::BitScanForward not reporting bit 4 set." );
		static_assert( (0b0010'0000_b8).BitScanForward() == 5, "max::Containers::Bits8::BitScanForward not reporting bit 5 set." );
		static_assert( (0b0100'0000_b8).BitScanForward() == 6, "max::Containers::Bits8::BitScanForward not reporting bit 6 set." );
		static_assert( (0b1000'0000_b8).BitScanForward() == 7, "max::Containers::Bits8::BitScanForward not reporting bit 7 set." );

		static_assert( (0b1111'1000_b8).BitScanForward() == 3, "max::Containers::Bits8::BitScanForward should report the last significant set bit." );
	}

} // namespace Containers
} // namespace maxAutomatedTests