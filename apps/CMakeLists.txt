add_subdirectory(../dependencies/gflags gflags)

# Create App (main executable)
add_executable(${APP_NAME} main.cpp)
target_link_libraries(${APP_NAME} PRIVATE ${LIB_NAME} glog::glog gflags::gflags)
