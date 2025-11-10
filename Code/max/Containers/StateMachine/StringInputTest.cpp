// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Containers/StateMachine/StringInputTest.hpp>

#include <utility>

#include <max/Containers/StateMachine/StringInput.hpp>

#include <max/Testing/CoutResultPolicy.hpp>
#include <max/Testing/TestSuite.hpp>

namespace maxStateMachine {

	void RunStringInputTestSuite() noexcept {

		max::Testing::CoutResultPolicy ResultPolicy;
		auto StringInputTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Containers::StateMathinc::StringInput test suite", std::move( ResultPolicy ) };

		StringInputTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "constructor sets members", []( max::Testing::Test< max::Testing::CoutResultPolicy > & /*CurrentTest*/, max::Testing::CoutResultPolicy const & /*ResultPolicy*/ ) {
			constexpr auto string_input = max::Containers::StateMachine::StringInput{std::string_view{"test"}};

			static_assert( string_input.value_ == "test", "constructor should set value" );
			}
		} );

		StringInputTestSuite.RunTests();
	}

} // namespace maxStateMachine