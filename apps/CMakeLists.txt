# Create App (main executable)
add_executable(${APP_NAME} main.cpp)

add_subdirectory(../dependencies/wxWidgets wxWidgets)

target_link_libraries(${APP_NAME} PRIVATE ${LIB_NAME} glog::glog wx::core)
