// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Containers/StateMachine/NodeTest.hpp>

#include <utility>

#include <max/Containers/StateMachine/Node.hpp>
#include <max/Containers/StateMachine/Transition.hpp>
#include <max/Containers/StateMachine/RangeMatcher.hpp>
#include <max/Containers/StateMachine/StringMatcher.hpp>

#include <max/Testing/CoutResultPolicy.hpp>
#include <max/Testing/TestSuite.hpp>

namespace max {
namespace Containers {
namespace StateMachine {

	void RunNodeTestSuite() noexcept {

		max::Testing::CoutResultPolicy ResultPolicy;
		auto NodeTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Containers::StateMathinc::Node test suite", std::move( ResultPolicy ) };

		NodeTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "Node transitions match correct match", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			bool range_callback_called = false;
			auto range_callback = [&range_callback_called](const uint32_t& /*input*/) {
				range_callback_called = true;
				return size_t{2};
			};

			auto range_transition = max::Containers::StateMachine::Transition{max::Containers::StateMachine::RangeMatcher{0, 1}, std::move(range_callback)};

			bool string_callback_called = false;
			auto string_callback = [&string_callback_called](const std::string_view& /*input*/) {
				string_callback_called = true;
				return size_t{3};
			};

			auto string_transition = max::Containers::StateMachine::Transition{max::Containers::StateMachine::StringMatcher{std::string_view{"test"}}, std::move(string_callback)};

			auto node = max::Containers::StateMachine::MakeNode(std::move(range_transition), std::move(string_transition));

			auto new_node_index = node.AttemptTransition(1);

			CurrentTest.MAX_TESTING_ASSERT( new_node_index == 2 );
			CurrentTest.MAX_TESTING_ASSERT( range_callback_called );
			CurrentTest.MAX_TESTING_ASSERT( !string_callback_called );
			}
		} );

		NodeTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "Node transitions doesn't erronorously match", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			bool range_callback_called = false;
			auto range_callback = [&range_callback_called](const uint32_t& /*input*/) {
				range_callback_called = true;
				return 2;
			};

			auto range_transition = max::Containers::StateMachine::Transition{max::Containers::StateMachine::RangeMatcher{0, 1}, std::move(range_callback)};

			bool string_callback_called = false;
			auto string_callback = [&string_callback_called](const std::string_view& /*input*/) {
				string_callback_called = true;
				return 3;
			};

			auto string_transition = max::Containers::StateMachine::Transition{max::Containers::StateMachine::StringMatcher{std::string_view{"test"}}, std::move(string_callback)};

			auto node = max::Containers::StateMachine::MakeNode(std::move(range_transition), std::move(string_transition));

			auto new_node_index = node.AttemptTransition(2);

			CurrentTest.MAX_TESTING_ASSERT( !new_node_index );
			CurrentTest.MAX_TESTING_ASSERT( !range_callback_called );
			CurrentTest.MAX_TESTING_ASSERT( !string_callback_called );
			}
		} );

		NodeTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "Node transitions matches correct match (2)", []( max::Testing::Test< max::Testing::CoutResultPolicy > & CurrentTest, max::Testing::CoutResultPolicy const & ResultPolicy ) {
			bool range_callback_called = false;
			auto range_callback = [&range_callback_called](const uint32_t& /*input*/) {
				range_callback_called = true;
				return 2;
			};

			auto range_transition = max::Containers::StateMachine::Transition{max::Containers::StateMachine::RangeMatcher{0, 1}, std::move(range_callback)};

			bool string_callback_called = false;
			auto string_callback = [&string_callback_called](const std::string_view& /*input*/) {
				string_callback_called = true;
				return 3;
			};

			auto string_transition = max::Containers::StateMachine::Transition{max::Containers::StateMachine::StringMatcher{std::string_view{"test"}}, std::move(string_callback)};

			auto node = max::Containers::StateMachine::MakeNode(std::move(range_transition), std::move(string_transition));

			auto new_node_index = node.AttemptTransition(std::string_view{"test"});

			CurrentTest.MAX_TESTING_ASSERT( new_node_index == 3 );
			CurrentTest.MAX_TESTING_ASSERT( !range_callback_called );
			CurrentTest.MAX_TESTING_ASSERT( string_callback_called );
			}
		} );


		NodeTestSuite.RunTests();
	}

} // namespace StateMachine
} // namespace Containers
} // namespace max