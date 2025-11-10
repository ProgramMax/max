// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <utility>

namespace max {
namespace Containers {
namespace StateMachine {

	template<typename T>
	constexpr EnumValue<T>::EnumValue(T value, std::string_view representation) noexcept
		: value_(std::move(value))
		, representation_(std::move(representation))
	{}

	template<typename T>
	constexpr EnumMatcher<T>::EnumMatcher(std::vector<EnumValue<T>> values) noexcept
		: values_(std::move(values))
	{}

} // namespace StateMachine
} // namespace Containers
} // namespace max