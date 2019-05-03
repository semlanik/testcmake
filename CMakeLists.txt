cmake_minimum_required(VERSION 3.1)

project(testcmake VERSION 1.0.0)

add_subdirectory("src/lib1")
add_subdirectory("src/lib2")

add_subdirectory("examples")
