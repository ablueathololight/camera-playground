cmake_minimum_required(VERSION 3.26.0)

project(camera-playground LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_OBJCXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/texture-view/src/main/cpp")