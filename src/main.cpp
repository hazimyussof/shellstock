// #include "./../include/getopt.h"

// Included absolute path to remove annoying ftxui code errors from the lsp
#include "./../build/_deps/ftxui-src/include/ftxui/dom/elements.hpp"
#include "./../build/_deps/ftxui-src/include/ftxui/screen/screen.hpp"
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

// int argc, char *argv[]
int main(int argc, char *argv[]) {
  using namespace ftxui;

  // Define the document
  Element document = hbox({
      text("left") | border,
      text("middle") | border | flex,
      text("right") | border,
  });

  auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));
  Render(screen, document);
  screen.Print();

  // getopt_out(argc, argv);

  return 0;
}
