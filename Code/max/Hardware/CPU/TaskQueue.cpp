// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Hardware/CPU/TaskQueue.hpp>

#include <type_traits>

#include <utility>

namespace max {
namespace Hardware {
namespace CPU {

	TaskQueue::TaskQueue(HANDLE wake_event) noexcept
		: task_queue_mutex_()
		, task_queue_()
		, wake_event_(std::move(wake_event))
		, shutting_down_(false)
	{
	}

	TaskQueue::~TaskQueue() noexcept {
		BOOL result = CloseHandle(wake_event_);
		if (result == 0) {
			// GetLastError()
		}
	}

	TaskQueue::AddTaskError TaskQueue::AddTask(std::unique_ptr<Task> task) noexcept {
		if (shutting_down_) {
			return AddTaskError::ShuttingDown;
		}

		{
			std::lock_guard<std::mutex> task_queue_guard(task_queue_mutex_);
			task_queue_.push(std::move(task));
			BOOL result = SetEvent(wake_event_);
			if (result == 0) {
				// GetLastError()
				return AddTaskError::CouldNotSetEvent;
			}
		}

		return AddTaskError::Okay;
	}

	std::unique_ptr<Task> TaskQueue::TryPopTask() noexcept {
		std::lock_guard<std::mutex> task_queue_guard(task_queue_mutex_);

		BOOL result = ResetEvent(wake_event_);
		if (result == 0) {
			// GetLastError
			return nullptr;
		}

		if (task_queue_.empty()) {
			return nullptr;
		}

		std::unique_ptr<Task> task = std::move(task_queue_.front());
		task_queue_.pop();
		return task;
	}

	TaskQueue::WaitForEventError TaskQueue::WaitForEvent() noexcept {
		auto result = WaitForMultipleObjects(1, &wake_event_, TRUE, INFINITE);
		if (result != WAIT_OBJECT_0) {
			return WaitForEventError::CouldNotWait;
		} else {
			result = ResetEvent(wake_event_);
			if (result == 0) {
				// GetLastError()
				return WaitForEventError::CouldNotResetEvent;
			}
		}

		return WaitForEventError::Okay;
	}

	TaskQueue::ShutdownError TaskQueue::Shutdown() noexcept {
		std::lock_guard<std::mutex> task_queue_guard(task_queue_mutex_);

		shutting_down_ = true;
		BOOL result = SetEvent(wake_event_);
		if (result == 0) {
			// GetLastError()
			return ShutdownError::CouldNotSetEvent;
		}

		return ShutdownError::Okay;
	}

	std::expected<std::unique_ptr<TaskQueue>, CreateTaskQueueError> CreateTaskQueue() noexcept {
		HANDLE wake_event = CreateEvent(NULL, TRUE, FALSE, TEXT("wake_event_"));
		if (wake_event == NULL) {
			// GetLastError()
			return std::unexpected(CreateTaskQueueError::CouldNotCreate);
		}

		return std::make_unique<TaskQueue>(std::move(wake_event));
	}

	void TaskRunnerLoop(TaskQueue* task_queue) noexcept {
		bool continue_looping = true;
		do {
			auto task = task_queue->TryPopTask();
			if (task) {
				task->Run();
			}
			else {
				if (task_queue->shutting_down_) {
					continue_looping = false;
				}
				else {
					task_queue->WaitForEvent();
				}
			}
		} while (continue_looping);
	}

} // namespace CPU
} // namespace Hardware
} // namespace max