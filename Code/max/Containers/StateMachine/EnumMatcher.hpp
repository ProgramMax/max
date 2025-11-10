// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_STATEMACHINE_ENUMMATCHER_HPP
#define MAX_CONTAINERS_STATEMACHINE_ENUMMATCHER_HPP

#include <string_view>
#include <vector>

namespace max {
namespace Containers {
namespace StateMachine {

	template<typename T>
	class EnumValue {
	public:

		constexpr explicit EnumValue(T value, std::string_view representation) noexcept;

		T value_;
		std::string_view representation_;

	};

	template<typename T>
	class EnumMatcher {
	public:

		constexpr explicit EnumMatcher(std::vector<EnumValue<T>> values) noexcept;

		//constexpr bool DoesMatch(const Input& input) noexcept;

		std::vector<EnumValue<T>> values_;

	};

} // namespace StateMachine
} // namespace Containers
} // namespace max

#include <max/Containers/StateMachine/EnumMatcher.inl>

#endif // #ifndef MAX_CONTAINERS_STATEMACHINE_ENUMMATCHER_HPP