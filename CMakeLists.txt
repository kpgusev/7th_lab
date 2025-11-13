cmake_minimum_required(VERSION 3.15)
project(7th_lab)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
include(CompilerSettings)
include(Dependencies)

add_executable(${PROJECT_NAME} src/main.cpp src/operations.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include)
