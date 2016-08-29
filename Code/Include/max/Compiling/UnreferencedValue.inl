// Copyright 2015, Chris Blume
// All rights reserved.

namespace max
{
namespace Compiling
{

	template< typename T >
	void UnreferencedValue( const T & Value ) MAX_DOES_NOT_THROW
	{
		(void)Value; // This should get optimized out
	}

} // namespace Compiling
} // namespace max