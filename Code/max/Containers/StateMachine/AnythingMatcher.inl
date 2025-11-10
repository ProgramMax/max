// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

namespace max {
namespace Containers {
namespace StateMachine {

	template<typename T>
	constexpr bool AnythingMatcher<T>::DoesMatch(const T& /*input*/) const noexcept {
		return true;
	}

} // namespace StateMachine
} // namespace Containers
} // namespace max