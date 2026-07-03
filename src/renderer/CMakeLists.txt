# CMake Targets for Renderer sub-project

# Making the library
add_library(internal_renderer STATIC
  private/renderer.c

  include/renderer/renderer.h
)

# Now the include dirs
target_include_directories(internal_renderer
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/private
)

# Optional external vendors
target_link_libraries(internal_renderer PUBLIC SDL3::SDL3)
