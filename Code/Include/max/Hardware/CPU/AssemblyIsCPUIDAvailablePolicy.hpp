#ifndef MAX_CPUID_ASSEMBLYISCPUIDAVAILABLEPOLICY_HPP
#define MAX_CPUID_ASSEMBLYISCPUIDAVAILABLEPOLICY_HPP

namespace max
{
namespace CPU
{

	class AssemblyIsCPUIDAvailablePolicy
	{
	public:

		static bool IsCPUIDAvailable() noexcept;

	};

} // namespace CPU
} // namespace max

#endif // #ifndef MAX_CPUID_ASSEMBLYISCPUIDAVAILABLEPOLICY_HPP