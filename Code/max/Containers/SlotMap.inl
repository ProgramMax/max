// Copyright 2021, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <algorithm>
#include <concepts>
#include <utility>
#include <vector>

namespace max
{
namespace v0
{
namespace Containers
{

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	HandleType SlotMap<T, HandleType, BackingType>::push_back(T element) noexcept {
		const auto data_size = data_.size();
		data_.push_back(std::move(element));

		const auto reverse_indices_size = reverse_indices_.size();
		if (data_size == reverse_indices_size) {
			// No elements had previously been removed, leaving gaps.
			// This means we cannot reuse the handles and indices we left in place.
			// We must add new ones.
			auto new_handle = reverse_indices_size;
			indices_.push_back(new_handle);
			reverse_indices_.push_back(new_handle);
			return new_handle;
		}
		else {
			// We previously left the elements in |indices_| and |reverse_indices_|.
			// That means we can just reuse those handles.
			return reverse_indices_[data_size];
		}
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	template<class ...Args>
	HandleType SlotMap<T, HandleType, BackingType>::emplace_back(Args&&... args) noexcept {
		// TODO: constructing the element then moving it to push_back() really defeats the purpose of an emplace_back.
		// Do this correctly.
		return push_back(T{ std::forward<Args>(args)... });
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	typename SlotMap<T, HandleType, BackingType>::reference SlotMap<T, HandleType, BackingType>::operator[](HandleType handle) noexcept {
		// Assumes |handle| is within range.

		const auto index = indices_[handle];
		return data_[index];
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	typename SlotMap<T, HandleType, BackingType>::const_reference SlotMap<T, HandleType, BackingType>::operator[](HandleType handle) const noexcept {
		// Assumes |handle| is within range.

		const auto index = indices_[handle];
		return data_[index];
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	void SlotMap<T, HandleType, BackingType>::remove(HandleType handle) noexcept {
		remove_by_index(indices_[handle]);
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	void SlotMap<T, HandleType, BackingType>::pop_back() noexcept {
		remove_by_index(data_.size() - 1);
	}



	// Required to satisfy the C++ "Container" requirements
	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	typename SlotMap<T, HandleType, BackingType>::iterator SlotMap<T, HandleType, BackingType>::begin() noexcept {
		return data_.begin();
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	typename SlotMap<T, HandleType, BackingType>::const_iterator SlotMap<T, HandleType, BackingType>::begin() const noexcept {
		return data_.begin();
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	typename SlotMap<T, HandleType, BackingType>::const_iterator SlotMap<T, HandleType, BackingType>::cbegin() const noexcept {
		return data_.begin();
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	typename SlotMap<T, HandleType, BackingType>::iterator SlotMap<T, HandleType, BackingType>::end() noexcept {
		return data_.end();
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	typename SlotMap<T, HandleType, BackingType>::const_iterator SlotMap<T, HandleType, BackingType>::end() const noexcept {
		return data_.end();
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	typename SlotMap<T, HandleType, BackingType>::const_iterator SlotMap<T, HandleType, BackingType>::cend() noexcept {
		return data_.end();
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	typename SlotMap<T, HandleType, BackingType>::size_type SlotMap<T, HandleType, BackingType>::size() const noexcept {
		return data_.size();
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	constexpr typename SlotMap<T, HandleType, BackingType>::size_type SlotMap<T, HandleType, BackingType>::max_size() const noexcept {
		return data_.max_size();
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	void SlotMap<T, HandleType, BackingType>::remove_by_index(size_t index) noexcept {
		// Removing an element in the middle of a vector will cause all elements after it to shift over.
		// Removing the final element does not have this effect.

		// In order to remove any given element, we first swap it with the element in the final spot.
		// Then we can remove it and update indices.

		using std::swap;

		auto data_size = data_.size() - 1; // .size() tells us the index past the end.

		swap(data_[index], data_[data_size]);
		swap(reverse_indices_[index], reverse_indices_[data_size]); // We only resize |data_|, so use it's size--not |reverse_indices_|'s.
		data_.resize(data_size);

		// The catch is we only know one index, the parameter.
		// We don't know which element in |indices_| corresponds to the final element in |data_|.
		// To solve that problem, the |reverse_indices_| vector is parallel to the |data_| vector.
		// An index into one is also an index into the other.
		// We have the index of the final element in |data_|, so we can use it in |reverse_indices_| to get the corresponding entry in |indices_|.
		auto reverse_index = reverse_indices_[data_size];
		indices_[reverse_index] = data_size;

		// We also update the reverse index of the that was removed.
		// This is because it will be reused later when more elements are appended.
		reverse_index = reverse_indices_[index];
		indices_[reverse_index] = index;
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	bool operator ==(const SlotMap<T, HandleType, BackingType>& lhs, const SlotMap<T, HandleType, BackingType>& rhs) noexcept {
		return lhs.indices_ == rhs.indices_ &&
			lhs.data_ == rhs.data_ &&
			lhs.reverse_indices_ == rhs.reverse_indices_;
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	bool operator !=(const SlotMap<T, HandleType, BackingType>& lhs, const SlotMap<T, HandleType, BackingType>& rhs) noexcept {
		return !(lhs == rhs);
	}

	template<typename T, std::integral HandleType, template <typename T2> typename BackingType>
	void swap(SlotMap<T, HandleType, BackingType>& lhs, SlotMap<T, HandleType, BackingType>& rhs) noexcept {
		using std::swap;

		swap(lhs.indices_, rhs.indices_);
		swap(lhs.data_, rhs.data_);
		swap(lhs.reverse_indices_, rhs.reverse_indices_);
	}

} // namespace Containers
} // namespace v0
} // namespace max
