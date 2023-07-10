# egtest

For Chinese, please refer to [README-zh.md](README-zh.md)

## Project Introduction

This is a project that enhances `googletest`, providing some features that `googletest` does not have.

## Usage

1. In your project, you can reference this library using the `git submodule` method:

```bash
git submodule add https://github.com/Homqyy/egoogletest.git
```

2. Add the following code to the `CMakelists.txt` file in your project to reference this library:

```cmake
add_subdirectory(egoogletest)

target_include_directories(test_all PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/egoogletest)
```

3. In your test files, you can use the `egtest.h` header file to use the features provided by this library:

```cpp
#include <egtest.h>
```
