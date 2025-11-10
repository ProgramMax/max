// Copyright 2025, The FileReadSpeedTest Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "TaskThread.hpp"

#include <utility>

namespace FileReadSpeedTest {

	TaskThread::TaskThread(std::unique_ptr<max::TaskQueue> task_queue, std::thread thread) noexcept
		: task_queue_(std::move(task_queue))
		, thread_(std::move(thread))
	{}

	std::optional<TaskThread> CreateTaskThread() noexcept {
		auto create_task_queue_result = max::CreateTaskQueue();
		if (!create_task_queue_result) {
			return std::nullopt;
		}
		std::unique_ptr<max::TaskQueue> task_queue = std::move(*create_task_queue_result);
		
		auto thread = std::thread(max::TaskRunnerLoop, task_queue.get());
		// TODO: Attempt to lock that thread to the preferred type of core.

		return TaskThread(std::move(task_queue), std::move(thread));
	}

} // namespace FileReadSpeedTest