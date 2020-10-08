cmake_minimum_required(VERSION 3.00)

# set the project name
project(glade_HelloWorld)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)
include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})
add_definitions(${GTKMM_CXXFLAGS_OTHER})

# handle gresources (this was easier in a Makefile - SDH)
find_program(GLIB_COMPILE_RESOURCES NAMES glib-compile-resources REQUIRED)
set(GRESOURCE_C   glade_resources.c)
set(GRESOURCE_XML glade_resources.xml)
add_custom_command(
    OUTPUT ${GRESOURCE_C}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    COMMAND ${GLIB_COMPILE_RESOURCES}
    ARGS
        ${GRESOURCE_XML}
        --generate-source
        --target=${CMAKE_CURRENT_BINARY_DIR}/${GRESOURCE_C}
    VERBATIM
    MAIN_DEPENDENCY ${GRESOURCE_XML}
    DEPENDS
      HelloWorld.glade
)
add_custom_target(
    dummy-resource
    DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/${GRESOURCE_C}
)
set_source_files_properties(
    ${CMAKE_CURRENT_BINARY_DIR}/${GRESOURCE_C}
    PROPERTIES GENERATED TRUE
)

# add the executable
add_executable(glade_HelloWorld glade_main.cpp glade_HelloWorld.cpp ${CMAKE_CURRENT_BINARY_DIR}/${GRESOURCE_C})
target_link_libraries(glade_HelloWorld ${GTKMM_LIBRARIES})
# gresources dependency
add_dependencies(${PROJECT_NAME} dummy-resource)
