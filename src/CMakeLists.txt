# Create library
file(GLOB headers CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/../include/*.hpp")
file(GLOB_RECURSE sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/../src/*.cpp")

add_library(${LIB_NAME} ${sources} ${headers})

# We need this directory, and users of our library will need it too
target_include_directories(${LIB_NAME} PUBLIC ../include)

# All users of this library will need at least C++20
target_compile_features(${LIB_NAME} PUBLIC cxx_std_20)

# Add dependencies here
add_subdirectory(../thirdparty/glog glog)
target_link_libraries(${LIB_NAME} glog)
