IS_64_BIT = false
ifeq ($(shell getconf LONG_BIT), 64)
	IS_64_BIT = true
else
	IS_64_BIT = false
endif

IS_X86 = false
IS_ARM = false
ifneq (,$(findstring $(shell uname -m), x86_64 amd64))
	IS_X86 = true
else ifneq (,$(findstring $(shell uname -m), aarch64 arm64)))
	IS_ARM = true
endif

# Default overrides which can be provided by environment variables
ifeq (1, $(64_BIT))
	IS_64_BIT = true
endif
ifeq (1, $(32_BIT))
	IS_64_BIT = false
endif

CXX_SRCS = \
	../../Code/max/Hardware/CPU/Associativity.cpp \
	../../Code/max/Hardware/CPU/CacheInfo.cpp \
	../../Code/max/Hardware/CPU/CacheLevel.cpp \
	../../Code/max/Hardware/CPU/CPUID.cpp \
	../../Code/max/Hardware/CPU/CPUIDSubleafArgumentsAndResult.cpp \
	../../Code/max/Hardware/CPU/Prefetch.cpp \
	../../Code/max/Hardware/CPU/TLB.cpp \
	../../Code/max/Hardware/CPU/TraceCache.cpp \
	../../Code/max/Logging/DoNothingLogger.cpp \
	../../Code/max/Testing/CoutResultPolicy.cpp

ifeq ($(IS_64_BIT), true)
	ifeq ($(IS_X86), true)
		CXX_SRCS += \
			../../Code/max/Hardware/CPU/CPUIDPolicies/X64GCCAssemblyCPUIDPolicy.cpp \
			../../Code/max/Hardware/CPU/IsCPUIDAvailablePolicies/X64GCCAssemblyIsCPUIDAvailablePolicy.cpp
	endif
	ifeq ($(IS_ARM), true)
		CXX_SRCS += \
			../../Code/max/Hardware/CPU/CPUIDPolicies/AArch64CPUIDPolicy.cpp
	endif
else
	CXX_SRCS += \
		../../Code/max/Hardware/CPU/CPUIDPolicies/X86GCCAssemblyCPUIDPolicy.cpp \
		../../Code/max/Hardware/CPU/IsCPUIDAvailablePolicies/X86GCCAssemblyIsCPUIDAvailablePolicy.cpp
endif


CXX_OBJS = $(CXX_SRCS:.cpp=.o)

INCLUDE_PATHS = \
	../../Code
INCLUDE_PATHS_FLAGS = $(foreach d, $(INCLUDE_PATHS), -I$d)

LIBRARY_PATHS = \
	.
LIBRARY_PATHS_FLAGS = $(foreach d, $(LIBRARY_PATHS), -L$d)

AUTOMATED_TEST_CXX_SRCS = \
	../../Code/max/Algorithms/CountZeroesTest.cpp \
	../../Code/max/Algorithms/IsBetweenTest.cpp \
	../../Code/max/Algorithms/SwapEndianTest.cpp \
	../../Code/max/Containers/PointTest.cpp \
	../../Code/max/Containers/RangeTest.cpp \
	../../Code/max/Containers/RectangleTest.cpp \
	../../Code/max/Containers/VectorTest.cpp \
	../../Code/max/Testing/AutomatedTestsEntryPoint.cpp
AUTOMATED_TEST_CXX_OBJS = $(AUTOMATED_TEST_CXX_SRCS:.cpp=.o)

MANUAL_TEST_CXX_SRCS = \
	../../Code/max/Compiling/AliasingOptimizationsTest.cpp \
	../../Code/max/Compiling/ConfigurationTest.cpp \
	../../Code/max/Testing/ManualTestsEntryPoint.cpp
MANUAL_TEST_CXX_OBJS = $(MANUAL_TEST_CXX_SRCS:.cpp=.o)

ifeq ($(IS_64_BIT), true)
	TARGET_BIT_FLAG = -m64
else
	TARGET_BIT_FLAG = -m32
endif

CPPFLAGS += $(INCLUDE_PATHS_FLAGS) -std=c++17 -Werror -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion $(TARGET_BIT_FLAG)
LINKER_FLAGS += $(LIBRARY_PATHS_FLAGS)




all: libmax.a maxAutomatedTests maxManualTests

libmax.a: $(PCH_OBJS) $(CXX_OBJS)
	ar rcs libmax.a $(CXX_OBJS)

maxAutomatedTests: $(AUTOMATED_TEST_CXX_OBJS)
	$(CXX) $(TARGET_BIT_FLAG) -g $(AUTOMATED_TEST_CXX_OBJS) $(LINKER_FLAGS) -lmax -o maxAutomatedTests

maxManualTests: $(MANUAL_TEST_CXX_OBJS)
	$(CXX) $(TARGET_BIT_FLAG) -g $(MANUAL_TEST_CXX_OBJS) $(LINKER_FLAGS) -lmax -o maxManualTests
.cpp.o:
	$(CXX) -g $(CPPFLAGS) -c $< -o $@

clean:
	@- $(RM) libmax.a
	@- $(RM) $(CXX_OBJS)
	@- $(RM) maxAutomatedTests
	@- $(RM) $(AUTOMATED_TEST_CXX_OBJS)
	@- $(RM) maxManualTests
	@- $(RM) $(MANUAL_TEST_CXX_OBJS)

distclean: clean
