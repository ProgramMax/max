// Copyright 2015, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_ALGORITHMS_SCOPEDCLEANUPFUNCTOR_HPP
#define MAX_ALGORITHMS_SCOPEDCLEANUPFUNCTOR_HPP

#include <functional>

namespace max
{
namespace Algorithms
{

	template< typename FunctorType >
	class ScopedCleanupFunctor;

	template< typename FunctorType >
	ScopedCleanupFunctor< FunctorType > MakeScopedCleanupFunctor( const FunctorType & Functor ) noexcept;

	template< typename FunctorType >
	ScopedCleanupFunctor< FunctorType > MakeScopedCleanupFunctor( FunctorType && Functor ) noexcept;

	template< typename FunctorType >
	class ScopedCleanupFunctor
	{
	public:

		explicit ScopedCleanupFunctor( const FunctorType & Functor ) noexcept;
		explicit ScopedCleanupFunctor( FunctorType && Functor ) noexcept;
		~ScopedCleanupFunctor() noexcept;

		ScopedCleanupFunctor& operator =( const ScopedCleanupFunctor & rhs ) = delete;
		ScopedCleanupFunctor& operator =( ScopedCleanupFunctor && rhs ) = delete;

	private:

		const FunctorType Functor;

	}; // class ScopedCleanupFunctor

} // namespace Algorithms
} // namespace max

#include <max/Algorithms/ScopedCleanupFunctor.inl>

#endif // #ifndef MAX_ALGORITMS_SCOPEDCLEANUPFUNCTOR_HPP
