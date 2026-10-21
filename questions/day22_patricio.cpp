#include <iostream>
#include <string>
#include <cctype>

using std::cin; 
using std::cout; 
using std::endl; 
using std::string;

int main() {

  string first, last;
  std::cout << "enter name: ";
  std::cin >> first >> last;

  first[0] = toupper(first[0]);
  last[0] = toupper(last[0]);
  std::cout << last << ", " << first << endl;

  return 0;

}
