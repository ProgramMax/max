// Copyright 2026, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "SlotMapTest.hpp"
#include <max/Containers/SlotMap.hpp>
#include <max/Testing/TestSuite.hpp>
#include <max/Testing/CoutResultPolicy.hpp>
#include <utility>

namespace maxAutomatedTests
{
namespace Containers
{

	void RunSlotMapTestSuite()
	{
		max::Testing::CoutResultPolicy ResultPolicy;
		auto SlotMapTestSuite = max::Testing::TestSuite< max::Testing::CoutResultPolicy >{ "max::Containers::SlotMap test suite", std::move(ResultPolicy) };

		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "push_back appends element", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			auto test = max::Containers::SlotMap< int >{};
			CurrentTest.MAX_TESTING_ASSERT(test.size() == 0);

			auto handle = test.push_back(10);

			CurrentTest.MAX_TESTING_ASSERT(test.size() == 1);
			CurrentTest.MAX_TESTING_ASSERT(test[handle] == 10);
		}
		});

		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "emplace_back constructs in-place, appended", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			struct Element {
				int first_;
				int second_;
			};
			auto test = max::Containers::SlotMap< Element >{};
			CurrentTest.MAX_TESTING_ASSERT(test.size() == 0);

			auto handle = test.emplace_back(10, 20);

			CurrentTest.MAX_TESTING_ASSERT(test.size() == 1);
			CurrentTest.MAX_TESTING_ASSERT(test[handle].first_ == 10);
			CurrentTest.MAX_TESTING_ASSERT(test[handle].second_ == 20);
		}
		});

		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "operator[] fetches the element", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			auto test = max::Containers::SlotMap< int >{};
			auto handle = test.push_back(10);

			CurrentTest.MAX_TESTING_ASSERT(test[handle] == 10);
		}
		});

		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "const operator[] fetches the element", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			auto test = max::Containers::SlotMap< int >{};
			auto handle = test.push_back(10);

			const auto& const_test = test;

			CurrentTest.MAX_TESTING_ASSERT(const_test[handle] == 10);
		}
		});

		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "remove removes the element", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			auto test = max::Containers::SlotMap< int >{};
			auto one_handle = test.push_back(1);
			auto two_handle = test.push_back(2);
			CurrentTest.MAX_TESTING_ASSERT(test.size() == 2);

			test.remove(one_handle);

			CurrentTest.MAX_TESTING_ASSERT(test.size() == 1);
			CurrentTest.MAX_TESTING_ASSERT(test[two_handle] == 2);
		}
		});

		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "pop_back removes the last element", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			auto test = max::Containers::SlotMap< int >{};
			auto one_handle = test.push_back(1);
			test.push_back(2);
			CurrentTest.MAX_TESTING_ASSERT(test.size() == 2);

			test.pop_back();

			CurrentTest.MAX_TESTING_ASSERT(test.size() == 1);
			CurrentTest.MAX_TESTING_ASSERT(test[one_handle] == 1);
		}
		});

		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "pop_back removes the last element", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			auto test = max::Containers::SlotMap< int >{};
			auto one_handle = test.push_back(1);
			test.push_back(2);
			CurrentTest.MAX_TESTING_ASSERT(test.size() == 2);

			test.pop_back();

			CurrentTest.MAX_TESTING_ASSERT(test.size() == 1);
			CurrentTest.MAX_TESTING_ASSERT(test[one_handle] == 1);
			}
		});

		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "begin() and end() allow iteration", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			auto test = max::Containers::SlotMap< size_t >{};
			auto one_handle = test.push_back(1);
			auto two_handle = test.push_back(2);

			auto element_count = size_t{ 0 };

			auto end = test.end();
			for (auto it = test.begin(); it != end; ++it) {
				element_count++;
				*it = 10 * element_count;
			}

			CurrentTest.MAX_TESTING_ASSERT(test[one_handle] == 10);
			CurrentTest.MAX_TESTING_ASSERT(test[two_handle] == 20);
			CurrentTest.MAX_TESTING_ASSERT(element_count == 2);
		}
		});

		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "const begin() and const end() allow iteration", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			auto test = max::Containers::SlotMap< int >{};
			test.push_back(1);
			test.push_back(2);
			const auto& const_test = test;

			auto element_count = size_t{ 0 };

			auto end = const_test.end();
			for (auto it = const_test.begin(); it != end; ++it) {
				element_count++;
			}

			CurrentTest.MAX_TESTING_ASSERT(element_count == 2);
		}
		});

		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "cbegin() and cend() allow iteration", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			auto test = max::Containers::SlotMap< int >{};
			test.push_back(1);
			test.push_back(2);

			auto element_count = size_t{ 0 };

			auto end = test.cend();
			for (auto it = test.cbegin(); it != end; ++it) {
				element_count++;
			}

			CurrentTest.MAX_TESTING_ASSERT(element_count == 2);
		}
		});
		
		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "size() returns the element count", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			auto test = max::Containers::SlotMap< int >{};

			CurrentTest.MAX_TESTING_ASSERT(test.size() == 0);

			test.push_back(1);

			CurrentTest.MAX_TESTING_ASSERT(test.size() == 1);

			test.push_back(2);

			CurrentTest.MAX_TESTING_ASSERT(test.size() == 2);
		}
		});

		SlotMapTestSuite.AddTest(max::Testing::Test< max::Testing::CoutResultPolicy >{ "max_size() returns the max element count", [](max::Testing::Test< max::Testing::CoutResultPolicy >& CurrentTest, max::Testing::CoutResultPolicy const& ResultPolicy) {
			auto test = max::Containers::SlotMap< int >{};

			auto max_size = test.max_size();

			CurrentTest.MAX_TESTING_ASSERT(max_size > test.size());

			test.push_back(1);

			CurrentTest.MAX_TESTING_ASSERT(max_size == test.max_size());
			}
		});

		SlotMapTestSuite.RunTests();
	}

} // namespace Containers
} // namespace maxAutomatedTests
