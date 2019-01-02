// Copyright 2017, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONTAINERS_BITS32_HPP
#define MAX_CONTAINERS_BITS32_HPP

// Documentaiton: ../../../../docs/max/v0/Containers/Bits32.md

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

	class Bits32
	{
	public:

		// Documentation: ../../../../docs/max/v0/Containers/Bits_ctor.md
		MAX_SEMI_PURE_DECLARATION( explicit constexpr Bits32( const uint32_t Value ) MAX_DOES_NOT_THROW );
		MAX_SEMI_PURE_DECLARATION( explicit constexpr Bits32( const  int32_t Value ) MAX_DOES_NOT_THROW );

		MAX_SEMI_PURE_DECLARATION( constexpr uint8_t BitScanForward() const MAX_DOES_NOT_THROW );

		MAX_SEMI_PURE_DECLARATION( constexpr Bits32 SwapEndian() const MAX_DOES_NOT_THROW );

		MAX_SEMI_PURE_DECLARATION( constexpr bool operator ==( const Bits32 & rhs ) const MAX_DOES_NOT_THROW );

		uint32_t Value;

	};

} // namespace Containers
} // MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
MAX_CURRENT_VERSION_NAMESPACE_END( v0 )
} // namespace max

MAX_SEMI_PURE_DECLARATION( constexpr max::Containers::Bits32 operator"" _b32( const unsigned long long int Value ) MAX_DOES_NOT_THROW );

#include "Bits32.inl"

#endif // #ifndef MAX_CONTAINERS_BITS16_HPP
