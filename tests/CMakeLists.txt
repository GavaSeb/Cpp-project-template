
# Add the googletest repository
set(GTEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/googletest)
add_subdirectory(../thirdparty/googletest googletest)

enable_testing()

# ---- Create binary ----

file(GLOB sources_tests CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_executable(${TEST_NAME} ${sources_tests})
set_target_properties(${TEST_NAME} PROPERTIES _STANDARD 17)

# Standard linking to gtest stuff.
target_link_libraries(${TEST_NAME} ${LIB_NAME} gtest_main)

add_test(NAME test_${TEST_NAME} COMMAND ${TEST_NAME})
