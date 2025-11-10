// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_STATEMACHINE_NUMBERINPUT_HPP
#define MAX_CONTAINERS_STATEMACHINE_NUMBERINPUT_HPP

namespace max {
namespace Containers {
namespace StateMachine {

	template<typename T>
	class NumberInput {
	public:

		constexpr explicit NumberInput(T value) noexcept;

		T value_;

	};

} // namespace StateMachine
} // namespace Containers
} // namespace max

#include <max/Containers/StateMachine/NumberInput.inl>

#endif // #ifndef MAX_CONTAINERS_STATEMACHINE_NUMBERINPUT_HPP