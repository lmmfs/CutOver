# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.12)

# Set the project name and specify the language (C++)
project(CutOver)

# Add the source files for the engine
file(GLOB_RECURSE ENGINE_SOURCES src/*.cpp)

# Add the include directory for the engine
include_directories(include)

# Set the build output directory for shared libraries
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Define your export macro (CO_EXPORT in this case)
set(EXPORT_MACRO CO_EXPORT)

# Create a shared library for the engine
add_library(engine SHARED ${ENGINE_SOURCES})

# Set the C++ standard (adjust if needed)
set_target_properties(engine PROPERTIES CXX_STANDARD 11)

# Add the CO_EXPORT definition as a compile flag
target_compile_definitions(engine PRIVATE ${EXPORT_MACRO})

# Add any additional libraries or flags if needed
target_link_libraries(engine PUBLIC dl glfw)

# Optionally, you can install the shared library to a system location
install(TARGETS engine DESTINATION /usr/local/lib)