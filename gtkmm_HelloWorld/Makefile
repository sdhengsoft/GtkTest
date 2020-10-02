PARENT_DIR = ..

LINK.o    = $(LINK.cc)
CPPFLAGS +=$(shell pkg-config --cflags gtkmm-3.0)
LDLIBS   +=$(shell pkg-config --libs gtkmm-3.0)

default: gtkmm_HelloWorld

include $(PARENT_DIR)/Makefile.in

gtkmm_HelloWorld: gtkmm_main.o gtkmm_HelloWorld.o
