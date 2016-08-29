// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_COMPILING_UNREFERENCEDVALUE_HPP
#define MAX_COMPILING_UNREFERENCEDVALUE_HPP

#include <max/Compiling/ThrowSpecification.hpp>

namespace max
{
namespace Compiling
{

	template< typename T >
	void UnreferencedValue( const T & Value ) MAX_DOES_NOT_THROW;

} // namespace Compiling
} // namespace max

#include <max/Compiling/UnreferencedValue.inl>

#endif // #ifndef MAX_COMPILING_UNREFERENCEDVALUE_HPP