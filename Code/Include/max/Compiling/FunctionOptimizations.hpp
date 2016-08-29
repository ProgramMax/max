// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_COMPILING_FUNCTIONOPTIMIZATIONS_HPP
#define MAX_COMPILING_FUNCTIONOPTIMIZATIONS_HPP

#include <max/Compiling/Configuration/Compiler.hpp>

//
// A semi-pure function is one that references or modifies
// only locals, arguments, and first-level indirections of arguments.
// This means param1->foo; is okay.
// But param1->member1->foo isn't okay. This is a second-level indirection.
//
// Usage:
// MAX_SEMI_PURE( void foo() );
//
// template< typename T >
// MAX_SEMI_PURE( inline T Max( const T & lhs, const T & rhs ) );
//

#ifdef MAX_COMPILER_VC
	#define MAX_SEMI_PURE( Declaration ) __declspec( noalias ) Declaration
#else
	#define MAX_SEMI_PURE( Declaration ) Declaration
#endif



//
// A pure function is like a semi-pure except if cannot follow a first-level indirection.
// This means no pointers or references.
//
// Usage:
// MAX_PURE( void foo() );
//
// template< typename T >
// MAX_PURE( inline T Max( const T lhs, const T rhs ) );
//

#ifdef MAX_COMPILER_GCC
	// this is only available in GCC 2.5 and later
	#if COMPILER_VERSION_MAJOR > 2 || ( COMPILER_VERSION_MAJOR == 2 && COMPILER_VERSION_MINOR >= 5 )
		#define MAX_PURE( Declaration ) Declaration __attribute__((const))
	#else
		#define MAX_PURE( Declaration ) Declaration
	#endif
#else
	#ifdef MAX_COMPILER_VC
		#define MAX_PURE( Declaration ) __declspec( noalias ) ( Declaration )
	#else
		#define MAX_PURE( Declaration ) Declaration
	#endif
#else
	#define MAX_PURE( Declaration ) Declaration
#endif

//
// A unique pointer is a parameter that cannot be aliased.
// This means the object being pointed to cannot be pointed to by any other pointer.
//
// Usage:
// void free( MAX_UNIQUE_POINTER void * ptr );
//

#ifdef MAX_COMPILER_VC
	#define MAX_UNIQUE_POINTER __restrict
#else
	#define MAX_UNIQUE_POINTER
#endif

//
// Used when a function returns a pointer that has no other aliases.
// This means no other pointer will point to this same location.
// This makes sense for malloc:
//
// MAX_RETURNS_UNIQUE_POINTER void * malloc( size_t size );
//

#ifdef MAX_COMPILER_VC
	#define MAX_RETURNS_UNIQUE_POINTER __declspec( restrict )
#else
	#define MAX_RETURNS_UNIQUE_POINTER
#endif

#endif // #ifndef MAX_COMPILING_FUNCTIONOPTIMIZATIONS_HPP