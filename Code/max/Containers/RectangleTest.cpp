// Copyright 2021, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "RectangleTest.hpp"
#include <max/Containers/Rectangle.hpp>
#include <max/Testing/TestSuite.hpp>
#include <max/Testing/CoutResultPolicy.hpp>
#include <utility>

namespace maxAutomatedTests
{
namespace Containers
{

	void RunRectangleTestSuite()
	{
		max::Testing::CoutResultPolicy ResultPolicy;
		auto RectangleTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Containers::Rectangle test suite", std::move( ResultPolicy ) };

		RectangleTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "constructor sets values", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			using PointOrdinateType = int;
			auto TopLeft = max::Containers::CartesianPoint< PointOrdinateType, 2 >{ 42, 1 };

			auto Test = max::Containers::Rectangle< PointOrdinateType, unsigned int >( TopLeft, 2, 3 );

			CurrentTest.MAX_TESTING_ASSERT( Test.TopLeft.X() == 42 );
			CurrentTest.MAX_TESTING_ASSERT( Test.TopLeft.Y() == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Width == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Height == 3 );
		}
		} );

		RectangleTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "copy constructor copies elements", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			using PointOrdinateType = int;
			auto TopLeft = max::Containers::CartesianPoint< PointOrdinateType, 2 >{ 42, 1 };
			auto Original = max::Containers::Rectangle< PointOrdinateType, unsigned int >( TopLeft, 2, 3 );

			max::Containers::Rectangle< PointOrdinateType, unsigned int > Test = Original;

			CurrentTest.MAX_TESTING_ASSERT( Test.TopLeft.X() == 42 );
			CurrentTest.MAX_TESTING_ASSERT( Test.TopLeft.Y() == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Width == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Height == 3 );
		}
		} );

		RectangleTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "move constructor moves elements", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			using PointOrdinateType = int;
			auto TopLeft = max::Containers::CartesianPoint< PointOrdinateType, 2 >{ 42, 1 };
			auto Original = max::Containers::Rectangle< PointOrdinateType, unsigned int >( TopLeft, 2, 3 );

			max::Containers::Rectangle< PointOrdinateType, unsigned int > Test = std::move( Original );

			CurrentTest.MAX_TESTING_ASSERT( Test.TopLeft.X() == 42 );
			CurrentTest.MAX_TESTING_ASSERT( Test.TopLeft.Y() == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Width == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Height == 3 );
		}
		} );

		RectangleTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "copy assignment operator copies elements", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			using PointOrdinateType = int;
			auto TopLeft = max::Containers::CartesianPoint< PointOrdinateType, 2 >{ 42, 1 };
			auto Original = max::Containers::Rectangle< PointOrdinateType, unsigned int >( TopLeft, 2, 3 );
			max::Containers::Rectangle< PointOrdinateType, unsigned int > Test;

			Test = Original;

			CurrentTest.MAX_TESTING_ASSERT( Test.TopLeft.X() == 42 );
			CurrentTest.MAX_TESTING_ASSERT( Test.TopLeft.Y() == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Width == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Height == 3 );
		}
		} );

		RectangleTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "move assignment operator moves elements", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			using PointOrdinateType = int;
			auto TopLeft = max::Containers::CartesianPoint< PointOrdinateType, 2 >{ 42, 1 };
			auto Original = max::Containers::Rectangle< PointOrdinateType, unsigned int >( TopLeft, 2, 3 );
			max::Containers::Rectangle< PointOrdinateType, unsigned int > Test;

			Test = std::move( Original );

			CurrentTest.MAX_TESTING_ASSERT( Test.TopLeft.X() == 42 );
			CurrentTest.MAX_TESTING_ASSERT( Test.TopLeft.Y() == 1 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Width == 2 );
			CurrentTest.MAX_TESTING_ASSERT( Test.Height == 3 );
		}
		} );

		RectangleTestSuite.RunTests();
	}

} // namespace Containers
} // namespace maxAutomatedTests
