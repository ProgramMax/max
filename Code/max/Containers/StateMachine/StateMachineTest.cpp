// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Containers/StateMachine/StateMachineTest.hpp>

#include <utility>

#include <max/Containers/StateMachine/Node.hpp>
#include <max/Containers/StateMachine/Transition.hpp>
#include <max/Containers/StateMachine/RangeMatcher.hpp>
#include <max/Containers/StateMachine/StateMachine.hpp>
#include <max/Containers/StateMachine/StringMatcher.hpp>

#include <max/Testing/CoutResultPolicy.hpp>
#include <max/Testing/TestSuite.hpp>

namespace max {
namespace Containers {
namespace StateMachine {

	void RunStateMachineTestSuite() noexcept {

		max::Testing::CoutResultPolicy ResultPolicy;
		auto StateMachineTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Containers::StateMathinc::StateMachine test suite", std::move( ResultPolicy ) };

		StateMachineTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "test name", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			bool range_callback_called = false;
			auto range_callback = [&range_callback_called](const uint32_t& /*input*/) {
				range_callback_called = true;
				return size_t{1};
			};
			auto range_transition = max::Containers::StateMachine::Transition{max::Containers::StateMachine::RangeMatcher{0, 1}, std::move(range_callback)};
			auto node_0 = max::Containers::StateMachine::MakeNode(std::move(range_transition));

			bool string_callback_called = false;
			auto string_callback = [&string_callback_called](const std::string_view& /*input*/) {
				string_callback_called = true;
				return size_t{0};
			};
			auto string_transition = max::Containers::StateMachine::Transition{max::Containers::StateMachine::StringMatcher{std::string_view{"test"}}, std::move(string_callback)};
			auto node_1 = max::Containers::StateMachine::MakeNode(std::move(string_transition));

			auto state_machine = max::Containers::StateMachine::StateMachine{std::make_tuple(std::move(node_0), std::move(node_1))};

			state_machine.AttemptTransition(uint32_t{1});

			CurrentTest.MAX_TESTING_ASSERT( state_machine.current_node_index_ == 1 );
			CurrentTest.MAX_TESTING_ASSERT( range_callback_called );
			CurrentTest.MAX_TESTING_ASSERT( !string_callback_called );

			// reset
			range_callback_called = false;

			state_machine.AttemptTransition(std::string_view{"test"});

			CurrentTest.MAX_TESTING_ASSERT( state_machine.current_node_index_ == 0 );
			CurrentTest.MAX_TESTING_ASSERT( !range_callback_called );
			CurrentTest.MAX_TESTING_ASSERT( string_callback_called );

		}
		} );

		StateMachineTestSuite.RunTests();
	}

} // namespace StateMachine
} // namespace Containers
} // namespace max