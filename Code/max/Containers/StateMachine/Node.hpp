// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_STATEMACHINE_NODE_HPP
#define MAX_CONTAINERS_STATEMACHINE_NODE_HPP

#include <optional>
#include <tuple>
#include <type_traits>
#include <utility>

#include <max/Containers/StateMachine/Transition.hpp>

namespace max {
namespace Containers {
namespace StateMachine {

	template<typename... TransitionTypes>
	class Node {
	public:

		constexpr explicit Node(std::tuple<TransitionTypes...> outbound_transitions) noexcept
			: outbound_transitions_(std::move(outbound_transitions))
		{}

		template<typename T>
		constexpr std::optional<size_t> AttemptTransition(const T& input) noexcept {
			auto transition_happened = false;
			auto new_node_index = std::optional<size_t>{std::nullopt};

			auto attempt_transition = [&transition_happened, &new_node_index, &input](auto&& arg) {
				// TODO: I added .value_ to RangeMatcher because I couldn't get this line to work
				//if constexpr (std::is_same_v<T, decltype(arg.matcher_)::parameter_type>) {
				if constexpr (std::is_same_v<T, decltype(arg.matcher_.value_)>) {
					if (!transition_happened) {
						auto possible_new_node_index = arg.AttemptTransition(input);
						if (possible_new_node_index) {
							transition_happened = true;
							new_node_index = std::move(possible_new_node_index);
						}
					}
				}
			};

			std::apply([&attempt_transition](auto&&... args) {
				((attempt_transition(args)), ...);
			}, outbound_transitions_);

			return new_node_index;
		}

		std::tuple<TransitionTypes...> outbound_transitions_;

	};

	template<typename... TransitionTypes>
	Node<TransitionTypes...> MakeNode(TransitionTypes... outbound_transitions) noexcept {
		return Node{std::make_tuple(std::move(outbound_transitions) ...)};
	}

} // namespace StateMachine
} // namespace Containers
} // namespace max

#endif // #ifndef MAX_CONTAINERS_STATEMACHINE_NODE_HPP