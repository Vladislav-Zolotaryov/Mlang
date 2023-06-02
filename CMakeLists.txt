cmake_minimum_required(VERSION 3.15)
project(mlang CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(antlr4-runtime REQUIRED)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(${PROJECT_NAME} src/mlang.cpp src/parser/MlangParser.cpp src/parser/MlangLexer.cpp src/parser/MlangListener.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE antlr4_static)
target_link_libraries(${PROJECT_NAME} antlr4_static)