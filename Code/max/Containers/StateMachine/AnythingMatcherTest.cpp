// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Containers/StateMachine/AnythingMatcherTest.hpp>

#include <max/Containers/StateMachine/NumberInput.hpp>
#include <max/Containers/StateMachine/AnythingMatcher.hpp>

#include <max/Testing/CoutResultPolicy.hpp>
#include <max/Testing/TestSuite.hpp>

#include <cstdint>

namespace maxStateMachine {

	void RunAnythingMatcherTestSuite() noexcept {

		max::Testing::CoutResultPolicy ResultPolicy;
		auto AnythingMatcherTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "maxStateMathinc::AnythingMatcher test suite", std::move( ResultPolicy ) };

		AnythingMatcherTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "DoesMatch() always matches", []( max::Testing::Test< max::Testing::CoutResultPolicy > & /*CurrentTest*/, max::Testing::CoutResultPolicy const & /*ResultPolicy*/ ) {
			constexpr auto anything_matcher = max::Containers::StateMachine::AnythingMatcher<uint32_t>{};

			static_assert( anything_matcher.DoesMatch(uint32_t{1}), "DoesMatch() should match all values" );
			}
		} );

		AnythingMatcherTestSuite.RunTests();
	}

} // namespace maxStateMachine