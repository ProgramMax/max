// Copyright 2025, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_HARDWARE_CPU_TASK_HPP
#define MAX_HARDWARE_CPU_TASK_HPP

namespace max {
namespace Hardware {
namespace CPU {

	class Task {
	public:

		virtual ~Task() noexcept;

		virtual void Run() noexcept = 0;

	};

} // namespace CPU
} // namespace Hardware
} // namespace max

#endif // #ifndef MAX_HARDWARE_CPU_TASK_HPP