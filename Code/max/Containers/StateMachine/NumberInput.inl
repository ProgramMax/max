// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <utility>

namespace max {
namespace Containers {
namespace StateMachine {

	template<typename T>
	constexpr NumberInput<T>::NumberInput(T value) noexcept
		: value_(std::move(value))
	{}

} // namespace StateMachine
} // namespace Containers
} // namespace max