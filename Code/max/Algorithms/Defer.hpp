// Copyright 2026, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_ALGORITHMS_DEFER_HPP
#define MAX_ALGORITHMS_DEFER_HPP

#include <functional>

#include <max/Compiling/Configuration.hpp>
#include <max/Compiling/CurrentVersionNamespace.hpp>
#include <max/Compiling/AliasingOptimizations.hpp>

namespace max
{
	MAX_CURRENT_VERSION_NAMESPACE_BEGIN(v0)
	{
		namespace Algorithms
		{

			template<typename Handler>
			class Defer {
			public:

				Defer(Handler handler);
				~Defer();

			private:

				Handler handler_;

			};

			#define MAX_DEFER(Callback) auto defer = max::Algorithms::Defer{[&](){Callback}};

		} // namespace Algorithms
	} // MAX_CURRENT_VERSION_NAMESPACE_BEGIN( v0 )
	MAX_CURRENT_VERSION_NAMESPACE_END(v0)
} // namespace max

#include <max/Algorithms/Defer.inl>

#endif // #ifndef MAX_ALGORITHMS_DEFER_HPP
