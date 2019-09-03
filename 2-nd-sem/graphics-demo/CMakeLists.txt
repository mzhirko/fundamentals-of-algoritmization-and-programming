cmake_minimum_required(VERSION 3.12)
project(graphics_demo)

set(CMAKE_CXX_STANDARD 14)

#find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(graphics_demo main.cpp)
target_link_libraries(graphics_demo sfml-graphics sfml-window sfml-system glut GLU GL)

#add_executable(graphics_demo main.cpp)
#find_package(SFML 2.5 COMPONENTS graphics REQUIRED)
#target_link_libraries(graphics_demo sfml-graphics)
#target_link_libraries(graphics_demo SFML::graphics SFML::audio)