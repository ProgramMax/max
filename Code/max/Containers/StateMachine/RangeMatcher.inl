// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <utility>

namespace max {
namespace Containers {
namespace StateMachine {

	template<typename T>
	constexpr RangeMatcher<T>::RangeMatcher(T lower_bound, T upper_bound) noexcept
		: lower_bound_(std::move(lower_bound))
		, upper_bound_(std::move(upper_bound))
	{}

	template<typename T>
	constexpr bool RangeMatcher<T>::DoesMatch(const T& input) const noexcept {
		return lower_bound_ <= input && input <= upper_bound_;
	}

} // namespace StateMachine
} // namespace Containers
} // namespace max