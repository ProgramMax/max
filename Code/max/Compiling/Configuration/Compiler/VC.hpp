// Copyright 2015, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_COMPILING_CONFIGURATION_COMPILER_VC_HPP
#define MAX_COMPILING_CONFIGURATION_COMPILER_VC_HPP

#define MAX_COMPILER_VC

#define MAX_COMPILER_MESSAGE(Message) __pragma(message(Message))

#if _MSC_VER > 1924
MAX_COMPILER_MESSAGE("Compiling with a newer version of MSVC than max recognizes.");
#elif _MSC_VER == 1924
	// MSVC++ 14.24 (Visual Studio 2019 / version 16.4)
	#define MAX_COMPILER_VERSION_MAJOR 16
	#define MAX_COMPILER_VERSION_MINOR 4
#elif _MSC_VER >= 1923
	// MSVC++ 14.23 (Visual Studio 2019 / version 16.3)
	#define MAX_COMPILER_VERSION_MAJOR 16
	#define MAX_COMPILER_VERSION_MINOR 3
#elif _MSC_VER >= 1922
	// MSVC++ 14.22 (Visual Studio 2019 / version 16.2)
	#define MAX_COMPILER_VERSION_MAJOR 16
	#define MAX_COMPILER_VERSION_MINOR 2
#elif _MSC_VER >= 1921
	// MSVC++ 14.21 (Visual Studio 2019 / version 16.1)
	#define MAX_COMPILER_VERSION_MAJOR 16
	#define MAX_COMPILER_VERSION_MINOR 1
#elif _MSC_VER >= 1920
	// MSVC++ 14.2 (Visual Studio 2019 / version 16.0)
	#define MAX_COMPILER_VERSION_MAJOR 16
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 1916
	// MSVC++ 14.16 (Visual Studio 2017 Update 9 / version 15.9)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR 9
#elif _MSC_VER >= 1915
	// MSVC++ 14.15 (Visual Studio 2017 Update 8 / version 15.8)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR 8
#elif _MSC_VER >= 1914
	// MSVC++ 14.14 (Visual Studio 2017 Update 7 / version 15.7)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR 7
#elif _MSC_VER >= 1913
	// MSVC++ 14.13 (Visual Studio 2017 Update 6 / version 15.6)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR  6
#elif _MSC_VER >= 1912
	// MSVC++ 14.12 (Visual Studio 2017 Update 5 / version 15.5)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR  5
#elif _MSC_VER >= 1911
	// MSVC++ 14.11 (Visual Studio 2017 Update 3 & 4 / version 15.3, 15.4)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR  3
#elif _MSC_VER >= 1910
	// MSVC++ 14.1 (Visual Studio 2017 and Update 1 & 2 / version 15.0, 15.1, 15.2)
	#define MAX_COMPILER_VERSION_MAJOR 15
	#define MAX_COMPILER_VERSION_MINOR  0
#elif _MSC_VER >= 1900
	// MSVC++ 14.0 and updates 1, 2, & 3 (Visual Studio 2015 / version 14.0)
	#define MAX_COMPILER_VERSION_MAJOR 14
	#define MAX_COMPILER_VERSION_MINOR  0
	// All of MSVC++ 14.0's updates show up with _MSC_VER 1900.
	// So check _MSC_FULL_VER.
	#if _MSC_FULL_VER >= 190024210
		// MSVC++ 14.3 (Visual Studio 2015 Update 3)
	#elif _MSC_FULL_VER >= 190023918
		// MSVC++ 14.2 (Visual Studio 2015 Update 2)
	#elif _MSC_FULL_VER >= 190023506
		// MSVC++ 14.1 (Visual Studio 2015 Update 1)
	#endif
#elif _MSC_VER >= 1800
	// MSVC++ 12.0 (Visual Studio 2013 / version 12.0)
	#define MAX_COMPILER_VERSION_MAJOR 12
	#define MAX_COMPILER_VERSION_MINOR  0
#elif _MSC_VER >= 1700
	// MSVC++ 11.0 (Visual Studio 2012 / version 11.0)
	#define MAX_COMPILER_VERSION_MAJOR 11
	#define MAX_COMPILER_VERSION_MINOR  0
#elif _MSC_VER >= 1600
	// MSVC++ 10.0 (Visual Studio 2010 / version 10.0)
	#define MAX_COMPILER_VERSION_MAJOR 10
	#define MAX_COMPILER_VERSION_MINOR  0
	#if _MSC_FULL_VER >= 160040219
		// MSVC++ 10.1 SP 1
	#endif
#elif _MSC_VER >= 1500
	// MSVC++ 9.0 (Visual Studio 2008 / version 9.0)
	#define MAX_COMPILER_VERSION_MAJOR 9
	#define MAX_COMPILER_VERSION_MINOR 0
	#if _MSC_FULL_VER >= 150030729
		// MSVC++ 9.0 SP1
	#endif
#elif _MSC_VER >= 1400
	// MSVC++ 8.0 (Visual Studio 2005 / version 8.0)
	#define MAX_COMPILER_VERSION_MAJOR 8
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 1310
	// MSVC++ 7.1 (Visual Studio .NET 2003 / version 7.1)
	#define MAX_COMPILER_VERSION_MAJOR 7
	#define MAX_COMPILER_VERSION_MINOR 1
	#if _MSC_FULL_VER >= 13106030
		// Visual Studio .NET 2003 SP 1
	#elif _MSC_FULL_VER >= 13103077
		// Visual Studio .NET 2003
	#elif _MSC_FULL_VER >= 13102292
		// Visual Studio .NET 2003 Beta
	#endif
#elif _MSC_VER >= 1300
	// MSVC++ 7.0 (Visual Studio .NET 2002 / version 7.0)
	#define MAX_COMPILER_VERSION_MAJOR 7
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 1200
	// MSVC++ 6.0 (Visual Studio 6.0 / version 6.0)
	#define MAX_COMPILER_VERSION_MAJOR 6
	#define MAX_COMPILER_VERSION_MINOR 0
	#if _MSC_FULL_VER >= 12008804
		// MSVC++ 6.0 SP6
	#endif
#elif _MSC_VER >= 1100
	// MSVC++ 5.0 (Visual Studio 97 / version 5.0)
	#define MAX_COMPILER_VERSION_MAJOR 5
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 1020
	// MSVC++ 4.2 (Developer Studio 4.2)
	#define MAX_COMPILER_VERSION_MAJOR 4
	#define MAX_COMPILER_VERSION_MINOR 2
#elif _MSC_VER >= 1010
	// MSVC++ 4.1 (Developer Studio 4.1)
	#define MAX_COMPILER_VERSION_MAJOR 4
	#define MAX_COMPILER_VERSION_MINOR 1
#elif _MSC_VER >= 1000
	// MSVC++ 4.0 (Developer Studio 4.0)
	#define MAX_COMPILER_VERSION_MAJOR 4
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 900
	// MSVC++ 2.0
	#define MAX_COMPILER_VERSION_MAJOR 2
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 800
	// MSVC++ 1.0
	#define MAX_COMPILER_VERSION_MAJOR 1
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 700
	// MSC/C++ 7.0
	#define MAX_COMPILER_VERSION_MAJOR 7
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 600
	// MSC 6.0
	#define MAX_COMPILER_VERSION_MAJOR 6
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 500
	// MSC 5.0
	#define MAX_COMPILER_VERSION_MAJOR 5
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 400
	// MSC 4.0
	#define MAX_COMPILER_VERSION_MAJOR 4
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 300
	// MSC 3.0
	#define MAX_COMPILER_VERSION_MAJOR 3
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 200
	// MSC 2.0
	#define MAX_COMPILER_VERSION_MAJOR 2
	#define MAX_COMPILER_VERSION_MINOR 0
#elif _MSC_VER >= 100
	// MSC 1.0
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
