// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Containers/StateMachine/TransitionTest.hpp>

#include <utility>

#include <max/Containers/StateMachine/Transition.hpp>
#include <max/Containers/StateMachine/RangeMatcher.hpp>

#include <max/Testing/CoutResultPolicy.hpp>
#include <max/Testing/TestSuite.hpp>

#include <cstdint>

namespace maxAutomatedTests {
namespace Containers {
namespace StateMachine {

	void RunTransitionTestSuite() noexcept {

		max::Testing::CoutResultPolicy ResultPolicy;
		auto TransitionTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Containers::StateMathinc::Transition test suite", std::move( ResultPolicy ) };

		TransitionTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "A non-match does not transition", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			bool callback_called = false;
			auto callback = [&callback_called](const uint32_t& /*input*/) {
				callback_called = true;
				return size_t{2};
			};

			auto transition = max::Containers::StateMachine::Transition{
				max::Containers::StateMachine::RangeMatcher<uint32_t>{0, 1}, std::move(callback)
			};

			auto new_node_index = transition.AttemptTransition<size_t>(uint32_t{2});

			// TODO: This should be constexpr, right??
			//static_assert( !callback_called, "" );
			CurrentTest.MAX_TESTING_ASSERT( !callback_called );
			CurrentTest.MAX_TESTING_ASSERT( !new_node_index );
			}
		} );

		TransitionTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "A match transitions", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			bool callback_called = false;
			auto callback = [&callback_called](const uint32_t& /*input*/) {
				callback_called = true;
				return size_t{2};
			};

			auto transition = max::Containers::StateMachine::Transition{
				max::Containers::StateMachine::RangeMatcher<uint32_t>{0, 1}, std::move(callback)
			};

			auto new_node_index = transition.AttemptTransition<size_t>(uint32_t{1});

			CurrentTest.MAX_TESTING_ASSERT( callback_called );
			CurrentTest.MAX_TESTING_ASSERT( new_node_index == size_t{2} );
			}
		} );

		TransitionTestSuite.RunTests();
	}

} // namespace StateMachine
} // namespace Containers
} // namespace max