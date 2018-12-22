// Copyright 2018, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "VectorTest.hpp"
#include <max/Containers/Vector.hpp>
#include <max/Testing/TestSuite.hpp>
#include <utility>

namespace maxAutomatedTests
{
namespace Containers
{

	void RunVectorTestSuite()
	{
		auto VectorTestSuite = max::Testing::TestSuite{ "max::Containers::Vector test suite" };

		VectorTestSuite.AddTest( max::Testing::Test{ "initializer_list constructor populates elements", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > Test = { 1, 2, 3 };

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "copy constructor copies elements", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > Original = { 1, 2, 3 };

			max::Containers::Vector< int, 3 > Test = Original;

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "move constructor moves elements", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > Original = { 1, 2, 3 };

			max::Containers::Vector< int, 3 > Test = std::move( Original );

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "copy assignment operator copies elements", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > Original = { 1, 2, 3 };
			max::Containers::Vector< int, 3 > Test;

			Test = Original;

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "move assignment operator moves elements", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > Original = { 1, 2, 3 };
			max::Containers::Vector< int, 3 > Test;

			Test = std::move( Original );

			CurrentTest.MAX_TESTING_ASSERT( Test[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test[ 2 ] == 3 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "operator + adds two vectors", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > lhs = { 1, 2, 3 };
			max::Containers::Vector< int, 3 > rhs = { 4, 5, 6 };

			max::Containers::Vector< int, 3 > Result = lhs + rhs;

			CurrentTest.MAX_TESTING_ASSERT( Result[ 0 ] == 5 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 1 ] == 7 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 2 ] == 9 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "operator - subtracts from the first vector", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > lhs = { 1, 2, 3 };
			max::Containers::Vector< int, 3 > rhs = { 4, 6, 8 };

			max::Containers::Vector< int, 3 > Result = lhs - rhs;

			CurrentTest.MAX_TESTING_ASSERT( Result[ 0 ] == -3 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 1 ] == -4 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 2 ] == -5 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "Cross function returns cross product", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > lhs = { 1, 2, 3 };
			max::Containers::Vector< int, 3 > rhs = { 4, 6, 8 };

			max::Containers::Vector< int, 3 > Result = lhs.Cross( rhs );

			CurrentTest.MAX_TESTING_ASSERT( Result[ 0 ] == -2 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 1 ] ==  4 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 2 ] == -2 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "Dot function returns dot product", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > lhs = { 1, 2, 3 };
			max::Containers::Vector< int, 3 > rhs = { 4, 6, 8 };

			int Result = lhs.Dot( rhs );

			CurrentTest.MAX_TESTING_ASSERT( Result == 40 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "scalar operator * scales", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > Original = { 1, 2, 3 };

			max::Containers::Vector< int, 3 > Result = Original * 2;

			CurrentTest.MAX_TESTING_ASSERT( Result[ 0 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 1 ] == 4 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 2 ] == 6 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "scalar operator / scales", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > Original = { 1, 2, 3 };

			max::Containers::Vector< int, 3 > Result = Original / 2;

			CurrentTest.MAX_TESTING_ASSERT( Result[ 0 ] == 0 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 1 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 2 ] == 1 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "Length function returns length", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< double, 3 > Original = { 1.0, 2.0, 3.0 };

			CurrentTest.MAX_TESTING_ASSERT( Original.Length() == 3.7416573867739413 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "Normalize function normalizes", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< double, 3 > Original = { 1.0, 2.0, 3.0 };

			max::Containers::Vector< double, 3 > Result = Original.Normalize();

			CurrentTest.MAX_TESTING_ASSERT( Result[ 0 ] == 0.2672612419124244 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 1 ] == 0.53452248382484879 );
			CurrentTest.MAX_TESTING_ASSERT( Result[ 2 ] == 0.80178372573727319 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "non-const operator [] sets the value at that index", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > Original = { 1, 2, 3 };

			Original[ 0 ] = 4;
			Original[ 1 ] = 5;
			Original[ 2 ] = 6;

			CurrentTest.MAX_TESTING_ASSERT( Original[ 0 ] == 4 );
			CurrentTest.MAX_TESTING_ASSERT( Original[ 1 ] == 5 );
			CurrentTest.MAX_TESTING_ASSERT( Original[ 2 ] == 6 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "const operator [] reads the value", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > Original = { 1, 2, 3 };

			CurrentTest.MAX_TESTING_ASSERT( Original[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Original[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Original[ 2 ] == 3 );
		}
		} );

		VectorTestSuite.AddTest( max::Testing::Test{ "data function returns a pointer to the contiguous array", []( max::Testing::Test & CurrentTest ) {
			max::Containers::Vector< int, 3 > Original = { 1, 2, 3 };

			const int * RawData = Original.data();

			CurrentTest.MAX_TESTING_ASSERT( RawData[ 0 ] == 1 );
			CurrentTest.MAX_TESTING_ASSERT( RawData[ 1 ] == 2 );
			CurrentTest.MAX_TESTING_ASSERT( RawData[ 2 ] == 3 );
		}
		} );

		VectorTestSuite.RunTests();
	}

} // namespace Containers
} // namespace maxAutomatedTests
