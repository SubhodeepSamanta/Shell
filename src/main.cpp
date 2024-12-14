#include <iostream>
using namespace std;
int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::cout << "$ ";
  std::string input;
  std::getline(std::cin, input);

  while(input!="exit"){
  std::cout << input << ": command not found\n"; 
  std::cout << "$ ";
  std::getline(std::cin, input);
  return 0;
  }
}
