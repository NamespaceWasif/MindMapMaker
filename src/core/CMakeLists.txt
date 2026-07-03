# CMake Targets for Core sub-project

# Making the library
add_library(internal_core
  private/renderer.c

  include/core/core.h
)

# Now the include dirs
target_include_directories(
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/private
)

# Optional external vendors
