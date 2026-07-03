# Main CMake Targets for the app #

# The main configs for the app
cmake_minimum_required(3.30)
project(MainApp LANGUAGES C)
set(CMAKE_C_STANDARD 20)

# Linking the vendors AKA third parties
add_subdirectory(vendor/SDL EXCLUDE_FROM_ALL)

# Linking sub-projects
add_subdirectory(src/core)
add_subdirectory(src/renderer)
add_subdirectory(src/app)
