// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_STATEMACHINE_STATEMACHINE_HPP
#define MAX_CONTAINERS_STATEMACHINE_STATEMACHINE_HPP

#include <tuple>
#include <utility>

namespace max {
namespace Containers {
namespace StateMachine {

	template<typename NodeIndexType, typename... NodeTypes>
	class StateMachine {
	public:

		constexpr explicit StateMachine(NodeIndexType starting_node, std::tuple<NodeTypes...> nodes) noexcept
			: current_node_index_(std::move(starting_node))
			, nodes_(std::move(nodes))
		{}

		template<typename T>
		constexpr void AttemptTransition(T input) noexcept {
			auto transition_happened = false;
			auto attempt_transition = [this, &transition_happened, &input](auto&& arg) {
				if (!transition_happened && current_node_index_ == arg.this_node_) {
					auto possible_new_node_index = arg.AttemptTransition(input);
					if (possible_new_node_index) {
						transition_happened = true;
						current_node_index_ = std::move(possible_new_node_index.value());
					}
				}
			};

			std::apply([&attempt_transition](auto&&... args) {
				((attempt_transition(args)), ...);
			}, nodes_);
		}

		NodeIndexType current_node_index_;
		std::tuple<NodeTypes...> nodes_;

	};

} // namespace StateMachine
} // namespace Containers
} // namespace max

#endif // #ifndef MAX_CONTAINERS_STATEMACHINE_STATEMACHINE_HPP