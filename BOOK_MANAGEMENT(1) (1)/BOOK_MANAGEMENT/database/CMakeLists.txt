cmake_minimum_required(VERSION 3.5)

project(database )
add_library(database SHARED db.h db.cpp) 

find_package(Qt5 REQUIRED COMPONENTS Sql)
find_package(Qt5 5.2 COMPONENTS Quick Gui REQUIRED)
target_link_libraries(database PRIVATE Qt5::Sql)
