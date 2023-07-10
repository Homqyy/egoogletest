# egtest

## 项目介绍

这是一个增强`googletest`的项目，提供了一些`googletest`没有的功能。

## 使用

1. 在你的项目中，你可以使用`git submodule`的方式引用这个库：

```bash
git submodule add https://github.com/Homqyy/egoogletest.git
```

2. 在你项目中的`CMakelists.txt`文件中添加如下代码去引用这个库：

```cmake
add_subdirectory(egoogletest)

target_include_directories(test_all PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/egoogletest)

target_link_libraries(test_all PRIVATE GTest::gtest_main egtest your_project_target)
```

3. 在你的测试文件中，你可以使用`egtest.h`头文件来使用这个库提供的功能：

```cpp
#include <egtest.h>
```
