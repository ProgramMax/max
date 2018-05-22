// Copyright 2016, The max Contributors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "AliasingOptimizationsTest.hpp"
#include <max/Compiling/AliasingOptimizations.hpp>
#include <max/Testing/TestSuite.hpp>
#include <iostream>

namespace maxManualTests
{
namespace Compiling
{

	namespace {

		bool UnpureFunction( int * WriteAddress, int * ReadAddress )
		{
			WriteAddress = reinterpret_cast< int * >( 5 );

			return WriteAddress == ReadAddress;
		}

		MAX_PURE_DEFINITION( bool PureFunction( int * WriteAddress, int * ReadAddress ) )
		{
			// In a pure function, we cannot dereference parameters.
			// However, we can still read the value of the pointer itself.
			return WriteAddress == ReadAddress;
		}


		static int Global = 5;

		bool UnpureWithGlobals( int * WriteAddress, int * ReadAddress )
		{
			WriteAddress = reinterpret_cast< int * >( 5 );

			return WriteAddress == ReadAddress && Global == 0;
		}

		MAX_PURE_WITH_GLOBALS_DEFINITION( bool PureWithGlobals( int * WriteAddress, int * ReadAddress ) )
		{
			// In a pure-with-globals function, we cannot dereference parameters.
			// But in this case we can access globals as well.
			WriteAddress = reinterpret_cast< int * >( 5 );

			return ReadAddress == WriteAddress && Global == 0;
		}

		struct Address
		{
			explicit Address( int * Addr )
				: Address_( Addr )
			{
			}

			bool operator ==( const Address& rhs ) const
			{
				return Address_ == rhs.Address_;
			}

			int * Address_ = nullptr;
		};

		struct ReadWriteAddresses
		{
			explicit ReadWriteAddresses( int * ReadAddress, int * WriteAddress )
				: ReadAddress( ReadAddress )
				, WriteAddress( WriteAddress )
			{
			}

			Address ReadAddress;
			Address WriteAddress;
		};

		bool NotSemipure( ReadWriteAddresses * ReadWrite )
		{
			ReadWrite->WriteAddress = Address( reinterpret_cast< int * >( 5 ) );

			return ReadWrite->ReadAddress.Address_ == ReadWrite->WriteAddress.Address_ && Global == 0;		
		}

		MAX_SEMI_PURE_DEFINITION( bool Semipure( ReadWriteAddresses * ReadWrite ) )
		{
			ReadWrite->WriteAddress = Address( reinterpret_cast< int * >( 5 ) );

			return ReadWrite->ReadAddress == ReadWrite->WriteAddress;
		}

	} // anonymous namespace

/*
* [MAX_RESTRICTED_POINTER](MAX_RESTRICTED_POINTER.md)
* [MAX_RESTRICTED_REFERENCE](MAX_RESTRICTED_REFERENCE.md)
* [MAX_RETURNS_RESTRICTED_POINTER](MAX_RETURNS_RESTRICTED_POINTER.md)
*/


	void RunAliasingOptimizationsTestSuite()
	{
		int * Address1 = new int( 5 );
		int * Address2 = new int( 6 );

		char Overlap = 'n';
		std::cin >> Overlap;
		if( Overlap == 'y' )
		{
			delete Address2;
			Address2 = Address1;
		}

		std::cout << UnpureFunction( Address1, Address2 );
		std::cout << PureFunction(   Address1, Address2 );


		std::cin >> Global;

		std::cout << UnpureWithGlobals( Address1, Address2 );
		std::cout << PureWithGlobals(   Address1, Address2 );

		ReadWriteAddresses ReadWrite( Address1, Address2 );
		std::cout << NotSemipure( & ReadWrite );
		std::cout << Semipure( & ReadWrite );

		delete Address1;
		if( Overlap != 'y' )
		{
			delete Address2;
		}
	}

} // namespace Compiling
} // namespace maxManualTests
