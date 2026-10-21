#include <iostream>
#include <string>
#include <cctype>

using std::cout; using std::endl; using std::string;

int main() {
  string first, last;
  cout << "enter name: ";
  std::cin >> first >> last;

  char init = first.at(0);
  init = toupper(init);
  first = init + first.substr(1);
  init = toupper(last.at(0));
  last[0] = init;
  cout << last << ", " << first << endl;
  return 0;
}
