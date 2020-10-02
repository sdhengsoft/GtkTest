cmake_minimum_required(VERSION 3.00)

# set the project name
project(gtk_HelloWorld)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})

# add the executable
add_executable(gtk_HelloWorld gtk_HelloWorld.c)
target_link_libraries(gtk_HelloWorld ${GTK3_LIBRARIES})
