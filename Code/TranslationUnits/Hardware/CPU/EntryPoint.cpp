#include <iostream>
#include "CPUID.hpp"
#include "CacheInfo.hpp"
#include "TLB.hpp"
#include "CacheLevel.hpp"
#include "TraceCache.hpp"
#include "Prefetch.hpp"

namespace
{

	std::string ContentTypeStringRepresentation( const max::CPU::CacheInfo::CacheContentType ContentType ) noexcept
	{
		using max::CPU::CacheInfo;

		switch( ContentType )
		{
			case CacheInfo::CacheContentType::Instruction:
				return "Instruction";
			case CacheInfo::CacheContentType::Data:
				return "Data";
			case CacheInfo::CacheContentType::Unified:
				return "Unified";
			default:
				return "";
		}
	}

	std::string AssociativityStringRepresentation( const max::CPU::Associativity & AssociativityInfo ) noexcept
	{
		if( AssociativityInfo.IsUnknown() ) {
			return "Unknown associativity";
		} else if( AssociativityInfo.IsFullyAssociative() ) {
			return "Fully associative";
		} else {
			return std::to_string( AssociativityInfo.WaysOfAssociativity() ) + "-way set associative";
		}
	}

} // anonymous namespace

int main() noexcept
{
	auto CPU = max::CPU::MakeCPUID();

	auto CacheDetails = CPU.CacheDetails();
	for( const auto & CurrentCacheDetail : CacheDetails )
	{
		using max::CPU::CacheInfo;

		switch( CurrentCacheDetail->Type )
		{
		case CacheInfo::CacheInfoType::TLB:
			{
				const auto * DerivedType = reinterpret_cast< max::CPU::TLB * >( CurrentCacheDetail.get() );
				std::cout << "TLB: ";

				std::cout << ContentTypeStringRepresentation( DerivedType->ContentType ) << ", ";

				for( const auto & CurrentConfiguration : DerivedType->Configurations )
				{
					std::cout << AssociativityStringRepresentation( CurrentConfiguration.AssociativityInfo ) << ", ";

					std::cout << CurrentConfiguration.EntryCount << " entries" << std::endl;


					if( CurrentConfiguration.PageSizesInBytes.size() > 0 )
					{
						std::cout << "\tPage sizes in bytes: ";
					}
					for( const auto & CurrentPageSizeInBytes : CurrentConfiguration.PageSizesInBytes )
					{
						std::cout << CurrentPageSizeInBytes << ", ";
					}
					std::cout << std::endl;
				}
			}
			break;
		case CacheInfo::CacheInfoType::CacheLevel:
			{
				const auto * DerivedType = reinterpret_cast< max::CPU::CacheLevel * >( CurrentCacheDetail.get() );
				std::cout << "Cache level: " << DerivedType->Level << ", ";
				std::cout << ContentTypeStringRepresentation( DerivedType->ContentType ) << ", ";
				std::cout << AssociativityStringRepresentation( DerivedType->AssociativityInfo ) << ", ";
				std::cout << DerivedType->SizeInBytes << ", cache line in bytes: " << DerivedType->CacheLineSizeInBytes << ", ";
				std::cout << "cache lines per sector: " << DerivedType->CacheLinesPerSector << std::endl;
			}
			break;
		case CacheInfo::CacheInfoType::TraceCache:
			{
				const auto * DerivedType = reinterpret_cast< max::CPU::TraceCache * >( CurrentCacheDetail.get() );
				std::cout << "Trace cache: " << DerivedType->SizeInMicroOperations << " micro operations, ";
				std::cout << AssociativityStringRepresentation( DerivedType->AssociativityInfo ) << std::endl;
			}
			break;
		case CacheInfo::CacheInfoType::Prefetch:
			{
				const auto * DerivedType = reinterpret_cast< max::CPU::Prefetch * >( CurrentCacheDetail.get() );
				std::cout << "Prefetch size in bytes: " << DerivedType->SizeInBytes << std::endl;
			}
			break;
		default:
			break;
		}
	}
	std::cout << "Vendor: "                     << CPU.Vendor()                 << std::endl;
	std::cout << "Stepping: "                   << CPU.Stepping()               << std::endl;
	std::cout << "Model: "                      << CPU.Model()                  << std::endl;
	std::cout << "Family: "                     << CPU.Family()                 << std::endl;
	std::cout << "Processor Type: "             << CPU.ProcessorType()          << std::endl;
	std::cout << "Brand Index: "                << CPU.BrandIndex()             << std::endl;
	std::cout << "CLFLUSH line size in bytes: " << CPU.CLFLUSHLineSizeInBytes() << std::endl;
	std::cout << "Maximum addressable IDs: "    << CPU.MaximumAddressableIDs()  << std::endl;
	std::cout << "Initial APIC ID: "            << CPU.InitialAPICID()          << std::endl;
	std::cout << "SSE3: "                       << CPU.SupportsSSE3()           << std::endl;
	std::cout << "PCLMULQDQ: "                  << CPU.SupportsPCLMULQDQ()      << std::endl;
	std::cout << "DTES64: "                     << CPU.SupportsDTES64()         << std::endl;
	std::cout << "MONITOR: "                    << CPU.SupportsMONITOR()        << std::endl;
	std::cout << "DSCPL: "                      << CPU.SupportsDSCPL()          << std::endl;
	std::cout << "VMX: "                        << CPU.SupportsVMX()            << std::endl;
	std::cout << "SMX: "                        << CPU.SupportsSMX()            << std::endl;
	std::cout << "EST: "                        << CPU.SupportsEST()            << std::endl;
	std::cout << "TM2: "                        << CPU.SupportsTM2()            << std::endl;
	std::cout << "SSSE3: "                      << CPU.SupportsSSSE3()          << std::endl;
	std::cout << "CNXTID: "                     << CPU.SupportsCNXTID()         << std::endl;
	std::cout << "SDBG: "                       << CPU.SupportsSDBG()           << std::endl;
	std::cout << "FMA: "                        << CPU.SupportsFMA()            << std::endl;
	std::cout << "CX16: "                       << CPU.SupportsCX16()           << std::endl;
	std::cout << "XTPR: "                       << CPU.SupportsXTPR()           << std::endl;
	std::cout << "PDCM: "                       << CPU.SupportsPDCM()           << std::endl;
	std::cout << "PCID: "                       << CPU.SupportsPCID()           << std::endl;
	std::cout << "DCA: "                        << CPU.SupportsDCA()            << std::endl;
	std::cout << "SSE4.1: "                     << CPU.SupportsSSE41()          << std::endl;
	std::cout << "SSE4.2: "                     << CPU.SupportsSSE42()          << std::endl;
	std::cout << "X2APIC: "                     << CPU.SupportsX2APIC()         << std::endl;
	std::cout << "MOVBE: "                      << CPU.SupportsMOVBE()          << std::endl;
	std::cout << "POPCNT: "                     << CPU.SupportsPOPCNT()         << std::endl;
	std::cout << "TSCDeadline: "                << CPU.SupportsTSCDeadline()    << std::endl;
	std::cout << "AES: "                        << CPU.SupportsAES()            << std::endl;
	std::cout << "XSAVE: "                      << CPU.SupportsXSAVE()          << std::endl;
	std::cout << "OSXSAVE: "                    << CPU.SupportsOSXSAVE()        << std::endl;
	std::cout << "AVX: "                        << CPU.SupportsAVX()            << std::endl;
	std::cout << "F16C: "                       << CPU.SupportsF16C()           << std::endl;
	std::cout << "RDRAND: "                     << CPU.SupportsRDRAND()         << std::endl;
	std::cout << "Hypervisor: "                 << CPU.SupportsHypervisor()     << std::endl;
	std::cout << "FPU: "                        << CPU.SupportsFPU()            << std::endl;
	std::cout << "VME: "                        << CPU.SupportsVME()            << std::endl;
	std::cout << "DE: "                         << CPU.SupportsDE()             << std::endl;
	std::cout << "PSE: "                        << CPU.SupportsPSE()            << std::endl;
	std::cout << "TSC: "                        << CPU.SupportsTSC()            << std::endl;
	std::cout << "MSR: "                        << CPU.SupportsMSR()            << std::endl;
	std::cout << "PAE: "                        << CPU.SupportsPAE()            << std::endl;
	std::cout << "MCE: "                        << CPU.SupportsMCE()            << std::endl;
	std::cout << "CX8: "                        << CPU.SupportsCX8()            << std::endl;
	std::cout << "APIC: "                       << CPU.SupportsAPIC()           << std::endl;
	std::cout << "SEP: "                        << CPU.SupportsSEP()            << std::endl;
	std::cout << "MTRR: "                       << CPU.SupportsMTRR()           << std::endl;
	std::cout << "PGE: "                        << CPU.SupportsPGE()            << std::endl;
	std::cout << "MCA: "                        << CPU.SupportsMCA()            << std::endl;
	std::cout << "CMOV: "                       << CPU.SupportsCMOV()           << std::endl;
	std::cout << "PAT: "                        << CPU.SupportsPAT()            << std::endl;
	std::cout << "PSE36: "                      << CPU.SupportsPSE36()          << std::endl;
	std::cout << "PSN: "                        << CPU.SupportsPSN()            << std::endl;
	std::cout << "CLFSH: "                      << CPU.SupportsCLFSH()          << std::endl;
	std::cout << "DS: "                         << CPU.SupportsDS()             << std::endl;
	std::cout << "ACPI: "                       << CPU.SupportsACPI()           << std::endl;
	std::cout << "MMX: "                        << CPU.SupportsMMX()            << std::endl;
	std::cout << "FXSR: "                       << CPU.SupportsFXSR()           << std::endl;
	std::cout << "SSE: "                        << CPU.SupportsSSE()            << std::endl;
	std::cout << "SSE2: "                       << CPU.SupportsSSE2()           << std::endl;
	std::cout << "SS: "                         << CPU.SupportsSS()             << std::endl;
	std::cout << "HTT: "                        << CPU.SupportsHTT()            << std::endl;
	std::cout << "TM: "                         << CPU.SupportsTM()             << std::endl;
	std::cout << "IA64: "                       << CPU.SupportsIA64()           << std::endl;
	std::cout << "PBE: "                        << CPU.SupportsPBE()            << std::endl;

	system("pause");

	return 0;
}