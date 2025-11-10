// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_STATEMACHINE_ANYTHINGMATCHER_HPP
#define MAX_CONTAINERS_STATEMACHINE_ANYTHINGMATCHER_HPP

namespace max {
namespace Containers {
namespace StateMachine {

	template<typename T>
	class AnythingMatcher {
	public:

		using parameter_type = T;

		constexpr bool DoesMatch(const T& input) const noexcept;

		T value_ = {}; // TODO: I don't want this. I couldn't get parameter_type to work for me.

	};

} // namespace StateMachine
} // namespace Containers
} // namespace max

#include <max/Containers/StateMachine/AnythingMatcher.inl>

#endif // #ifndef MAXSTATEMACHINE_ANYTHINGMATCHER_HPP