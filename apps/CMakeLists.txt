# Create App (main executable)
add_executable(${APP_NAME} main.cpp)

target_link_libraries(${APP_NAME} PRIVATE ${LIB_NAME} glog::glog imgui imgui_impl_glfw imgui_impl_opengl3)
