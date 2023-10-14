# Add the googletest repository
set(GTEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/googletest)
add_subdirectory(../dependencies/googletest googletest)

# ---- Create binary ----

file(GLOB sources_tests CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_executable(${TEST_NAME} ${sources_tests})

# Standard linking to gtest stuff.
target_link_libraries(${TEST_NAME} ${LIB_NAME} gtest_main)

add_test(${TEST_NAME}_test ${TEST_NAME})