#ifndef _GLADE_HELLOWORLD_H_
#define _GLADE_HELLOWORLD_H_

#include <gtkmm/application.h>
#include <gtkmm/applicationwindow.h>
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/box.h>
#include <gtkmm/builder.h>

class HelloWorld : public Gtk::ApplicationWindow
{
 public:
  HelloWorld();

private:
  Gtk::Box                  *box;
  Glib::RefPtr<Gtk::Label>   display_label;
  Glib::RefPtr<Gtk::Button>  display_btn;
  Glib::RefPtr<Gtk::Builder> ui;
};

#endif /* _GLADE_HELLOWORLD_H_ */
