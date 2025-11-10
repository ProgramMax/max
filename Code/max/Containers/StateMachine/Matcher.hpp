// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_STATEMACHINE_MATCHER_HPP
#define MAX_CONTAINERS_STATEMACHINE_MATCHER_HPP

namespace max {
namespace Containers {
namespace StateMachine {

	// TODO: Make Matcher concept

	template<typename MatcherType, typename InputType>
	bool DoesMatch(const MatcherType& matcher_type, const InputType& input_type) noexcept {
		return matcher_type.DoesMatch(input_type.value_);
	}

} // namespace StateMachine
} // namespace Containers
} // namespace max

#endif // #ifndef MAX_CONTAINERS_STATEMACHINE_MATCHER_HPP