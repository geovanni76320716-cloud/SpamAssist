
cmake_minimum_required(VERSION 3.21)

project(SpamAssist VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(${GEODE_SDK} geode)

file(GLOB_RECURSE SOURCES src/*.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES})

setup_geode_mod(${PROJECT_NAME})
