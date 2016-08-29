// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_COMPILING_ALIGNMENT_HPP
#define MAX_COMPILING_ALIGNMENT_HPP

#include <max/Compiling/Configuration/Compiler.hpp>

// Usage: MAX_ALIGN( int foo, 16 );

#ifdef MAX_COMPILER_VC
	#define MAX_ALIGN( Expression, Alignment ) __declspec( align( Alignment ) ) Expression
#elif MAX_COMPILER_GCC
	#define MAX_ALIGN( Expression, Alignment ) Expression __attribute__((aligned( Alignment ) ))
#else
	#error "Unable to align"
#endif

#endif // #ifndef MAX_COMPILING_ALIGNMENT_HPP