// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Containers/StateMachine/StringMatcherTest.hpp>

#include <max/Containers/StateMachine/StringInput.hpp>
#include <max/Containers/StateMachine/StringMatcher.hpp>

#include <max/Testing/CoutResultPolicy.hpp>
#include <max/Testing/TestSuite.hpp>

namespace maxStateMachine {

	void RunStringMatcherTestSuite() noexcept {

		max::Testing::CoutResultPolicy ResultPolicy;
		auto StringMatcherTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Containers::StateMathinc::StringMatcher test suite", std::move( ResultPolicy ) };

		StringMatcherTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "constructor initializes members", []( max::Testing::Test< max::Testing::CoutResultPolicy > & /*CurrentTest*/, max::Testing::CoutResultPolicy const & /*ResultPolicy*/ ) {
			constexpr auto string_matcher = max::Containers::StateMachine::StringMatcher{std::string_view{"test"}};

			static_assert( string_matcher.value_ == "test", "constructor should set value" );
			}
		} );

		StringMatcherTestSuite.AddTest( max::Testing::Test< max::Testing::CoutResultPolicy >{ "DoesMatch() matches value", []( max::Testing::Test< max::Testing::CoutResultPolicy > & /*CurrentTest*/, max::Testing::CoutResultPolicy const & /*ResultPolicy*/ ) {
			constexpr auto string_matcher = max::Containers::StateMachine::StringMatcher{std::string_view{"test"}};

			static_assert( !string_matcher.DoesMatch("not test"), "DoesMatch() returns false on non-match" );
			static_assert(  string_matcher.DoesMatch("test"), "DoesMatch() returns true on match" );
			}
		} );

		StringMatcherTestSuite.RunTests();
	}

} // namespace maxStateMachine