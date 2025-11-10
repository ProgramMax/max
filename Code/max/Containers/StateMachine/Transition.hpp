// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_STATEMACHINE_TRANSITION_HPP
#define MAX_CONTAINERS_STATEMACHINE_TRANSITION_HPP

#include <optional>
#include <utility>

namespace max {
namespace Containers {
namespace StateMachine {

	template<typename MatcherType, typename CallbackType>
	class Transition {
	public:

		constexpr explicit Transition(MatcherType matcher, CallbackType callback) noexcept
			: matcher_(std::move(matcher))
			, callback_(std::move(callback))
		{}

		template<typename T>
		constexpr std::optional<size_t> AttemptTransition(const T& input) noexcept {
			if (matcher_.DoesMatch(input)) {
				return callback_(std::move(input));
			}
			return std::nullopt;
		}

		MatcherType matcher_;
		CallbackType callback_;

	};

} // namespace StateMachine
} // namespace Containers
} // namespace max

#endif // #ifndef MAX_CONTAINERS_STATEMACHINE_TRANSITION_HPP