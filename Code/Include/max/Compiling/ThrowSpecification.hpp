// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_COMPILING_THROWSPECIFICATION_HPP
#define MAX_COMPILING_THROWSPECIFICATION_HPP

#include <max/Compiling/Configuration.hpp>

#if defined(MAX_EXCEPTIONS_SUPPORTED)
	#if defined(MAX_NOEXCEPT_SUPPORTED)
		#define MAX_DOES_NOT_THROW noexcept
	#else
		#define MAX_DOES_NOT_THROW throw()
	#endif
#else
	#define MAX_DOES_NOT_THROW
#endif

#endif // #ifndef MAX_COMPILING_THROWSPECIFICATION_HPP