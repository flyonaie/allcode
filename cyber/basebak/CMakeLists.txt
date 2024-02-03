cmake_minimum_required(VERSION 3.12)
project(CMakeTemplate VERSION 1.0.0 LANGUAGES C CXX DESCRIPTION "A cmake template project")

# Specified the language standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

##--------------------- Compile Options ------------------------------------##
# Configure compile options
add_compile_options(-Wall -Wextra -pedantic -Werror)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pipe -std=c99")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -std=c++11")

# Set build type
# set(CMAKE_BUILD_TYPE Debug)  # Use `cmake -DCMAKE_BUILD_TYPE=Debug` more better
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

# Compile options for Debug variant
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g -O0")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")

# Compile options for Release variant
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O2")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2")

message(STATUS "Compile options for c: ${CMAKE_C_FLAGS}")
message(STATUS "Compile options for c++: ${CMAKE_CXX_FLAGS}")

##--------------------- Global Macros --------------------------------------##
add_definitions(-DDEBUG -DREAL_COOL_ENGINEER)

##--------------------- Include directories --------------------------------##
include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/../
)


##--------------------- Source files ---------------------------------------##
file(GLOB_RECURSE CYBER_BASE_SRC
    "cyber/base/*.cc"
)


# Build demo executable
add_executable(demo main.cc)

##--------------------- Build unit tests -----------------------------------##
option(CMAKE_TEMPLATE_ENABLE_TEST "Whether to enable unit tests" ON)
if (CMAKE_TEMPLATE_ENABLE_TEST)
    message(STATUS "Unit tests enabled")
    enable_testing()
    add_subdirectory(../third_party/googletest-release-1.10.0 EXCLUDE_FROM_ALL)
    include_directories(../third_party/googletest-release-1.10.0/googletest/include)

    add_executable(test_atomic_hash_map atomic_hash_map_test.cc)
    add_executable(test_atomic_rw_lock atomic_rw_lock_test.cc)
    target_link_libraries(test_atomic_hash_map gtest gtest_main)
    target_link_libraries(test_atomic_rw_lock gtest gtest_main)

    add_test(NAME test_atomic_hash_map COMMAND test_atomic_hash_map)
    add_test(NAME test_atomic_rw_lock COMMAND test_atomic_rw_lock)
endif()

