// Copyright 2026, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <utility>

#include <max/Compiling/Configuration.hpp>
#include <max/Compiling/Assume.hpp>

namespace max
{
	namespace v0
	{
		namespace Algorithms
		{

			template<typename Handler>
			Defer<Handler>::Defer(Handler handler)
				: handler_(std::move(handler))
			{}

			template<typename Handler>
			Defer<Handler>::~Defer() {
				handler_();
			}

		} // namespace Algorithms
	} // namespace v0
} // namespace max
