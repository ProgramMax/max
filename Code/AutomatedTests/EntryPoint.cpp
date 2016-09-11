// Copyright 2016, Chris Blume
// All rights reserved.

#include "RangeTest.hpp"
#include "IsBetweenTest.hpp"

int main()
{

	maxAutomatedTests::Containers::RunRangeTestSuite();
	maxAutomatedTests::Algorithms::RunIsBetweenTestSuite();

	return 0;
}