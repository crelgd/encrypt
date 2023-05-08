cmake_minimum_required(VERSION 3.5)
project(main)

set(SOURCES 
    src/main.cpp 
    src/file.cpp
)

include_directories(
    include
)

add_executable(main ${SOURCES})
