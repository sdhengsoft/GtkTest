cmake_minimum_required(VERSION 3.00)

# set the project name
project(GtkTest)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-O3 -Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -Wall -Wextra")

# add the executable
add_subdirectory(gtk_HelloWorld)
add_subdirectory(gtkmm_HelloWorld)
add_subdirectory(glade_HelloWorld)
