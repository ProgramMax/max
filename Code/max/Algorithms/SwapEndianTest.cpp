// Copyright 2020, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "SwapEndianTest.hpp"
#include <max/Algorithms/SwapEndian.hpp>
#include <max/Testing/TestSuite.hpp>
#include <max/Testing/CoutResultPolicy.hpp>
#include <utility>

namespace maxAutomatedTests
{
	namespace Algorithms
	{

		void RunSwapEndianTestSuite()
		{
			max::Testing::CoutResultPolicy ResultPolicy;
			auto SwapEndianTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Algorithms::SwapEndian test suite", std::move( ResultPolicy ) };

			// TODO: Add LittleEndianToHost test
			// TODO: Add BigEndianToHost test
			// TODO: Add HostToLittleEndian test
			// TODO: Add HostToBigEndian test
			// TODO: Add CombinePieces test

			SwapEndianTestSuite.RunTests();
		}

	} // namespace Algorithms
} // namespace maxAutomatedTests
