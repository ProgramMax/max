// Copyright 2015, Chris Blume
// All rights reserved.

namespace max
{
namespace Algorithms
{

	template< typename T >
	inline bool IsBetween( const T Value, const T Minimum, const T Maximum ) MAX_DOES_NOT_THROW
	{
		return Minimum < Value && Value < Maximum;
	}

	template<>
	inline bool IsBetween( const char Value, const char Minimum, const char Maximum ) MAX_DOES_NOT_THROW
	{
		unsigned char Difference = Maximum - Minimum;
		unsigned char ShiftedValue = Maximum - Value;

		return ShiftedValue < Difference;
	}

} // namespace Algorithms
} // namespace max