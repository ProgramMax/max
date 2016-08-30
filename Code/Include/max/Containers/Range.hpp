#ifndef MAX_CONTAINERS_RANGE_HPP
#define MAX_CONTAINERS_RANGE_HPP

#include <max/Compiling/ThrowSpecification.hpp>

namespace max
{
namespace Containers
{

	template< typename T >
	class Range
	{
	public:

		Range( const T Minimum, const T Maximum ) MAX_DOES_NOT_THROW;

		T Minimum;
		T Maximum;

	};

	template< typename T >
	Range< T > MakeRange( const T Value1, const T Value2 ) MAX_DOES_NOT_THROW;

} // namespace Containers
} // namespace max

#include "Range.inl"

#endif // #ifndef MAX_CONTAINERS_RANGE_HPP