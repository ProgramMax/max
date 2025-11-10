// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_HARDWARE_CPU_TASKQUEUE_HPP
#define MAX_HARDWARE_CPU_TASKQUEUE_HPP

#include <expected>
#include <memory>
#include <mutex>
#include <queue>


// TODO: Handle other platforms
// TODO: This is only needed for the definition of HANDLE. Can we remove this somehow?
#ifndef WIN32_LEAN_AND_MEAN
#define WIn32_LEAN_AND_MEAN
#endif
#include <Windows.h>

#include <max/Hardware/CPU/Task.hpp>

namespace max {
namespace Hardware {
namespace CPU {

	// TaskQueue uses std::mutex, which cannot be copied nor moved.
	// This restriction has a major impact on the design of the class.
	// Instead of the usual std::expected<T, ErrorCode> CreateT() function,
	// we use std::expected<std::unique_ptr<T, ErrorCode> CreateT().
	// 
	// The additional unique_ptr means the actual object doesn't have to move.

	// Assume a 64-byte cache line size, and align to that.
	// This is so a vector of TaskQueues does not cause false sharing between threads.
	// TODO: VC warns that alignas(64) did indeed pad. And we treat warnings as errors.
	class /*alignas(64)*/ TaskQueue {
	public:

		// TODO: This is only public so std::make_unique can call it
		TaskQueue(HANDLE wake_event) noexcept;
		~TaskQueue() noexcept;

		enum class AddTaskError {
			Okay,
			ShuttingDown,
			CouldNotSetEvent,
		};
		AddTaskError AddTask(std::unique_ptr<Task> task) noexcept;

		// TODO: Should this return a std::expected so it can provide error values?
		std::unique_ptr<Task> TryPopTask() noexcept;

		enum class WaitForEventError {
			Okay,
			CouldNotWait,
			CouldNotResetEvent,
		};
		WaitForEventError WaitForEvent() noexcept;

		enum class ShutdownError {
			Okay,
			CouldNotSetEvent,
		};
		ShutdownError Shutdown() noexcept;

		volatile bool shutting_down_;

	private:

		std::mutex task_queue_mutex_;
		std::queue<std::unique_ptr<Task>> task_queue_;
		HANDLE wake_event_;

	};

	enum class CreateTaskQueueError {
		CouldNotCreate,
	};
	// TODO: Possibly provide an allocator, to allocate the TaskQueue at the right location
	std::expected<std::unique_ptr<TaskQueue>, CreateTaskQueueError> CreateTaskQueue() noexcept;

	void TaskRunnerLoop(TaskQueue* task_queue) noexcept;

} // namespace CPU
} // namespace Hardware
} // namespace max

#endif // #ifndef MAX_HARDWARE_CPU_TASKQUEUE_HPP