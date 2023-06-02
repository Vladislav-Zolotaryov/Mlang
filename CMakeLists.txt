cmake_minimum_required(VERSION 3.15)
project(mlang CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(ANTLR4-RUNTIME REQUIRED)

add_executable(${PROJECT_NAME} src/mlang.cpp)

set(EXECUTABLE_OUTPUT_PATH "build")

target_include_directories(${PROJECT_NAME} PRIVATE ANTLR4-RUNTIME)
target_link_libraries(${PROJECT_NAME} ANTLR4-RUNTIME)