cmake_minimum_required(VERSION 3.10)

project(MyProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(MyProject
    main.cpp
)

target_include_directories(MyProject PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)
