Quickstart

Build LLVM

```sh
mkdir build && cd build
cmake -G Ninja ../llvm \
-DLLVM_ENABLE_PROJECTS="mlir;clang;llvm" \
-DCMAKE_BUILD_TYPE=Debug \
-DLLVM_TARGETS_TO_BUILD="host" \
-DCMAKE_INSTALL_PREFIX=../llvm-install \
-DLLVM_ENABLE_ASSERTIONS=ON \
-DLLVM_INSTALL_UTILS=ON

ninja install
```

Build SparkIR

```sh
mkdir build && cd build
cmake -G Ninja .. -DLLVM_INSTALL_DIR=../llvm-project/llvm-install/ \
                  -DCMAKE_PREFIX_PATH=../llvm-project/llvm-install/ \
                  -DLLVM_EXTERNAL_LIT=/use/loca/bin/lit
ninja
```
