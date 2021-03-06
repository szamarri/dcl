cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(DCL LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(GNUInstallDirs)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

add_subdirectory(src)

enable_testing()
add_test(
    NAME
      catch_test 
    COMMAND
      $<TARGET_FILE:cpp_test> --success --out
      ${PROJECT_BINARY_DIR}/tests/catch_test.log --durations yes
)

add_subdirectory(tests)
