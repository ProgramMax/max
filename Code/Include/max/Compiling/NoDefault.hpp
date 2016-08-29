// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_COMPILING_NODEFAULT_HPP
#define MAX_COMPILING_NODEFAULT_HPP

#include <max/Compiling/Configuration/Compiler.hpp>
#include <max/Compiling/Assume.hpp>

#ifdef DEBUG
	#define NODEFAULT
#else
	#if defined(MAX_COMPILER_VC)
		#define NODEFAULT ASSUME( 0 )
	#elif defined(MAX_COMPILER_GCC)
			#define NODEFAULT __builtin_unreachable()
	#endif
#endif

#endif // #ifndef MAX_COMPILING_NODEFAULT_HPP