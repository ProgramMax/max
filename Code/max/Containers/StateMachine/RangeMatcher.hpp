// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_STATEMACHINE_RANGEMATCHER_HPP
#define MAX_CONTAINERS_STATEMACHINE_RANGEMATCHER_HPP

namespace max {
namespace Containers {
namespace StateMachine {

	template<typename T>
	class RangeMatcher {
	public:

		using parameter_type = T;

		constexpr explicit RangeMatcher(T lower_bound, T upper_bound) noexcept;

		constexpr bool DoesMatch(const T& input) const noexcept;

		T value_ = {}; // TODO: I don't want this. I couldn't get parameter_type to work for me.
		T lower_bound_;
		T upper_bound_;

	};

} // namespace StateMachine
} // namespace Containers
} // namespace max

#include <max/Containers/StateMachine/RangeMatcher.inl>

#endif // #ifndef MAX_CONTAINERS_STATEMACHINE_RANGEMATCHER_HPP