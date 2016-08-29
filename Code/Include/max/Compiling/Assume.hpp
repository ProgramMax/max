// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_COMPILING_ASSUME_HPP
#define MAX_COMPILING_ASSUME_HPP

#include <max/Compiling/Configuration/Compiler.hpp>

#ifdef MAX_COMPILER_VC
	#define MAX_ASSUME( Expression ) __assume( Expression )
#else
	#define MAX_ASSUME( Expression )
#endif

#endif // #ifndef MAX_COMPILING_ASSUME_HPP