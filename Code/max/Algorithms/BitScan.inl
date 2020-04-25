// Copyright 2015, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <max/Compiling/Configuration.hpp>
#include <max/Compiling/Polyfills/IsConstantEvaluated.hpp>

#if defined( MAX_COMPILER_VC )
#include <stdlib.h>
#include <intrin.h>
#endif

namespace max
{
	namespace v0
	{
		namespace Algorithms
		{

			namespace ImplementationDetails
			{

				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit0(  const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit1(  const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit2(  const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit3(  const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit4(  const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit5(  const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit6(  const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit7(  const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit8(  const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit9(  const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit10( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit11( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit12( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit13( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit14( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit15( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit16( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit17( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit18( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit19( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit20( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit21( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit22( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit23( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit24( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit25( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit26( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit27( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit28( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit29( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit30( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit31( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit32( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit33( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit34( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit35( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit36( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit37( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit38( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit39( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit40( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit41( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit42( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit43( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit44( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit45( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit46( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit47( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit48( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit49( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit50( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit51( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit52( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit53( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit54( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit55( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit56( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit57( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit58( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit59( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit60( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit61( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit62( const uint64_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit63( const uint64_t Mask ) MAX_DOES_NOT_THROW );

				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit0(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit1(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit2(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit3(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit4(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit5(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit6(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit7(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit8(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit9(  const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit10( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit11( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit12( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit13( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit14( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit15( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit16( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit17( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit18( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit19( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit20( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit21( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit22( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit23( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit24( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit25( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit26( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit27( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit28( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit29( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit30( const uint32_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit31( const uint32_t Mask ) MAX_DOES_NOT_THROW );

				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit0(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit1(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit2(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit3(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit4(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit5(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit6(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit7(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit8(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit9(  const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit10( const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit11( const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit12( const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit13( const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit14( const uint16_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit15( const uint16_t Mask ) MAX_DOES_NOT_THROW );

				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit0( const uint8_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit1( const uint8_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit2( const uint8_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit3( const uint8_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit4( const uint8_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit5( const uint8_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit6( const uint8_t Mask ) MAX_DOES_NOT_THROW );
				MAX_PURE_DECLARATION( constexpr inline uint8_t CheckBit7( const uint8_t Mask ) MAX_DOES_NOT_THROW );

			} // namespace ImplementationDetails

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline uint64_t BitScanForward( const uint64_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanForwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_ctzll( Value );
					#elif defined( MAX_COMPILER_VC ) && defined( MAX_X86_64 )
						unsigned long Position = 0;
						_BitScanForward64( &Position, Value );
						return Position;
					#else
						return ImplementationDetails::CheckBit0( Value );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline uint32_t BitScanForward( const uint32_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanForwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_ctz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanForward( &Position, Value );
						return Position;
					#else
						return ImplementationDetails::CheckBit0( Value );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline uint16_t BitScanForward( const uint16_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanForwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_ctz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanForward( &Position, static_cast< unsigned long >( Value ) );
						return static_cast< uint16_t >( Position );
					#else
						return ImplementationDetails::CheckBit0( Value );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline uint8_t BitScanForward( const uint8_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanForwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_ctz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanForward( &Position, static_cast< unsigned long >( Value ) );
							return static_cast< uint8_t >( Position );
					#else
						return ImplementationDetails::CheckBit0( Value );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline int64_t BitScanForward( const int64_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanForwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_ctzll( Value );
					#elif defined( MAX_COMPILER_VC ) && defined( MAX_X86_64 )
						unsigned long Position = 0;
						_BitScanForward64( &Position, static_cast< uint64_t >( Value ) );
						return Position;
					#else
						return ImplementationDetails::CheckBit0( static_cast< const uint64_t >( Value ) );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline int32_t BitScanForward( const int32_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanForwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_ctz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanForward( &Position, static_cast< unsigned long >( Value ) );
						return Position;
					#else
						return ImplementationDetails::CheckBit0( static_cast< const uint32_t >( Value ) );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline int16_t BitScanForward( const int16_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanForwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_ctz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanForward( &Position, static_cast< unsigned long >( Value ) );
						return static_cast< int16_t >( Position );
					#else
						return ImplementationDetails::CheckBit0( static_cast< const uint16_t >( Value ) );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline int8_t BitScanForward( const int8_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanForwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_ctz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanForward( &Position, static_cast< unsigned long >( Value ) );
						return static_cast< int8_t >( Position );
					#else
						return ImplementationDetails::CheckBit0( static_cast< const uint8_t >( Value ) );
					#endif
				}
			}

			// TODO: Add the backwards bitscans
			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline uint64_t BitScanBackward( const uint64_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanBackwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_clzll( Value );
					#elif defined( MAX_COMPILER_VC ) && defined( MAX_X86_64 )
						unsigned long Position = 0;
						_BitScanReverse64( &Position, Value );
						return Position;
					#else
						return ImplementationDetails::CheckBit0( Value );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline uint32_t BitScanBackward( const uint32_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanBackwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_clz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanReverse( &Position, Value );
						return Position;
					#else
						return ImplementationDetails::CheckBit0( Value );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline uint16_t BitScanBackward( const uint16_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanBackwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_clz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanReverse( &Position, static_cast< unsigned long >( Value ) );
						return static_cast< uint16_t >( Position );
					#else
						return ImplementationDetails::CheckBit0( Value );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline uint8_t BitScanBackward( const uint8_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanBackwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_clz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanReverse( &Position, static_cast< unsigned long >( Value ) );
						return static_cast< uint8_t >( Position );
					#else
						return ImplementationDetails::CheckBit0( Value );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline int64_t BitScanBackward( const int64_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanBackwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_clzll( Value );
					#elif defined( MAX_COMPILER_VC ) && defined( MAX_X86_64 )
						unsigned long Position = 0;
						_BitScanReverse64( &Position, static_cast< uint64_t >( Value ) );
						return Position;
					#else
						return ImplementationDetails::CheckBit0( static_cast< const uint64_t >( Value ) );
					#endif
			}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline int32_t BitScanBackward( const int32_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanBackwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_clz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanReverse( &Position, static_cast< unsigned long >( Value ) );
						return Position;
					#else
						return ImplementationDetails::CheckBit0( static_cast< const uint32_t >( Value ) );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline int16_t BitScanBackward( const int16_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanBackwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_clz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanReverse( &Position, static_cast< unsigned long >( Value ) );
						return static_cast< int16_t >( Position );
					#else
						return ImplementationDetails::CheckBit0( static_cast< const uint16_t >( Value ) );
					#endif
				}
			}

			MAX_PURE_DEFINITION( MAX_BITSCAN_CONSTEXPR inline int8_t BitScanBackward( const int8_t Value ) MAX_DOES_NOT_THROW )
			{
				if( max::Compiling::Polyfills::IsConstantEvaluated() )
				{
					return BitScanBackwardConstexpr( Value );
				} else {
					#if defined( MAX_COMPILER_CLANG ) || defined( MAX_COMPILER_GCC )
						return __builtin_clz( Value );
					#elif defined( MAX_COMPILER_VC )
						unsigned long Position = 0;
						_BitScanReverse( &Position, static_cast< unsigned long >( Value ) );
						return static_cast< int8_t >( Position );
					#else
						return ImplementationDetails::CheckBit0( static_cast< const uint8_t >( Value ) );
					#endif
				}
			}

			// These functions will continue a call chain until all bits are checked.
			MAX_PURE_DEFINITION( constexpr inline uint64_t BitScanForwardConstexpr( const uint64_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( Value );
			}

			MAX_PURE_DEFINITION( constexpr inline uint32_t BitScanForwardConstexpr( const uint32_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( Value );
			}

			MAX_PURE_DEFINITION( constexpr inline uint16_t BitScanForwardConstexpr( const uint16_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( Value );
			}

			MAX_PURE_DEFINITION( constexpr inline uint8_t BitScanForwardConstexpr( const uint8_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( Value );
			}

			MAX_PURE_DEFINITION( constexpr inline int64_t BitScanForwardConstexpr( const int64_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( static_cast< const uint64_t >( Value ) );
			}

			MAX_PURE_DEFINITION( constexpr inline int32_t BitScanForwardConstexpr( const int32_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( static_cast< const uint32_t >( Value ) );
			}

			MAX_PURE_DEFINITION( constexpr inline int16_t BitScanForwardConstexpr( const int16_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( static_cast< const uint16_t >( Value ) );
			}

			MAX_PURE_DEFINITION( constexpr inline int8_t BitScanForwardConstexpr( const int8_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( static_cast< const uint8_t >( Value ) );
			}

			// TODO: Add the backwards bitscans
			MAX_PURE_DEFINITION( constexpr inline uint64_t BitScanBackwardConstexpr( const uint64_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( Value );
			}

			MAX_PURE_DEFINITION( constexpr inline uint32_t BitScanBackwardConstexpr( const uint32_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( Value );
			}

			MAX_PURE_DEFINITION( constexpr inline uint16_t BitScanBackwardConstexpr( const uint16_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( Value );
			}

			MAX_PURE_DEFINITION( constexpr inline uint8_t BitScanBackwardConstexpr( const uint8_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( Value );
			}

			MAX_PURE_DEFINITION( constexpr inline int64_t BitScanBackwardConstexpr( const int64_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( static_cast< const uint64_t >( Value ) );
			}

			MAX_PURE_DEFINITION( constexpr inline int32_t BitScanBackwardConstexpr( const int32_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( static_cast< const uint32_t >( Value ) );
			}

			MAX_PURE_DEFINITION( constexpr inline int16_t BitScanBackwardConstexpr( const int16_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( static_cast< const uint16_t >( Value ) );
			}

			MAX_PURE_DEFINITION( constexpr inline int8_t BitScanBackwardConstexpr( const int8_t Value ) MAX_DOES_NOT_THROW )
			{
				return ImplementationDetails::CheckBit0( static_cast< const uint8_t >( Value ) );
			}

			namespace ImplementationDetails
			{

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit0( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1 ) ? 0 : CheckBit1( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit1( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10 ) ? 1 : CheckBit2( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit2( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100 ) ? 2 : CheckBit3( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit3( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000 ) ? 3 : CheckBit4( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit4( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000 ) ? 4 : CheckBit5( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit5( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000 ) ? 5 : CheckBit6( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit6( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000 ) ? 6 : CheckBit7( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit7( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000 ) ? 7 : CheckBit8( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit8( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000 ) ? 8 : CheckBit9( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit9( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000 ) ? 9 : CheckBit10( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit10( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000 ) ? 10 : CheckBit11( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit11( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000 ) ? 11 : CheckBit12( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit12( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000 ) ? 12 : CheckBit13( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit13( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000 ) ? 13 : CheckBit14( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit14( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000 ) ? 14 : CheckBit15( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit15( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000 ) ? 15 : CheckBit16( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit16( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000 ) ? 16 : CheckBit17( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit17( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000 ) ? 17 : CheckBit18( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit18( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000 ) ? 18 : CheckBit19( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit19( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000 ) ? 19 : CheckBit20( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit20( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000 ) ? 20 : CheckBit21( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit21( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000 ) ? 21 : CheckBit22( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit22( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000 ) ? 22 : CheckBit23( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit23( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000 ) ? 23 : CheckBit24( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit24( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000 ) ? 24 : CheckBit25( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit25( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000 ) ? 25 : CheckBit26( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit26( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000 ) ? 26 : CheckBit27( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit27( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000'0000 ) ? 27 : CheckBit28( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit28( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000'0000 ) ? 28 : CheckBit29( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit29( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000'0000 ) ? 29 : CheckBit30( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit30( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000'0000 ) ? 30 : CheckBit31( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit31( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000'0000'0000 ) ? 31 : CheckBit32( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit32( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 32 : CheckBit33( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit33( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 33 : CheckBit34( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit34( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 34 : CheckBit35( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit35( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 35 : CheckBit36( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit36( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 36 : CheckBit37( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit37( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 37 : CheckBit38( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit38( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 38 : CheckBit39( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit39( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 39 : CheckBit40( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit40( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 40 : CheckBit41( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit41( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 41 : CheckBit42( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit42( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 42 : CheckBit43( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit43( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 43 : CheckBit44( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit44( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 44 : CheckBit45( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit45( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 45 : CheckBit46( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit46( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 46 : CheckBit47( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit47( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 47 : CheckBit48( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit48( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 48 : CheckBit49( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit49( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 49 : CheckBit50( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit50( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 50 : CheckBit51( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit51( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 51 : CheckBit52( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit52( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 52 : CheckBit53( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit53( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 53 : CheckBit54( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit54( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 54 : CheckBit55( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit55( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 55 : CheckBit56( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit56( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 56 : CheckBit57( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit57( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 57 : CheckBit58( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit58( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 58 : CheckBit59( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit59( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 59 : CheckBit60( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit60( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 60 : CheckBit61( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit61( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 61 : CheckBit62( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit62( const uint64_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000'0000 ) ? 62 : CheckBit63( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit63( const uint64_t /* Mask */ ) MAX_DOES_NOT_THROW )
				{
					// If we got here, this bit must be set.
					// (Behavior is undefined if no bits are set.)
					return 63;
				}


				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit0( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1 ) ? 0 : CheckBit1( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit1( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10 ) ? 1 : CheckBit2( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit2( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100 ) ? 2 : CheckBit3( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit3( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000 ) ? 3 : CheckBit4( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit4( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000 ) ? 4 : CheckBit5( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit5( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000 ) ? 5 : CheckBit6( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit6( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000 ) ? 6 : CheckBit7( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit7( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000 ) ? 7 : CheckBit8( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit8( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000 ) ? 8 : CheckBit9( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit9( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000 ) ? 9 : CheckBit10( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit10( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000 ) ? 10 : CheckBit11( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit11( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000 ) ? 11 : CheckBit12( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit12( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000 ) ? 12 : CheckBit13( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit13( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000 ) ? 13 : CheckBit14( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit14( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000 ) ? 14 : CheckBit15( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit15( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000 ) ? 15 : CheckBit16( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit16( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000 ) ? 16 : CheckBit17( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit17( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000 ) ? 17 : CheckBit18( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit18( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000 ) ? 18 : CheckBit19( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit19( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000 ) ? 19 : CheckBit20( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit20( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000 ) ? 20 : CheckBit21( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit21( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000 ) ? 21 : CheckBit22( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit22( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000 ) ? 22 : CheckBit23( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit23( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000 ) ? 23 : CheckBit24( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit24( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000 ) ? 24 : CheckBit25( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit25( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000 ) ? 25 : CheckBit26( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit26( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000 ) ? 26 : CheckBit27( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit27( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000'0000'0000'0000'0000 ) ? 27 : CheckBit28( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit28( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000'0000'0000'0000'0000 ) ? 28 : CheckBit29( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit29( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000'0000'0000'0000'0000 ) ? 29 : CheckBit30( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit30( const uint32_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000'0000'0000'0000'0000 ) ? 30 : CheckBit31( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit31( const uint32_t /* Mask */ ) MAX_DOES_NOT_THROW )
				{
					// If we got here, this bit must be set.
					// (Behavior is undefined if no bits are set.)
					return 31;
				}


				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit0( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1 ) ? 0 : CheckBit1( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit1( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10 ) ? 1 : CheckBit2( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit2( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100 ) ? 2 : CheckBit3( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit3( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000 ) ? 3 : CheckBit4( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit4( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000 ) ? 4 : CheckBit5( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit5( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000 ) ? 5 : CheckBit6( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit6( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000 ) ? 6 : CheckBit7( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit7( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000 ) ? 7 : CheckBit8( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit8( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000 ) ? 8 : CheckBit9( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit9( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000 ) ? 9 : CheckBit10( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit10( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000 ) ? 10 : CheckBit11( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit11( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000'0000'0000 ) ? 11 : CheckBit12( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit12( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000'0000'0000 ) ? 12 : CheckBit13( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit13( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000'0000'0000 ) ? 13 : CheckBit14( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit14( const uint16_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000'0000'0000 ) ? 14 : CheckBit15( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit15( const uint16_t /* Mask */ ) MAX_DOES_NOT_THROW )
				{
					// If we got here, this bit must be set.
					// (Behavior is undefined if no bits are set.)
					return 15;
				}


				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit0( const uint8_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1 ) ? 0 : CheckBit1( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit1( const uint8_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10 ) ? 1 : CheckBit2( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit2( const uint8_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100 ) ? 2 : CheckBit3( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit3( const uint8_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1000 ) ? 3 : CheckBit4( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit4( const uint8_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b1'0000 ) ? 4 : CheckBit5( Mask ); //-V112
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit5( const uint8_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b10'0000 ) ? 5 : CheckBit6( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit6( const uint8_t Mask ) MAX_DOES_NOT_THROW )
				{
					return ( Mask & 0b100'0000 ) ? 6 : CheckBit7( Mask );
				}

				MAX_PURE_DEFINITION( constexpr inline uint8_t CheckBit7( const uint8_t /* Mask */ ) MAX_DOES_NOT_THROW )
				{
					// If we got here, this bit must be set.
					// (Behavior is undefined if no bits are set.)
					return 7;
				}

			} // namespace ImplementationDetails

		} // namespace Algorithms
	} // namespace v0
} // namespace max
