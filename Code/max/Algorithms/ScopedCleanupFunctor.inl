// Copyright 2015, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

namespace max
{
namespace Algorithms
{

	template< typename FunctorType >
	ScopedCleanupFunctor< FunctorType > MakeScopedCleanupFunctor( const FunctorType & Functor ) noexcept
	{
		return ScopedCleanupFunctor< FunctorType >( Functor );
	}

	template< typename FunctorType >
	ScopedCleanupFunctor< FunctorType > MakeScopedCleanupFunctor( FunctorType && Functor ) noexcept
	{
		return ScopedFunctor< FunctorType >( std::move( Functor ) );
	}

	template< typename FunctorType >
	ScopedCleanupFunctor< FunctorType >::ScopedCleanupFunctor( const FunctorType & Functor ) noexcept
		: Functor( Functor )
	{
	}

	template< typename FunctorType >
	ScopedCleanupFunctor< FunctorType >::ScopedCleanupFunctor( FunctorType && Functor ) noexcept
		: Functor( std::move( Functor ) )
	{
	}

	template< typename FunctorType >
	ScopedCleanupFunctor< FunctorType >::~ScopedCleanupFunctor() noexcept
	{
		Functor();
	}

} // namespace Algorithms
} // namespace max
