// Copyright 2021, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "PointTest.hpp"
#include <max/Containers/Point.hpp>
#include <max/Testing/TestSuite.hpp>
#include <max/Testing/CoutResultPolicy.hpp>
#include <utility>

namespace maxAutomatedTests
{
namespace Containers
{

	void RunPointTestSuite()
	{
		max::Testing::CoutResultPolicy ResultPolicy;
		auto CartesianPointTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Containers::CartesianPoint test suite", std::move( ResultPolicy ) };

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "initializer_list constructor populates elements", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			max::Containers::CartesianPoint< int, 3 > Test = { 1, 2, 3 };

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "1D constructor sets X", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			auto Test = max::Containers::CartesianPoint< int, 1 >{ 42 };
			CurrentTest.MAX_TESTING_ASSERT( Test.X() == 42  );
		}
		} );

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "2D constructor sets X and Y correctly", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			auto Test = max::Containers::CartesianPoint< int, 2 >{ 42, 100 };
			CurrentTest.MAX_TESTING_ASSERT( Test.X() == 42  );
			CurrentTest.MAX_TESTING_ASSERT( Test.Y() == 100 );
		}
		} );

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "3D constructor sets X, Y, and Z correctly", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			auto Test = max::Containers::CartesianPoint< int, 3 >{ 42, 100, 1 };
			CurrentTest.MAX_TESTING_ASSERT( Test.X() == 42  );
			CurrentTest.MAX_TESTING_ASSERT( Test.Y() == 100 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Z() == 1   );
		}
		} );

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "4D constructor sets X, Y, Z, and 4th element correctly", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			auto Test = max::Containers::CartesianPoint< int, 4 >{ 42, 100, 1, 4 };
			CurrentTest.MAX_TESTING_ASSERT( Test.X() == 42  );
			CurrentTest.MAX_TESTING_ASSERT( Test.Y() == 100 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Z() == 1   );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 3 ] == 4  );
		}
		} );

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "copy constructor copies elements", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			max::Containers::CartesianPoint< int, 3 > Original = { 1, 2, 3 };

			max::Containers::CartesianPoint< int, 3 > Test = Original;

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "move constructor moves elements", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			max::Containers::CartesianPoint< int, 3 > Original = { 1, 2, 3 };

			max::Containers::CartesianPoint< int, 3 > Test = std::move( Original );

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "copy assignment operator copies elements", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			max::Containers::CartesianPoint< int, 3 > Original = { 1, 2, 3 };
			max::Containers::CartesianPoint< int, 3 > Test;

			Test = Original;

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "move assignment operator moves elements", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			max::Containers::CartesianPoint< int, 3 > Original = { 1, 2, 3 };
			max::Containers::CartesianPoint< int, 3 > Test;

			Test = std::move( Original );

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "index operator gets correct value", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			max::Containers::CartesianPoint< int, 3 > Test = { 4, 5, 6 };

			Test[ 0 ] = 1;
			Test[ 1 ] = 2;
			Test[ 2 ] = 3;

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "const index operator gets correct value", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			max::Containers::CartesianPoint< int, 3 > Test = { 1, 2, 3 };

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		CartesianPointTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "data function returns contiguous pointer with elements", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			max::Containers::CartesianPoint< int, 3 > Original = { 1, 2, 3 };

			auto Test = Original.data();

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		CartesianPointTestSuite.RunTests();


		auto PolarPointTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Containers::PolarPoint test suite", std::move( ResultPolicy ) };
		PolarPointTestSuite.RunTests();
	}

} // namespace Containers
} // namespace maxAutomatedTests
