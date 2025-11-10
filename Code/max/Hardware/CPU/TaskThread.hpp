// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_HARDWARE_CPU_TASKTHREAD_HPP
#define MAX_HARDWARE_CPU_TASKTHREAD_HPP

#include <memory>
#include <optional>
#include <thread>

#include <max/Hardware/CPU/TaskQueue.hpp>

namespace max {
namespace Hardware {
namespace CPU {

	class TaskThread {
	public:

		explicit TaskThread(std::unique_ptr<max::Hardware::CPU::TaskQueue> task_queue, std::thread thread) noexcept;

		std::unique_ptr<max::Hardware::CPU::TaskQueue> task_queue_;
		std::thread thread_;

	};

	std::optional<TaskThread> CreateTaskThread() noexcept;

} // namespace CPU
} // namespace Hardware
} // namespace max

#endif // #ifndef MAX_HARDWARE_CPU_TASKTHREAD_HPP