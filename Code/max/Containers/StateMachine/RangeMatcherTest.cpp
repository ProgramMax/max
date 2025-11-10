// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Containers/StateMachine/RangeMatcherTest.hpp>

#include <max/Containers/StateMachine/NumberInput.hpp>
#include <max/Containers/StateMachine/RangeMatcher.hpp>

#include <max/Testing/CoutResultPolicy.hpp>
#include <max/Testing/TestSuite.hpp>

#include <cstdint>

namespace max {
namespace Containers {
namespace StateMachine {

	void RunRangeMatcherTestSuite() noexcept {

		max::Testing::CoutResultPolicy ResultPolicy;
		auto RangeMatcherTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Containers::StateMathinc::RangeMatcher test suite", std::move( ResultPolicy ) };

		RangeMatcherTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "constructor initializes members", []( max::Testing::Test< max::Testing::CoutResultPolicy > & /*CurrentTest*/, max::Testing::CoutResultPolicy const & /*ResultPolicy*/ ) {
			constexpr auto range_matcher = max::Containers::StateMachine::RangeMatcher<uint32_t>{0, 255};

			static_assert( range_matcher.lower_bound_ == 0, "Constructor should set lower bound" );
			static_assert( range_matcher.upper_bound_ == 255, "Constructor should set upper bound" );
			}
		} );

		RangeMatcherTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "DoesMatch() matches range", []( max::Testing::Test< max::Testing::CoutResultPolicy > & /*CurrentTest*/, max::Testing::CoutResultPolicy const & /*ResultPolicy*/ ) {
			constexpr auto range_matcher = max::Containers::StateMachine::RangeMatcher<uint32_t>{5, 95};

			static_assert( !range_matcher.DoesMatch(0),  "0 is out of the specified range" );
			static_assert( !range_matcher.DoesMatch(4),  "4 is out of the specified range" );
			static_assert(  range_matcher.DoesMatch(5),  "5 is within the specified range" );
			static_assert(  range_matcher.DoesMatch(95), "95 is within the specified range" );
			static_assert( !range_matcher.DoesMatch(96), "96 is out of the specified range" );
			}
		} );

		RangeMatcherTestSuite.RunTests();
	}

} // namespace StateMachine
} // namespace Containers
} // namespace max