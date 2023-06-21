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

LIBRARY = Build/libmax.a

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

CXX_OBJS = $(patsubst ../../Code/%.cpp,Build/Objects/%.o,$(CXX_SRCS))


INCLUDE_PATHS = \
	../../Code
INCLUDE_PATHS_FLAGS = $(foreach d, $(INCLUDE_PATHS), -I$d)

LIBRARY_PATHS = \
	.
LIBRARY_PATHS_FLAGS = $(foreach d, $(LIBRARY_PATHS), -L$d)


AUTOMATED_TEST_PROGRAM = Build/maxAutomatedTests

AUTOMATED_TEST_CXX_SRCS = \
	../../Code/max/Algorithms/CountZeroesTest.cpp \
	../../Code/max/Algorithms/IsBetweenTest.cpp \
	../../Code/max/Algorithms/SwapEndianTest.cpp \
	../../Code/max/Containers/PointTest.cpp \
	../../Code/max/Containers/RangeTest.cpp \
	../../Code/max/Containers/RectangleTest.cpp \
	../../Code/max/Containers/VectorTest.cpp \
	../../Code/max/Testing/AutomatedTestsEntryPoint.cpp
AUTOMATED_TEST_CXX_OBJS = $(patsubst ../../Code/%.cpp,Build/Objects/%.o,$(AUTOMATED_TEST_CXX_SRCS))


MANUAL_TEST_PROGRAM = Build/maxManualTests

MANUAL_TEST_CXX_SRCS = \
	../../Code/max/Compiling/AliasingOptimizationsTest.cpp \
	../../Code/max/Compiling/ConfigurationTest.cpp \
	../../Code/max/Testing/ManualTestsEntryPoint.cpp
MANUAL_TEST_CXX_OBJS = $(patsubst ../../Code/%.cpp,Build/Objects/%.o,$(MANUAL_TEST_CXX_SRCS))

ifeq ($(IS_64_BIT), true)
	TARGET_BIT_FLAG = -m64
else
	TARGET_BIT_FLAG = -m32
endif

CPPFLAGS += $(INCLUDE_PATHS_FLAGS) -std=c++17 -Werror -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion $(TARGET_BIT_FLAG)
LINKER_FLAGS += $(LIBRARY_PATHS_FLAGS)




all: $(LIBRARY) $(AUTOMATED_TEST_PROGRAM) $(MANUAL_TEST_PROGRAM)

$(LIBRARY): $(PCH_OBJS) $(CXX_OBJS)
	ar rcs libmax.a $(CXX_OBJS)

$(CXX_OBJS): $(CXX_SRCS)
	mkdir -p $(dir $@)
	$(CXX) -g $(CPPFLAGS) -c $(patsubst Build/Objects/%.o,../../Code/%.cpp,$@) -o $@

$(AUTOMATED_TEST_PROGRAM): $(AUTOMATED_TEST_CXX_OBJS)
	$(CXX) $(TARGET_BIT_FLAG) -g $(AUTOMATED_TEST_CXX_OBJS) $(LINKER_FLAGS) -lmax -o maxAutomatedTests

$(AUTOMATED_TEST_CXX_OBJS): $(AUTOMATED_TEST_CXX_SRCS)
	mkdir -p $(dir $@)
	$(CXX) -g $(CPPFLAGS) -c $(patsubst Build/Objects/%.o,../../Code/%.cpp,$@) -o $@

$(MANUAL_TEST_PROGRAM): $(MANUAL_TEST_CXX_OBJS)
	$(CXX) $(TARGET_BIT_FLAG) -g $(MANUAL_TEST_CXX_OBJS) $(LINKER_FLAGS) -lmax -o maxManualTests

$(MANUAL_TEST_CXX_OBJS): $(AUTOMATED_TEST_CXX_SRCS)
	mkdir -p $(dir $@)
	$(CXX) -g $(CPPFLAGS) -c $(patsubst Build/Objects/%.o,../../Code/%.cpp,$@) -o $@

.PHONY: clean
distclean: clean
clean:
	for file in $(LIBRARY) $(CXX_OBJS) $(AUTOMATED_TEST_PROGRAM) $(AUTOMATED_TEST_CXX_OBJS) $(MANUAL_TEST_PROGRAM) $(MANUAL_TEST_CXX_OBJS) ; do \
		rm $${file} ; \
	done
