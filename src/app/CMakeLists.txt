# CMake Targets for App sub-project
add_executable(MainApp main.c)
target_link_libraries(MainApp PUBLIC internal_renderer internal_core)
