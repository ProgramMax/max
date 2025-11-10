// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_STATEMACHINE_STRINGMATCHER_HPP
#define MAX_CONTAINERS_STATEMACHINE_STRINGMATCHER_HPP

#include <string_view>
#include <utility>

namespace max {
namespace Containers {
namespace StateMachine {

	class StringMatcher {
	public:

		using parameter_type = std::string_view;

		constexpr explicit StringMatcher(std::string_view value) noexcept
			: value_(std::move(value))
		{}

		constexpr bool DoesMatch(const std::string_view& input) const noexcept {
			return value_ == input;
		}

		std::string_view value_;

	};

} // namespace StateMachine
} // namespace Containers
} // namespace max

#endif // #ifndef MAX_CONTAINERS_STATEMACHINE_STRINGMATCHER_HPP