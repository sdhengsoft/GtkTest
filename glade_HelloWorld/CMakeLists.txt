cmake_minimum_required(VERSION 3.00)

# set the project name
project(glade_HelloWorld)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)
include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})
add_definitions(${GTKMM_CXXFLAGS_OTHER})

# add the executable
add_executable(glade_HelloWorld glade_main.cpp glade_HelloWorld.cpp)
target_link_libraries(glade_HelloWorld ${GTKMM_LIBRARIES})
