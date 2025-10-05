Quickstart

Build LLVM

```sh
mkdir build && cd build
cmake -G Ninja ../llvm \
-DLLVM_ENABLE_PROJECTS="mlir;clang;llvm" \
-DCMAKE_BUILD_TYPE=Debug \
-DLLVM_TARGETS_TO_BUILD="X86" \
-DLLVM_ENABLE_ASSERTIONS=ON \

ninja install
```

Build SparkIR

```sh
mkdir build && cd build
cmake -G Ninja .. -DLLVM_INSTALL_DIR=../llvm-project/build/ \
                  -DCMAKE_PREFIX_PATH=../llvm-project/build/ \
                  -DLLVM_EXTERNAL_LIT=/usr/local/bin/lit
ninja
```
