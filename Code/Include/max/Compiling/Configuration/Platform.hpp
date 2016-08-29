// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_COMPILING_CONFIGURATION_PLATFORM_HPP
#define MAX_COMPILING_CONFIGURATION_PLATFORM_HPP

#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__GNU__)
	// Linux
	#include <max/Compiling/Configuration/Platform/Linux.hpp>
#elif defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
	// Win32
	#include <max/Compiling/Configuration/Platform/Win32.hpp>
#elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
	// MacOS
	#include <max/Compiling/Configuration/Platform/MacOS.hpp>
//#elif defined(AVR)
	// AVR Studio
	//__AVR_ARCH__
	//#elif defined (__AVR_AT90USB1287__)
#else
	#error "Unknown platform"
#endif

#endif // #ifndef MAX_COMPILING_CONFIGURATION_PLATFORM_HPP