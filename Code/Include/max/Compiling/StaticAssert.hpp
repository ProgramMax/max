// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_COMPILING_STATICASSERT_HPP
#define MAX_COMPILING_STATICASSERT_HPP

template< bool x >
struct MAX_STATIC_ASSERTION_FAILURE;

template<>
struct MAX_STATIC_ASSERTION_FAILURE< true > { };

#define MAX_STATIC_ASSERT(PRED, MSG) ::MAX_STATIC_ASSERTION_FAILURE< (PRED) > ##MSG;

#endif // #ifndef MAX_COMPILING_STATICASSERT_HPP