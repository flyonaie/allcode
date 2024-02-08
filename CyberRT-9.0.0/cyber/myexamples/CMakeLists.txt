cmake_minimum_required(VERSION 3.12)

project(myexamples VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 14)
set(TARGET_NAME ${PROJECT_NAME})
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug) # Debug/Release
endif()

enable_language(ASM)
message("----------------------: " ${CMAKE_MODULE_PATH})
include(CMakePackageConfigHelpers)
include(GNUInstallDirs)

message("cmake_module_path: " ${CMAKE_MODULE_PATH})
find_package(Threads REQUIRED)
find_package(PkgConfig REQUIRED)
find_package(fastrtps REQUIRED)
find_package(fastcdr REQUIRED)
find_package(Poco REQUIRED COMPONENTS Foundation)
find_package(glog REQUIRED)
find_package(Protobuf REQUIRED)
# find_package(Python REQUIRED COMPONENTS Interpreter Development)
pkg_check_modules(Python REQUIRED python3)
pkg_check_modules(Uuid REQUIRED uuid)
pkg_check_modules(Gflags REQUIRED gflags)
pkg_check_modules(NlohmannJson REQUIRED nlohmann_json)

# set(Python_VERSION "${Python_VERSION_MAJOR}.${Python_VERSION_MINOR}")
set(Python_VERSION "${Python_VERSION}")
set(CYBER_PYTHON_PATH "lib/python${Python_VERSION}/site-packages/cyber/python")
set(CYBER_PYTHON_INTERNAL_PATH "${CYBER_PYTHON_PATH}/internal")
set(CYBER_PYTHON_PROTOBUF_PATH "lib/python${Python_VERSION}/site-packages/cyber/proto")
set(CYBER_MSGS_CACHE ON CACHE BOOL "generate cyber proto msgs flag.")
# set(CYBER_PYTHON_LIB "/usr/lib/python3.6/config-3.6m-x86_64-linux-gnu/libpython3.6.so")

if(NOT DEFINED glog_LIBRARIES)
  set(glog_LIBRARIES "glog")
endif()

if(NOT DEFINED Uuid_LIBRARIES)
  set(Uuid_LIBRARIES "uuid")
endif()

set(DEPENCENCY_INCLUDE_DIRS
  ${fastcdr_INCLUDE_DIR}
  ${fastrtps_INCLUDE_DIR}
  ${Protobuf_INCLUDE_DIRS}
  ${Python_INCLUDE_DIRS}
  ${Uuid_INCLUDE_DIRS}
  ${glog_INCLUDE_DIRS}
  ${Gflags_INCLUDE_DIRS}
  ${NlohmannJson_INCLUDE_DIRS}
)

set(DEPENCENCY_LIB_DIRS
  ${fastcdr_LIB_DIR}
  ${fastrtps_LIB_DIR}
  ${Protobuf_LIBRARIES_DIRS}
  ${Python_LIBRARIES_DIRS}
  ${Uuid_LIBRARIES_DIRS}
  ${glog_LIBRARY_DIRS}
  ${Gflags_LIBRARY_DIRS}
  ${NlohmannJson_LIBRARY_DIRS}
)

set(DEPENCENCY_LIBS
  ${glog_LIBRARIES}
  ${Gflags_LIBRARIES}
)

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${DEPENCENCY_INCLUDE_DIRS}
)

link_directories(${DEPENCENCY_LIB_DIRS})

# file(GLOB CYBER_SRCS
#     "cyber/myexamples/*.cc"
# )


add_executable(shm_transmitter_main shm_transmitter_main.cc)
target_link_libraries(shm_transmitter_main
    cyber
    pthread
)
# target_link_libraries(${TARGET_NAME}
#     ${glog_LIBRARIES}
#     ${Gflags_LIBRARIES}
#     ${NlohmannJson_LIBRARIES}
#     ${Protobuf_LIBRARIES}
#     ${Uuid_LIBRARIES}
#     ${Poco_LIBRARIES}
#     fastrtps
#     fastcdr
#     atomic
# )
