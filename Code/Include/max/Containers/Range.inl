#include <max/Containers/Range.hpp>
#include <algorithm>

namespace max
{
namespace Containers
{

	template< typename T >
	Range< T >::Range( const T Minimum, const T Maximum ) MAX_DOES_NOT_THROW
		: Minimum( Minimum )
		, Maximum( Maximum )
	{
	}

	template< typename T >
	Range< T > MakeRange( const T Value1, const T Value2 ) MAX_DOES_NOT_THROW
	{
		const T Minimum = std::min( Value1, Value2 );
		const T Maximum = std::max( Value1, Value2 );

		return Range< T >{ Minimum, Maximum };
	}

} // namespaxe Containers
} // namespace max