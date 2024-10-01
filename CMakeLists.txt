cmake_minimum_required(VERSION 3.5.0)
project(cmake-tests VERSION 0.1.0 LANGUAGES C CXX)

add_executable(cmake-tests main.cpp test.c)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)