message(STATUS "Building example component")
add_library(
        example_component SHARED
        src/example_component.cpp
        include/example_component.h
)

target_include_directories(
        example_component
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_subdirectory(tests)