#include "./../include/usage.h"
#include <iostream>
#include <string>
#include <unistd.h>
#include <vector>

// using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// void handle_auth_login(const vector<string> &args) {}

// void handle_command(const string &command, const vector<string> &args) {}

void getopt_out(int argc, char *argv[]) {

  if (argc < 2) {
    general_usage();
    exit(1);
  }

  vector<string> args(argv + 1, argv + argc);

  cout << "argument count: " << argc << " argument: " << argv[optind] << endl;
  cout << args[0] << endl;
}
