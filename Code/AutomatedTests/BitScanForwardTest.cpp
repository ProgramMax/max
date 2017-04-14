// Copyright 2017, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "BitScanForwardTest.hpp"
#include <max/Algorithms/BitScanForward.hpp>
#include <max/Testing/TestSuite.hpp>

namespace maxAutomatedTests
{
namespace Algorithms
{

	void RunBitScanForwardTestSuite()
	{
		static_assert( max::Algorithms::BitScanForward( 0b00000001 ) == 0, "constexpr max::Algorithms::BitScanForward(uint8_t) not reporting first bit set"   );
		static_assert( max::Algorithms::BitScanForward( 0b00000010 ) == 1, "constexpr max::Algorithms::BitScanForward(uint8_t) not reporting second bit set"  );
		static_assert( max::Algorithms::BitScanForward( 0b00000100 ) == 2, "constexpr max::Algorithms::BitScanForward(uint8_t) not reporting third bit set"   );
		static_assert( max::Algorithms::BitScanForward( 0b00001000 ) == 3, "constexpr max::Algorithms::BitScanForward(uint8_t) not reporting fourth bit set"  );
		static_assert( max::Algorithms::BitScanForward( 0b00010000 ) == 4, "constexpr max::Algorithms::BitScanForward(uint8_t) not reporting fifth bit set"   );
		static_assert( max::Algorithms::BitScanForward( 0b00100000 ) == 5, "constexpr max::Algorithms::BitScanForward(uint8_t) not reporting sixth bit set"   );
		static_assert( max::Algorithms::BitScanForward( 0b01000000 ) == 6, "constexpr max::Algorithms::BitScanForward(uint8_t) not reporting seventh bit set" );
		static_assert( max::Algorithms::BitScanForward( 0b10000000 ) == 7, "constexpr max::Algorithms::BitScanForward(uint8_t) not reporting eighth bit set"  );
	}

} // namespace Algorithms
} // namespace maxAutomatedTests