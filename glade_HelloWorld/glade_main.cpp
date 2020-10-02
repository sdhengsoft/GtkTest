#include "glade_HelloWorld.h"

int main( int argc, char *argv[])
{
  auto app = Gtk::Application::create( argc, argv, "org.gtkmm.example.HelloApp");
  HelloWorld hw;
  return app->run( hw);
}
