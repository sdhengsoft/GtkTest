PARENT_DIR = ..

CPPFLAGS += $(shell pkg-config --cflags gtk+-3.0)
LDLIBS   += $(shell pkg-config --libs gtk+-3.0)

default: gtk_HelloWorld

include $(PARENT_DIR)/Makefile.in

gtk_HelloWorld: gtk_HelloWorld.o
