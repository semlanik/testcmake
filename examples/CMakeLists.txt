find_package(lib2 REQUIRED)

somelib_func()

add_executable(testbin main.cpp)
target_link_libraries(testbin lib1::lib1 lib2::lib2)
