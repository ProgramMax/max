// Copyright 2017, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_BITS16_HPP
#define MAX_CONTAINERS_BITS16_HPP

// Documentaiton: ../../../../Documentation/max/v0/Containers/Bits16.md

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

	class Bits16
	{
	public:

		// Documentation: ../../../../Documentation/max/v0/Containers/Bits_ctor.md
		MAX_SEMI_PURE_DECLARATION( explicit constexpr Bits16( const uint16_t Value ) MAX_DOES_NOT_THROW );
		MAX_SEMI_PURE_DECLARATION( explicit constexpr Bits16( const  int16_t Value ) MAX_DOES_NOT_THROW );

		MAX_SEMI_PURE_DECLARATION( constexpr uint8_t BitScanForward() const MAX_DOES_NOT_THROW );

		MAX_SEMI_PURE_DECLARATION( constexpr Bits16 SwapEndian() const MAX_DOES_NOT_THROW );

		MAX_SEMI_PURE_DECLARATION( constexpr bool operator ==( const Bits16 & rhs ) const MAX_DOES_NOT_THROW );

		uint16_t Value;

	};

} // namespace Containers
} // MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
MAX_CURRENT_VERSION_NAMESPACE_END( v0 )
} // namespace max

MAX_SEMI_PURE_DECLARATION( constexpr max::Containers::Bits16 operator"" _b16( const unsigned long long int Value ) MAX_DOES_NOT_THROW );

#include "Bits16.inl"

#endif // #ifndef MAX_CONTAINERS_BITS16_HPP