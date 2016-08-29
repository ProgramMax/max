// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_ALGORITHMS_YIELD_HPP
#define MAX_ALGORITHMS_YIELD_HPP

#include <max/Compiling/Configuration/Compiler.hpp>

#ifdef MAX_COMPILER_VC
	#ifdef MAX_IA64
		#include <intrin.h>
		#define MAX_YIELD __yield()
	#else
		// This is only supported on SSE machines
		// But earlier machines generate a nop which means we don't need to test for SSE support
		#include <xmmintrin.h>
		#define MAX_YEILD _mm_pause()
	#endif
#else
	#define MAX_YIELD
#endif

#endif // #ifndef MAX_ALGORITHMS_YIELD_HPP