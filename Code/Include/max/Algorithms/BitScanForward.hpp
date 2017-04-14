// Copyright 2017, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_ALGORITHMS_BITSCANFORWARD_HPP
#define MAX_ALGORITHMS_BITSCANFORWARD_HPP

// Documentation: ../../../../Documentation/max/v0/Algorithms/BitScanForward.md

#include <max/Compiling/CurrentVersionNamespace.hpp>
#include <max/Compiling/AliasingOptimizations.hpp>
#include <max/Containers/Range.hpp>
#include <max/Compiling/ThrowSpecification.hpp>
#include <cstdint>

namespace max
{	
MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
{
namespace Algorithms
{
	
	MAX_PURE_DECLARATION( constexpr uint8_t BitScanForward( const uint8_t Mask ) MAX_DOES_NOT_THROW );

} // namespace Algorithms
} // MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
MAX_CURRENT_VERSION_NAMESPACE_END( v0 )
} // namespace max

#include <max/Algorithms/BitScanForward.inl>

#endif // #ifndef MAX_ALGORITHMS_BITSCANFORWARD_HPP