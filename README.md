Quickstart

```sh
mkdir build && cd build
cmake -G Ninja .. -DLLVM_INSTALL_DIR=../llvm-project/llvm-install/ -DCMAKE_PREFIX_PATH=../llvm-project/llvm-install/
ninja
```
