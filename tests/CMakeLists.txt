cmake_minimum_required(VERSION 3.14...3.22)

project(MyTests LANGUAGES CXX)

# Add the googletest repository
set(GTEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/googletest)
add_subdirectory(../thirdparty/googletest googletest)

enable_testing()

# Include the gtest library. gtest_SOURCE_DIR is available due to
# 'project(gtest)' above.
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# ---- Create binary ----

file(GLOB sources CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_executable(${PROJECT_NAME} ${sources})
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17)

# Standard linking to gtest stuff.
target_link_libraries(${PROJECT_NAME} gtest gtest_main)
