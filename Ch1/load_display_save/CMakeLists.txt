cmake_minimum_required(VERSION 2.8)

project(load_display_save)

find_package(OpenCV REQUIRED)

add_executable(${PROJECT_NAME} "main.cpp")
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

