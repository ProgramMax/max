// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_TESTING_TESTSUITE_HPP
#define MAX_TESTING_TESTSUITE_HPP

// Usage:
//
// #include <max/Testing/TestSuite.hpp>
// #incldue <stdexcept>
//
// int main() {
//   max::Testing::TestSuite( "Example suite",
//     max::Testing::AddTest( "Test equality",
//       []( auto const & CurrentTestSuite ) {
//         CurrentTestSuite.AssertEquals( 1, 1 );
//       }
//     ),
//     max::Testing::AddTest( "Test throws",
//       []( auto const & CurrentTestSuite ) {
//         CurrentTestSuite.AssertThrows< std::exception >(
//           []() { throw std::exception{}; }
//         );
//       }
//     )
//   );
// }

#include <string>
#include <vector>
#include <max/Testing/Test.hpp>

namespace max
{
namespace Testing
{

	class TestSuite
	{
	public:

		TestSuite( char const * const Name );

		void AddTest( max::Testing::Test const &  TestToAdd );
		void AddTest( max::Testing::Test       && TestToAdd );
		void RunTests();

	protected:

		virtual void Setup();
		virtual void TearDown();

	private:

		std::string Name;
		std::vector< max::Testing::Test > Tests;

	};

} // namespace Testing
} // namespace max

#endif // #ifndef MAX_TESTING_TESTSUITE_HPP