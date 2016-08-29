// Copyright 2015, Chris Blume
// All rights reserved.

#ifndef MAX_LOGGING_DONOTHINGLOGGER_HPP
#define MAX_LOGGING_DONOTHINGLOGGER_HPP

#include <max/Compiling/ThrowSpecification.hpp>

namespace max
{
namespace Logging
{

	class DoNothingLogger
	{
	public:

		void LogInfo(    const wchar_t * Info    ) MAX_DOES_NOT_THROW;
		void LogDebug(   const wchar_t * Debug   ) MAX_DOES_NOT_THROW;
		void LogWarning( const wchar_t * Warning ) MAX_DOES_NOT_THROW;
		void LogError(   const wchar_t * Error   ) MAX_DOES_NOT_THROW;

	};

} // namespace Logging
} // namespace max

#endif