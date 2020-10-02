cmake_minimum_required(VERSION 3.00)

# set the project name
project(gtkmm_HelloWorld)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)
include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})
add_definitions(${GTKMM_CXXFLAGS_OTHER})

# add the executable
add_executable(gtkmm_HelloWorld gtkmm_main.cpp gtkmm_HelloWorld.cpp)
target_link_libraries(gtkmm_HelloWorld ${GTKMM_LIBRARIES})
