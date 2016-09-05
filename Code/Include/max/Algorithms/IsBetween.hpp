// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_ALGORITHMS_ISBETWEEN_HPP
#define MAX_ALGORITHMS_ISBETWEEN_HPP

#include <max/Containers/Range.hpp>
#include <max/Compiling/ThrowSpecification.hpp>

namespace max
{
namespace Algorithms
{

	template< typename T >
	constexpr bool IsBetween( const T Value, const max::Containers::Range< T > & Range ) MAX_DOES_NOT_THROW;

} // namespace Algorithms
} // namespace max

#include <max/Algorithms/IsBetween.inl>

#endif // #ifndef MAX_ALGORITHMS_ISBETWEEN_HPP