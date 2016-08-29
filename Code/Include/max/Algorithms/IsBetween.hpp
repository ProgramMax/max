// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_ALGORITHMS_ISBETWEEN_HPP
#define MAX_ALGORITHMS_ISBETWEEN_HPP

#include <max/Compiling/ThrowSpecification.hpp>

namespace max
{
namespace Algorithms
{

	template< typename T >
	bool IsBetween( const T Value, const T Minimum, const T Maximum ) MAX_DOES_NOT_THROW;

	template< >
	bool IsBetween( const char Value, const char Minimum, const char Maximum ) MAX_DOES_NOT_THROW;

} // namespace Algorithms
} // namespace max

#include <max/Algorithms/IsBetween.inl>

#endif // #ifndef MAX_ALGORITHMS_ISBETWEEN_HPP