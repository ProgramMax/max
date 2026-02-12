// Copyright 2016, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Algorithms/CountZeroesTest.hpp>
#include <max/Algorithms/DeferTest.hpp>
#include <max/Algorithms/IsBetweenTest.hpp>
#include <max/Algorithms/SwapEndianTest.hpp>
#include <max/Containers/PointTest.hpp>
#include <max/Containers/RangeTest.hpp>
#include <max/Containers/RectangleTest.hpp>
#include <max/Containers/SlotMapTest.hpp>
#include <max/Containers/VectorTest.hpp>


int main()
{
	maxAutomatedTests::Algorithms::RunDeferTestSuite();
	maxAutomatedTests::Algorithms::RunIsBetweenTestSuite();
	maxAutomatedTests::Algorithms::RunSwapEndianTestSuite();
	maxAutomatedTests::Algorithms::RunCountZeroesTestSuite();
	maxAutomatedTests::Containers::RunPointTestSuite();
	maxAutomatedTests::Containers::RunRangeTestSuite();
	maxAutomatedTests::Containers::RunRectangleTestSuite();
	maxAutomatedTests::Containers::RunSlotMapTestSuite();
	maxAutomatedTests::Containers::RunVectorTestSuite();

	return 0;
}
