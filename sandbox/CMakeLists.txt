# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.12)

# Set the project name and specify the language (C++)
project(Sandbox)

# Add the source files for the sandbox
file(GLOB_RECURSE SANDBOX_SOURCES src/*.cpp)

# Set the build output directory for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Find the engine shared library
find_library(ENGINE_LIB engine PATHS ${CMAKE_SOURCE_DIR}/../engine/build/bin REQUIRED)

# Add the executable for the sandbox
add_executable(sandbox ${SANDBOX_SOURCES})

# Set the C++ standard (adjust if needed)
set_target_properties(sandbox PROPERTIES CXX_STANDARD 11)

# Include the engine's header directory
target_include_directories(sandbox PRIVATE ${CMAKE_SOURCE_DIR}/../engine/src)

# Link against the engine shared library
target_link_libraries(sandbox PRIVATE ${ENGINE_LIB})
