// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_ALGORITHMS_OPTIMIZINGASSERT_HPP
#define MAX_ALGORITHMS_OPTIMIZINGASSERT_HPP

#include <max/Compiling/Assume.hpp>

#ifdef DEBUG
	#define MAX_OPTIMIZING_ASSERT( Expression ) (( Expression ) || assert( __FILE__, __LINE__ )
#else
	#define MAX_OPTIMIZING_ASSERT( Expression ) MAX_ASSUME( Expression )
#endif

#endif // #ifndef MAX_ALGORITHMS_OPTIMIZINGASSERT_HPP