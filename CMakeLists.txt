cmake_minimum_required(VERSION 3.13.4)
project(SparkIR LANGUAGES CXX C)

# cpp standard
set(CMAKE_CXX_STANDARD 17 CACHE STRING "C++ standard to conform to")
set(CMAKE_CXX_STANDARD_REQUIRED YES)

# set path to LLVM/MLIR
set(LLVM_DIR "${LLVM_INSTALL_DIR}/lib/cmake/llvm")
set(MLIR_DIR "${LLVM_INSTALL_DIR}/lib/cmake/mlir")

# find required packages
find_package(LLVM REQUIRED CONFIG)
find_package(MLIR REQUIRED CONFIG)

# add LLVM and MLIR CMake modules
list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")
list(APPEND CMAKE_MODULE_PATH "${MLIR_CMAKE_DIR}")

# add CMake commands
include(AddLLVM)
include(AddMLIR)
include(HandleLLVMOptions)
include(TableGen)

# set source directory
set(SPARKIR_SOURCE_DIR ${PROJECT_SOURCE_DIR})
set(SPARKIR_BINARY_DIR ${PROJECT_BINARY_DIR})
include_directories(${LLVM_INCLUDE_DIRS})
include_directories(${MLIR_INCLUDE_DIRS})
include_directories(${SPARKIR_SOURCE_DIR}/include)
include_directories(${SPARKIR_BINARY_DIR}/include)
link_directories(${LLVM_BUILD_LIBRARY_DIR})
add_definitions(${LLVM_DEFINITIONS})

add_subdirectory(include)
add_subdirectory(lib)
add_subdirectory(tools)
add_subdirectory(test)

