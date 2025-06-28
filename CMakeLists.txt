cmake_minimum_required(VERSION 3.13.4)
project(SparkIR LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20 CACHE STRING "C++ standard to conform to")
set(CMAKE_CXX_STANDARD_REQUIRED YES)

# set path to LLVM/MLIR
set(LLVM_DIR "${LLVM_INSTALL_DIR}/lib/cmake/llvm")
set(MLIR_DIR "${LLVM_INSTALL_DIR}/lib/cmake/mlir")

