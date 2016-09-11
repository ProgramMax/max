// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_ALGORITHMS_ISBETWEEN_HPP
#define MAX_ALGORITHMS_ISBETWEEN_HPP


#include <max/Compiling/CurrentVersionNamespace.hpp>
#include <max/Compiling/AliasingOptimizations.hpp>
#include <max/Containers/Range.hpp>
#include <max/Compiling/ThrowSpecification.hpp>

namespace max
{	
MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
{
namespace Algorithms
{

	// Documentation: ../../../../Documentation/max/v0/Algorithms/IsBetween.md
	template< typename T >
	MAX_SEMI_PURE( constexpr bool IsBetween( const T Value, const max::Containers::Range< T > & Range ) MAX_DOES_NOT_THROW );

} // namespace Algorithms
} // MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
MAX_CURRENT_VERSION_NAMESPACE_END( v0 )
} // namespace max

#include <max/Algorithms/IsBetween.inl>

#endif // #ifndef MAX_ALGORITHMS_ISBETWEEN_HPP