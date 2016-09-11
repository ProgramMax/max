// Copyright 2016, Chris Blume
// All rights reserved.

#include <max/Hardware/CPU/CPUIDSubleafArgumentsAndResult.hpp>
#include <utility>

namespace max
{
namespace CPU
{

	
	CPUIDSubleafArgumentsAndResult::CPUIDSubleafArgumentsAndResult( const uint32_t        Leaf,
	                                                                const uint32_t        Subleaf,
	                                                                CPUIDSubleafResult && Result ) noexcept
		: Leaf(    Leaf                )
		, Subleaf( Subleaf             )
		, Result(  std::move( Result ) )
	{
	}

} // namespace CPU
} // namespace max