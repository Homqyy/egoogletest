cmake_minimum_required(VERSION 3.5)

if (POLICY CMP0048)
  cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

project(egtest VERSION 0.0.1 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 14)

add_library(egtest egtest.cpp)
