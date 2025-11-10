// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Containers/StateMachine/NumberInputTest.hpp>

#include <utility>

#include <max/Containers/StateMachine/NumberInput.hpp>

#include <max/Testing/CoutResultPolicy.hpp>
#include <max/Testing/TestSuite.hpp>

namespace max {
namespace Containers {
namespace StateMachine {

	void RunNumberInputTestSuite() noexcept {

		max::Testing::CoutResultPolicy ResultPolicy;
		auto NumberInputTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Containers::StateMathinc::NumberInput test suite", std::move( ResultPolicy ) };

		NumberInputTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "constructor sets members", []( max::Testing::Test< max::Testing::CoutResultPolicy > & /*CurrentTest*/, max::Testing::CoutResultPolicy const & /*ResultPolicy*/ ) {
			constexpr auto number_input = max::Containers::StateMachine::NumberInput{1};

			static_assert( number_input.value_ == 1, "constructor should set the value" );
			}
		} );

		NumberInputTestSuite.RunTests();
	}

} // namespace StateMachine
} // namespace Containers
} // namespace max