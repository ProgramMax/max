// Copyright 2016, Chris Blume
// All rights reserved.

#ifndef MAX_CPU_CPUIDSUBLEAFARGUMENTSANDRESULT_HPP
#define MAX_CPU_CPUIDSUBLEAFARGUMENTSANDRESULT_HPP

#include <cstdint>
#include "CPUIDSubleafResult.hpp"

namespace max
{
namespace CPU
{

	class CPUIDSubleafArgumentsAndResult
	{
	public:

		CPUIDSubleafArgumentsAndResult( const uint32_t Leaf,
		                                const uint32_t Subleaf,
		                                CPUIDSubleafResult && Result )                            noexcept;
		CPUIDSubleafArgumentsAndResult()                                                          noexcept = default; // TODO: make this = delete
		CPUIDSubleafArgumentsAndResult( const CPUIDSubleafArgumentsAndResult & rhs )              noexcept = default;
		CPUIDSubleafArgumentsAndResult( CPUIDSubleafArgumentsAndResult && rhs )                   noexcept = default;
		~CPUIDSubleafArgumentsAndResult()                                                         noexcept = default;

		CPUIDSubleafArgumentsAndResult & operator =( const CPUIDSubleafArgumentsAndResult & rhs ) noexcept = default;
		CPUIDSubleafArgumentsAndResult & operator =( CPUIDSubleafArgumentsAndResult && rhs )      noexcept = default;


		uint32_t Leaf;
		uint32_t Subleaf;

		CPUIDSubleafResult Result;

	};

} // namespace CPU
} // namespace max

#endif // #ifndef MAX_CPU_CPUIDSUBLEAFARGUMENTSANDRESULT_HPP