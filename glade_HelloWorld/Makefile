PARENT_DIR = ..

LINK.o    = $(LINK.cc)
CPPFLAGS +=$(shell pkg-config --cflags gtkmm-3.0)
LDLIBS   +=$(shell pkg-config --libs gtkmm-3.0)

default: glade_HelloWorld

include $(PARENT_DIR)/Makefile.in

glade_HelloWorld: glade_main.o glade_HelloWorld.o glade_resources.o

%.c: %.xml
	glib-compile-resources.exe $< --generate-source --target=$@

clean::
	$(RM) glade_resources.c
