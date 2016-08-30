// Copyright 2016, Chris Blume
// All rights reserved.

#include "RangeTest.hpp"
#include <max/Containers/Range.hpp>
#include <max/Testing/TestSuite.hpp>

namespace maxTests
{
namespace Containers
{

	void RunRangeTestSuite()
	{
		auto RangeTestSuite = max::Testing::TestSuite{ "max::Containers::Range test suite" };

		RangeTestSuite.AddTest( max::Testing::Test{ "constructor sets minimum and maximum correctly", []( max::Testing::Test & CurrentTest ) {
			auto testRange = max::Containers::Range< int >{ 42, 100 };
			CurrentTest.MAX_TESTING_ASSERT( testRange.Minimum == 42  );
			CurrentTest.MAX_TESTING_ASSERT( testRange.Maximum == 100 );
		}
		} );

		RangeTestSuite.AddTest( max::Testing::Test{ "constructor accepts same values", []( max::Testing::Test & CurrentTest ) {
			auto testRange = max::Containers::Range< int >{ 42, 42 };
			CurrentTest.MAX_TESTING_ASSERT( testRange.Minimum == 42 );
			CurrentTest.MAX_TESTING_ASSERT( testRange.Maximum == 42 );
		}
		} );

		RangeTestSuite.AddTest( max::Testing::Test{ "MakeRange with minimum first", []( max::Testing::Test & CurrentTest ) {
			auto testRange = max::Containers::MakeRange( 1, 42 );
			CurrentTest.MAX_TESTING_ASSERT( testRange.Minimum == 1  );
			CurrentTest.MAX_TESTING_ASSERT( testRange.Maximum == 42 );
		}
		} );

		RangeTestSuite.AddTest( max::Testing::Test{ "MakeRange with maximum first", []( max::Testing::Test & CurrentTest ) {
			auto testRange = max::Containers::MakeRange( 100, 42 );
			CurrentTest.MAX_TESTING_ASSERT( testRange.Minimum == 42  );
			CurrentTest.MAX_TESTING_ASSERT( testRange.Maximum == 100 );
		}
		} );

		RangeTestSuite.RunTests();
	}

} // namespace Containers
} // namespace maxTests