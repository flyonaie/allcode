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
message("### include_directories: ${CMAKE_CURRENT_SOURCE_DIR}")
include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/../
  ${CMAKE_CURRENT_SOURCE_DIR}/
  ${CMAKE_CURRENT_SOURCE_DIR}/base/
)

##--------------------- Source files ---------------------------------------##
file(GLOB_RECURSE LIB_SRC
    ./*.cc
    ./base/*.cc
)

# Build demo executable
add_executable(demo base/main.cc)

##--------------------- Build unit tests -----------------------------------##
option(CMAKE_TEMPLATE_ENABLE_TEST "Whether to enable unit tests" OFF)
if (CMAKE_TEMPLATE_ENABLE_TEST)
    message(STATUS "Unit tests enabled")
    enable_testing()
    add_subdirectory(third_party/googletest-release-1.10.0 EXCLUDE_FROM_ALL)
    include_directories(third_party/googletest-release-1.10.0/googletest/include)

    add_executable(test_hello base/hello_test.cc)
    target_link_libraries(test_hello gtest gtest_main)
    add_test(NAME test_hello COMMAND test_hello)

    add_executable(test_atomic_hash_map base/atomic_hash_map_test.cc)
    target_link_libraries(test_atomic_hash_map gtest gtest_main)
    add_test(NAME test_atomic_hash_map COMMAND test_atomic_hash_map)

    add_executable(test_atomic_hash_map1 base/atomic_hash_map_test1.cc)
    target_link_libraries(test_atomic_hash_map1 gtest gtest_main)
    add_test(NAME test_atomic_hash_map1 COMMAND test_atomic_hash_map1)

    add_executable(test_signal base/signal_test.cc)
    target_link_libraries(test_signal gtest gtest_main)
    add_test(NAME test_signal COMMAND test_signal)


endif()

