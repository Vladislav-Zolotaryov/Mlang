set -e

antlr4 -visitor -Dlanguage=Cpp  ./src/parser/Mlang.g4
conan install . --output-folder=build --build=missing
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
cmake --build .