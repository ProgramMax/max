// Copyright 2026, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_TESTING_EXPORT_HPP
#define MAX_TESTING_EXPORT_HPP

// There are functions which are only used within a given translation unit.
// They should not be exported to the linker.

// However, you will want to test those functions. And since the test code
// likely lives in a different file, you *will* want the functions to be
// exported to the linker.

// If a project has the definition MAX_TEST, these macros will export the
// functions marked with them.
// A normal project won't define MAX_TEST and so the functions remain hidden.

#ifdef MAX_TEST
	#define MAX_TESTING_EXPORT_DECLARATION( Declaration ) Declaration
	#define MAX_TESTING_EXPORT_DEFINITION( Definition ) Definition
#else
	#define MAX_TESTING_EXPORT_DECLARATION( Declaration )
	#define MAX_TESTING_EXPORT_DEFINITION( Definition ) static Definition
#endif

#endif // #ifndef MAX_TESTING_EXPORT_HPP
