SUBDIRS = gtk_HelloWorld \
          gtkmm_HelloWorld \
          glade_HelloWorld

all: $(SUBDIRS)

.PHONY: clean
clean: $(SUBDIRS)
	$(RM) -rf build/*

.PHONY: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS)
