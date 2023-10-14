cmake_minimum_required(VERSION 3.14...3.22)

# Global CXX version
set(CMAKE_CXX_STANDARD 20) # Use target_compile_features() to set specific targets standard
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---- Project ----
# Note: update this to your new project's name and version
project(MyProject VERSION 0.1
                  DESCRIPTION "This is a template project"
                  LANGUAGES CXX
)

# Name the final app, lib and test app according to project name
set(LIB_NAME ${PROJECT_NAME})
set(APP_NAME ${PROJECT_NAME}_app)
set(TEST_NAME ${PROJECT_NAME}_test)

enable_testing()

# Only do these if this is the main project, and not if it is included through add_subdirectory
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)

  # Docs only available if this is the main app
  find_package(Doxygen)
  if(Doxygen_FOUND)
    add_subdirectory(docs)
  else()
    message(STATUS "Doxygen not found, not building docs")
  endif()
endif()

if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(FATAL_ERROR
      "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there."
  )
endif()

# add src containing the lib source files
add_subdirectory(src)

# add the apps containing the app source files
add_subdirectory(apps)

# add the tests containing the unit tests source files
if((CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME OR MODERN_CMAKE_BUILD_TESTING)
   AND BUILD_TESTING)
  add_subdirectory(tests)
endif()
