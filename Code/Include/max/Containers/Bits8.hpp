// Copyright 2017, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_BITS_HPP
#define MAX_CONTAINERS_BITS_HPP

// Documentaiton: ../../../../docs/max/v0/Containers/Bits.md

#include <max/Compiling/CurrentVersionNamespace.hpp>
#include <max/Compiling/AliasingOptimizations.hpp>
#include <max/Compiling/ThrowSpecification.hpp>
#include <cstdint>

namespace max
{
MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
{
namespace Containers
{

	class Bits8
	{
	public:

		// Documentation: ../../../../docs/max/v0/Containers/Bits_ctor.md
		MAX_SEMI_PURE_DECLARATION( explicit constexpr Bits8( const uint8_t Value ) MAX_DOES_NOT_THROW );
		MAX_SEMI_PURE_DECLARATION( explicit constexpr Bits8( const  int8_t  Value ) MAX_DOES_NOT_THROW );

		MAX_SEMI_PURE_DECLARATION( constexpr uint8_t BitScanForward() const MAX_DOES_NOT_THROW );

		uint8_t Value;

	};

} // namespace Containers
} // MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
MAX_CURRENT_VERSION_NAMESPACE_END( v0 )
} // namespace max

MAX_SEMI_PURE_DECLARATION( constexpr max::Containers::Bits8  operator"" _b8(  const unsigned long long int Value ) MAX_DOES_NOT_THROW );

#include "Bits8.inl"

#endif // #ifndef MAX_CONTAINERS_BITS_HPP
