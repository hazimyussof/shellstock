#include <iostream>

using std::cout;

const char *bold_start = "\033[1m";
const char *bold_end = "\033[0m";

void general_usage() {
  cout << "Authenticate gh and git with GitHub"
       << "\n\n";

  cout << bold_start << "USAGE" << bold_end << "\n";
  cout << " gh auth <command> [flags]\n\n";

  cout << bold_start << "AVAILABLE COMMANDS" << bold_end << "\n";
  cout << " login:        Log in to a GitHub account\n";
  cout << " logout:       Log out of a GitHub account\n";
  cout << " refresh:      Refresh stored authentication credentials\n";
  cout << " setup-git:    Setup git with GitHub CLI\n";
  cout << " status:       View all accounts and authentication status\n";
  cout << " switch:       Switch active GitHub account\n";
  cout << " token:        Print the authentication token gh uses for a "
          "hostname and account\n\n";

  cout << bold_start << "INHERITED FLAGS" << bold_end << "\n";
  cout << " --help    show help for command\n\n";

  cout << bold_start << "LEARN MORE" << bold_end << "\n";
  cout << " Use `gh <command> <subcommand> --help` for more information about "
          "a command.\n";
  cout << " Read the manual at https://cli.github.com/manual\n\n";
}
