// Copyright 2021, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_SLOTMAP_HPP
#define MAX_CONTAINERS_SLOTMAP_HPP

#include <algorithm>
#include <concepts>
#include <utility>
#include <vector>

#include <max/Compiling/CurrentVersionNamespace.hpp>
#include <max/Compiling/AliasingOptimizations.hpp>


namespace max
{
MAX_CURRENT_VERSION_NAMESPACE_BEGIN(v0)
{
namespace Containers
{

	// SlotMap is a container that provides a stable handle to an element that was inserted.
	// 
	// Insertion: O(1)*
	// Access:    O(1)
	// Removal:   O(1)
	// *Unless the BackingType requires reallocation. Then it is O(1) amortized.
	template<typename T, std::integral HandleType = size_t, template <typename T2> typename BackingType = std::vector>
	class SlotMap {
	public:



		// Required to satisfy the C++ "Container" requirements
		typedef       T   value_type;
		typedef       T&  reference;
		typedef const T&  const_reference;
		typedef BackingType<T>::iterator         iterator;
		typedef BackingType<T>::const_iterator   const_iterator;
		typedef BackingType<T>::difference_type  difference_type;
		typedef BackingType<T>::size_type        size_type;



		HandleType push_back(T element) noexcept;

		template<class ...Args>
		HandleType emplace_back(Args&&... args) noexcept;

		reference operator[](HandleType handle) noexcept;
		const_reference operator[](HandleType handle) const noexcept;

		void remove(HandleType handle) noexcept;
		void pop_back() noexcept;



		// Required to satisfy the C++ "Container" requirements
		iterator       begin() noexcept;
		const_iterator begin() const noexcept;
		const_iterator cbegin() const noexcept;
		iterator       end() noexcept;
		const_iterator end() const noexcept;
		const_iterator cend() noexcept;

		size_type size() const noexcept;
		constexpr size_type max_size() const noexcept;



	private:

		// The indices are stable and act as handles.
		BackingType<HandleType> indices_;
		// If we wanted to prevent a user accidently reusing a handle from an object they removed,
		// |indices_| could be a tuple of HandleType and generation counter.
		// Increment the generation every time an element is removed and compare against it when accessing.
		// However, this is designed for performance and will assume the programmer did not make a mistake.

		// |data_| and |reverse_indices_| are parallel. The nth element in one corresponds to the nth element in the other.
		// This means once we have an element's index into |data_|, we can use that same index into |reverse_indices_| to find
		// the element in |indices_| that points here.
		BackingType<T> data_;
		BackingType<HandleType> reverse_indices_;

		void remove_by_index(size_t index) noexcept;

		friend bool operator ==(const SlotMap<T, HandleType, BackingType>& lhs, const SlotMap<T, HandleType, BackingType>& rhs) noexcept;
		friend bool operator !=(const SlotMap<T, HandleType, BackingType>& lhs, const SlotMap<T, HandleType, BackingType>& rhs) noexcept;
		friend void swap(SlotMap<T, HandleType, BackingType>& lhs, SlotMap<T, HandleType, BackingType>& rhs) noexcept;

	};

} // namespace Containers
} // MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
MAX_CURRENT_VERSION_NAMESPACE_END(v0)
} // namespace max

#include "SlotMap.inl"

#endif // #ifndef MAX_CONTAINERS_SLOTMAP_HPP