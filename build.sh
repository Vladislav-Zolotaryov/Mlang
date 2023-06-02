conan install . --output-folder=build --build=missing || echo "Conan failed"
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release || echo "CMake prebuild failed"
cmake --build . || echo "CMake build failed"