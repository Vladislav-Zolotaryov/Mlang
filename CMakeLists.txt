cmake_minimum_required(VERSION 3.15)
project(mlang CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(mlang src/mlang.cpp)

set(EXECUTABLE_OUTPUT_PATH "bin")

install(
    TARGETS mlang DESTINATION "."
    RUNTIME DESTINATION bin
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)