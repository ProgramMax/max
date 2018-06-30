// Copyright 2016, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "RangeTest.hpp"
#include "IsBetweenTest.hpp"
#include "Bits8Test.hpp"
#include "Bits16Test.hpp"
#include "Bits32Test.hpp"
#include <iostream>

int main()
{
	maxAutomatedTests::Containers::RunRangeTestSuite();
	maxAutomatedTests::Algorithms::RunIsBetweenTestSuite();
	maxAutomatedTests::Containers::RunBits8TestSuite();
	maxAutomatedTests::Containers::RunBits16TestSuite();
	maxAutomatedTests::Containers::RunBits32TestSuite();

	return 0;
}
