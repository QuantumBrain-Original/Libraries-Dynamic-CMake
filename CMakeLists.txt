cmake_minimum_required (VERSION 3.20)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

project ("Libraries-Dynamic-CMake")

add_library(ByeUser_CMake_LIB SHARED "ByeUser_Dynamic_CMake.h" "ByeUser_Dynamic_CMake.cpp")
add_executable (Libraries_Dynamic_CMake "Libraries-Dynamic-CMake.cpp")

target_link_libraries(Libraries_Dynamic_CMake ByeUser_CMake_LIB)