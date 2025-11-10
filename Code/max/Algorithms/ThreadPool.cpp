// Copyright 2025, The FileReadSpeedTest Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ThreadPool.hpp"

#include <iostream>

#include "GetProcessorCoreInformation.hpp"

namespace FileReadSpeedTest {

	ThreadPool::ThreadPool(std::vector<TaskThread> task_threads) noexcept
		: task_threads_(std::move(task_threads))
	{}

	std::optional<ThreadPool> CreateThreadPool() noexcept {
		// Get processor information.
		auto processor_core_information = FileReadSpeedTest::GetProcessorCoreInformation();
		if (!processor_core_information.has_value()) {
			std::cerr << "Error: Could not find processor information." << std::endl;
			return std::nullopt;
		}


		// Determine how many threads to create based on the different core types.
		// Each program will want to do this differently--some processing is heavy, some light...
		int16_t max_efficiency = -1;
		uint16_t max_efficiency_core_count = 0;
		for (auto& core_information : *processor_core_information) {
			std::cout << "CPU cores: " << core_information.count_ << " @ performance class: " << core_information.efficiency_class_;
			if (core_information.has_hyperthreading_ != 0) {
				std::cout << " (with hyperthreading)";
			}
			if (core_information.efficiency_class_ > max_efficiency) {
				max_efficiency = core_information.efficiency_class_;
				max_efficiency_core_count = core_information.count_;
			}
			std::cout << std::endl;
		}


		// Create task threads.
		std::vector<TaskThread> task_threads;

		for (size_t i = 0; i < max_efficiency_core_count; i++) {
			auto task_thread = CreateTaskThread();
			if (!task_thread.has_value()) {
				return std::nullopt;
			}
			task_threads.emplace_back(std::move(*task_thread));
		}

		return ThreadPool(std::move(task_threads));
	}

} // namespace FileReadSpeedTest