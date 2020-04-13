// Copyright 2020, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "BitScanTest.hpp"
#include <max/Algorithms/BitScan.hpp>
#include <max/Testing/TestSuite.hpp>
#include <max/Testing/CoutResultPolicy.hpp>
#include <utility>

namespace maxAutomatedTests
{
	namespace Algorithms
	{

		void RunBitScanTestSuite()
		{
			// TODO: Add non-constexpr tests
			// TODO: Add 64-bit tests

			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'0000'0000'0001 ) ) == 0,  "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 0 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'0000'0000'0010 ) ) == 1,  "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 1 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'0000'0000'0100 ) ) == 2,  "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 2 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'0000'0000'1000 ) ) == 3,  "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 3 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'0000'0001'0000 ) ) == 4,  "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 4 set."  ); //-V112
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'0000'0010'0000 ) ) == 5,  "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 5 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'0000'0100'0000 ) ) == 6,  "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 6 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'0000'1000'0000 ) ) == 7,  "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 7 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'0001'0000'0000 ) ) == 8,  "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 8 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'0010'0000'0000 ) ) == 9,  "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 9 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'0100'0000'0000 ) ) == 10, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 10 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0000'1000'0000'0000 ) ) == 11, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 11 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0001'0000'0000'0000 ) ) == 12, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 12 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0010'0000'0000'0000 ) ) == 13, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 13 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'0100'0000'0000'0000 ) ) == 14, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 14 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'1000'0000'0000'0000 ) ) == 15, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 15 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0001'0000'0000'0000'0000 ) ) == 16, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 16 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0010'0000'0000'0000'0000 ) ) == 17, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 17 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0100'0000'0000'0000'0000 ) ) == 18, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 18 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'1000'0000'0000'0000'0000 ) ) == 19, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 19 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0001'0000'0000'0000'0000'0000 ) ) == 20, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 20 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0010'0000'0000'0000'0000'0000 ) ) == 21, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 21 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0100'0000'0000'0000'0000'0000 ) ) == 22, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 22 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'1000'0000'0000'0000'0000'0000 ) ) == 23, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 23 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0001'0000'0000'0000'0000'0000'0000 ) ) == 24, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 24 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0010'0000'0000'0000'0000'0000'0000 ) ) == 25, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 25 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0100'0000'0000'0000'0000'0000'0000 ) ) == 26, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 26 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'1000'0000'0000'0000'0000'0000'0000 ) ) == 27, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 27 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0001'0000'0000'0000'0000'0000'0000'0000 ) ) == 28, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 28 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0010'0000'0000'0000'0000'0000'0000'0000 ) ) == 29, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 29 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0100'0000'0000'0000'0000'0000'0000'0000 ) ) == 30, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 30 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b1000'0000'0000'0000'0000'0000'0000'0000 ) ) == 31, "max::Algorithms::BitScanForwardConstexpr( uint32_t ) not reporting bit 31 set." );

			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT32_C( 0b0000'0000'0000'0000'1111'1111'1111'1000 ) ) == 3,  "max::Algorithms::BitScanForwardConstexpr( uint32_t ) should report the last significant set bit.");


			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'0000'0000'0001 ) ) == 0,  "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 0 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'0000'0000'0010 ) ) == 1,  "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 1 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'0000'0000'0100 ) ) == 2,  "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 2 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'0000'0000'1000 ) ) == 3,  "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 3 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'0000'0001'0000 ) ) == 4,  "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 4 set."  ); //-V112
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'0000'0010'0000 ) ) == 5,  "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 5 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'0000'0100'0000 ) ) == 6,  "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 6 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'0000'1000'0000 ) ) == 7,  "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 7 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'0001'0000'0000 ) ) == 8,  "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 8 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'0010'0000'0000 ) ) == 9,  "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 9 set."  );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'0100'0000'0000 ) ) == 10, "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 10 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0000'1000'0000'0000 ) ) == 11, "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 11 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0001'0000'0000'0000 ) ) == 12, "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 12 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0010'0000'0000'0000 ) ) == 13, "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 13 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b0100'0000'0000'0000 ) ) == 14, "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 14 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b1000'0000'0000'0000 ) ) == 15, "max::Algorithms::BitScanForwardConstexpr( uint16_t ) not reporting bit 15 set." );

			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT16_C( 0b1111'1111'1111'1000 ) ) == 3,  "max::Algorithms::BitScanForwardConstexpr( uint16_t ) should report the last significant set bit." );


			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT8_C( 0b0000'0001 ) ) == 0, "max::Algorithms::BitScanForwardConstexpr not reporting bit 0 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT8_C( 0b0000'0010 ) ) == 1, "max::Algorithms::BitScanForwardConstexpr not reporting bit 1 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT8_C( 0b0000'0100 ) ) == 2, "max::Algorithms::BitScanForwardConstexpr not reporting bit 2 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT8_C( 0b0000'1000 ) ) == 3, "max::Algorithms::BitScanForwardConstexpr not reporting bit 3 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT8_C( 0b0001'0000 ) ) == 4, "max::Algorithms::BitScanForwardConstexpr not reporting bit 4 set." ); //-V112
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT8_C( 0b0010'0000 ) ) == 5, "max::Algorithms::BitScanForwardConstexpr not reporting bit 5 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT8_C( 0b0100'0000 ) ) == 6, "max::Algorithms::BitScanForwardConstexpr not reporting bit 6 set." );
			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT8_C( 0b1000'0000 ) ) == 7, "max::Algorithms::BitScanForwardConstexpr not reporting bit 7 set." );

			static_assert( max::Algorithms::BitScanForwardConstexpr( UINT8_C( 0b1111'1000 ) ) == 3, "max::Algorithms::BitScanForwardConstexpr should report the least significant set bit." );
		}

	} // namespace Algorithms
} // namespace maxAutomatedTests
