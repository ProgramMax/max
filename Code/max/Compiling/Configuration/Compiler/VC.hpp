// Copyright 2015, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_COMPILING_CONFIGURATION_COMPILER_VC_HPP
#define MAX_COMPILING_CONFIGURATION_COMPILER_VC_HPP

#define MAX_COMPILER_VC

#define MAX_COMPILER_MESSAGE(Message) __pragma(message(Message))

#if _MSC_VER > 1920
	MAX_COMPILER_MESSAGE("Compiling with a newer version of MSVC than max recognizes.");
#elif _MSC_VER >= 1920
	// VC 16.0 (2019)
	#define MAX_COMPILER_VERSION_MAJOR 16
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 1916
	// VC 15.9 (2017)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR 9
#elif _MSC_VER >= 1915
	// VC 15.8 (2017)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR 8
#elif _MSC_VER >= 1914
	// VC 15.7 (2017)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR 7
#elif _MSC_VER >= 1913
	// VC 15.6 (2017)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR  6
#elif _MSC_VER >= 1912
	// VC 15.5 (2017)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR  5
#elif _MSC_VER >= 1911
	// VC 15.3 & 15.4 (2017)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR  4
#elif _MSC_VER >= 1910
	// VC 15.1 & 15.2 (2017)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR  2
#elif _MSC_VER >= 1900
	// VC 14.0 and updates 1, 2, & 3 (2015)
	#define MAX_COMPILER_VERSION_MAJOR 14
	#define MAX_COMPILER_VERSION_MINOR  0
	// All of VC 2015's updates show up with _MSC_VER 1900.
	// So check _MSC_FULL_VER.
	#if _MSC_FULL_VER >= 190023506
		// VC 14.1 (2015 Update 1)
		#undef MAX_COMPILER_VERSION_MINOR
		#define MAX_COMPILER_VERSION_MINOR 1
	#endif
#elif _MSC_VER >= 1800
	// VC 12.0 (2013)
	#define MAX_COMPILER_VERSION_MAJOR 12
	#define MAX_COMPILER_VERSION_MINOR  0
#elif _MSC_VER >= 1700
	// VC 11.0 (2012)
	#define MAX_COMPILER_VERSION_MAJOR 11
	#define MAX_COMPILER_VERSION_MINOR  0
#elif _MSC_VER >= 1600
	// VC 10.0 (2010)
	#define MAX_COMPILER_VERSION_MAJOR 10
	#define MAX_COMPILER_VERSION_MINOR  0
#elif _MSC_VER >= 1500
	// VC 9.0 (2008)
	#define MAX_COMPILER_VERSION_MAJOR 9
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 1400
	// VC 8.0 (2005)
	#define MAX_COMPILER_VERSION_MAJOR 8
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 1310
	// VC 7.1 (2003)
	#define MAX_COMPILER_VERSION_MAJOR 7
	#define MAX_COMPILER_VERSION_MINOR 1
#elif _MSC_VER >= 1300
	// VC 7.0 (2002)
	#define MAX_COMPILER_VERSION_MAJOR 7
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 1200
	// VC 6.0 or 6.0 SP6
	#define MAX_COMPILER_VERSION_MAJOR 6
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 1100
	// VC 5.0
	#define MAX_COMPILER_VERSION_MAJOR 5
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 1020
	// VC 4.2
	#define MAX_COMPILER_VERSION_MAJOR 4
	#define MAX_COMPILER_VERSION_MINOR 2
#elif _MSC_VER == 1010
	// VC 4.1
	#define MAX_COMPILER_VERSION_MAJOR 4
	#define MAX_COMPILER_VERSION_MINOR 1
#elif _MSC_VER >= 1000
	// VC 4.0
	#define MAX_COMPILER_VERSION_MAJOR 4
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 900
	// VC 3.0
	#define MAX_COMPILER_VERSION_MAJOR 3
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 800
	// VC 1.0
	#define MAX_COMPILER_VERSION_MAJOR 1
	#define MAX_COMPILER_VERSION_MINOR 0
#else
	#error "Unknown compiler version"
#endif
#define MAX_COMPILER_VERSION_PATCH 0


// VC sets _CPPUNWIND on /EHsc but not /EHa ... I think?
#if defined(_CPPUNWIND)
	#define MAX_EXCEPTIONS_SUPPORTED
#endif

#if _MSC_FULL_VER >= 180021114
	#define MAX_NOEXCEPT_SUPPORTED
#endif

#if _MSC_VER >= 1900
	#define	MAX_INLINE_NAMESPACES_SUPPORTED
#endif

#endif // #ifndef MAX_COMPILING_CONFIGURATION_COMPILER_VC_HPP
