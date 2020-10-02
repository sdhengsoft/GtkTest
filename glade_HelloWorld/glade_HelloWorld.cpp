#include "glade_HelloWorld.h"

HelloWorld::HelloWorld() : ui{ Gtk::Builder::create_from_file( "HelloWorld.glade")}
{
  if ( ui) {
    ui->get_widget<Gtk::Box>( "box", box);
    display_label = Glib::RefPtr<Gtk::Label>::cast_dynamic(   ui->get_object( "display_label"));
    display_btn   = Glib::RefPtr<Gtk::Button>::cast_dynamic(  ui->get_object( "display_button"));
    if ( box && display_label && display_btn) {
      display_btn->signal_clicked().connect( [ this]
      () {
        display_label->set_text( "Hello World");
      });
      add( *box);
    }
  }
  set_title( "Glade - HelloWorld");
  set_default_size( 400, 400);
  show_all();
}
