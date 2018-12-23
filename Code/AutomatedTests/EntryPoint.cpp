// Copyright 2016, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "Bits8Test.hpp"
#include "Bits16Test.hpp"
#include "Bits32Test.hpp"
#include "IsBetweenTest.hpp"
#include "RangeTest.hpp"
#include "VectorTest.hpp"

int main()
{
	maxAutomatedTests::Containers::RunBits8TestSuite();
	maxAutomatedTests::Containers::RunBits16TestSuite();
	maxAutomatedTests::Containers::RunBits32TestSuite();
	maxAutomatedTests::Algorithms::RunIsBetweenTestSuite();
	maxAutomatedTests::Containers::RunRangeTestSuite();
	maxAutomatedTests::Containers::RunVectorTestSuite();

	return 0;
}
