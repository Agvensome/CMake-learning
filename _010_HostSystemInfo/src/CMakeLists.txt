
# access the number of logical cores
cmake_host_system_information(RESULT NumberOfLogicalCores QUERY NUMBER_OF_LOGICAL_CORES )
message(STATUS "NUMBER_OF_LOGICAL_CORES = ${NumberOfLogicalCores}")
# access the number of physical cores
cmake_host_system_information(RESULT NumberOfPhysicalCores QUERY NUMBER_OF_PHYSICAL_CORES)
message(STATUS "NUMBER_OF_PHYSICAL_CORES = ${NumberOfPhysicalCores}")
# access the hostname and the fully qualified domain name
cmake_host_system_information(RESULT HostName QUERY HOSTNAME FQDN)
message(STATUS "HOSTNAME, FQDN = ${HostName}")
# access total virtual memory and available virtual memory
cmake_host_system_information(RESULT VirtualMemory QUERY TOTAL_VIRTUAL_MEMORY AVAILABLE_VIRTUAL_MEMORY)
message(STATUS "TOTAL_VIRTUAL_MEMORY, AVAILABLE_VIRTUAL_MEMORY = ${VirtualMemory}")
# access total physical memory and available physical memory
cmake_host_system_information(RESULT PhysicalMemory QUERY TOTAL_PHYSICAL_MEMORY AVAILABLE_PHYSICAL_MEMORY)
message(STATUS "TOTAL_PHYSICAL_MEMORY, AVAILABLE_PHYSICAL_MEMORY = ${PhysicalMemory}")
# access if machine is 64bits?
cmake_host_system_information(RESULT IS64bit QUERY IS_64BIT)
message(STATUS "IS_64BIT = ${IS64bit}")
# access if processor has float unit?
cmake_host_system_information(RESULT HasFPU QUERY HAS_FPU)
message(STATUS "HAS_FPU = ${HasFPU}")
# access if procesor sopport MultiMedia Extensions(MMX) or MultiMedia Extensions plus
cmake_host_system_information(RESULT MMX QUERY HAS_MMX HAS_MMX_PLUS)
message(STATUS "HAS_MMX, HAS_MMX_PLUS = ${MMX}")
# access the information about Streaming SIMD Extensions(SSE)
cmake_host_system_information(RESULT SSE QUERY HAS_SSE HAS_SSE2 HAS_SSE_FP HAS_SSE_MMX)
message(STATUS "HAS_SSE, HAS_SSE2, HAS_SSE_FP, HAS_SSE_MMX = ${SSE}")
# access if procesor sopport 3DNow instructions or 3DNow plus instructions
cmake_host_system_information(RESULT AMD3DNow QUERY HAS_AMD_3DNOW HAS_AMD_3DNOW_PLUS)
message(STATUS "HAS_AMD_3DNOW, HAS_AMD_3DNOW_PLUS = ${AMD3DNow}")
# access if Intel Itanium architecture can simulate x86
cmake_host_system_information(RESULT IA64 QUERY HAS_IA64)
message(STATUS "HAS_IA64 = ${IA64}")
# access serial number of processor
cmake_host_system_information(RESULT SerialNumber QUERY HAS_SERIAL_NUMBER PROCESSOR_SERIAL_NUMBER)
message(STATUS "HAS_SERIAL_NUMBER, PROCESSOR_SERIAL_NUMBER = ${SerialNumber}")
# access processor name and description
cmake_host_system_information(RESULT Processor QUERY PROCESSOR_NAME PROCESSOR_DESCRIPTION)
message(status "PROCESSOR_NAME, PROCESSOR_DESCRIPTION = ${Processor}")
# access os description
cmake_host_system_information(RESULT OS QUERY OS_NAME OS_RELEASE OS_VERSION OS_PLATFORM)
message(STATUS "OS_NAME, OS_RELEASE, OS_VERSION, OS_PLATFORM = ${OS}")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_executable(HostSystemInfo main.cpp)

