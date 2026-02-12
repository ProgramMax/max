// Copyright 2026, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "DeferTest.hpp"
#include <max/Algorithms/Defer.hpp>
#include <max/Testing/TestSuite.hpp>
#include <max/Testing/CoutResultPolicy.hpp>
#include <utility>

namespace maxAutomatedTests
{
	namespace Algorithms
	{

		void RunDeferTestSuite()
		{
			max::Testing::CoutResultPolicy ResultPolicy;
			auto DeferTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Algorithms::Defer test suite", std::move(ResultPolicy) };

			DeferTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "inside range", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
				bool was_defer_called = false;

				// Create a scope so the defer is called
				{
					MAX_DEFER(
						was_defer_called = true;
					);
				}

				CurrentTest.MAX_TESTING_ASSERT(was_defer_called == true);
			}
			});

			DeferTestSuite.RunTests();
		}

	} // namespace Algorithms
} // namespace maxAutomatedTests
