// Copyright 2025, The FileReadSpeedTest Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FILEREADSPEEDTEST_TASKTHREAD_HPP
#define FILEREADSPEEDTEST_TASKTHREAD_HPP

#include <memory>
#include <optional>
#include <thread>

#include <max/TaskQueue.hpp>

namespace FileReadSpeedTest {

	class TaskThread {
	public:

		explicit TaskThread(std::unique_ptr<max::TaskQueue> task_queue, std::thread thread) noexcept;

		std::unique_ptr<max::TaskQueue> task_queue_;
		std::thread thread_;

	};

	std::optional<TaskThread> CreateTaskThread() noexcept;

} // namespace FileReadSpeedTest

#endif // #ifndef FILEREADSPEEDTEST_TASKTHREAD_HPP