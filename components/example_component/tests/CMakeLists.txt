project(unit_tests)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_testing()
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

message(STATUS "GTest include dirs: ${GTEST_INCLUDE_DIR}")
message(STATUS "GTest libraries: ${GTEST_BOTH_LIBRARIES}")
message(STATUS "Cmake source dir: ${CMAKE_SOURCE_DIR}")

enable_testing()
include_directories(${CMAKE_SOURCE_DIR}/components/example_component/include)

add_executable(
        unit_tests
        example_component_tests.cpp
)
target_link_libraries(
        unit_tests
        example_component
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(unit_tests)