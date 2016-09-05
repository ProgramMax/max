// Copyright 2016, Chris Blume
// All rights reserved.

#include "RangeTest.hpp"
#include "IsBetweenTest.hpp"
#include <iostream>

int main()
{

	maxTests::Containers::RunRangeTestSuite();
	maxTests::Algorithms::RunIsBetweenTestSuite();

	system( "pause" );

	return 0;
}