cmake_minimum_required(VERSION 3.22.1)

project("cmake-testing" VERSION 1.0 DESCRIPTION "CMake experimentation" LANGUAGES CXX)

add_executable(${PROJECT_NAME} src/engine.h src/engine.cpp src/utils.cpp src/utils.h src/main.cpp)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
  target_compile_options(${PROJECT_NAME} PRIVATE /W4)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
  target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
endif()
