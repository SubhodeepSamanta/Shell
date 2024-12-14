#include <iostream>
using namespace std;
int main() {

  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::cout << "$ ";
  std::string input;
  std::getline(std::cin, input);

  while(true){
    if(input=="exit 0") return 0;

    string command = input.substr(0,4);
    string echo_output = input.substr(5);

    string cmd = input.substr(5);
    if(command=="echo"){
      cout<<echo_output<<"\n";
    }else if(input.substr(0,5)=="type "){
      if(cmd.substr(0,4)=="echo"||cmd.substr(0,4)=="exit"||cmd.substr(0,4)=="type"){
      cout<<cmd<<" is a shell builtin\n";
      }else{
      std::cout << cmd << ": not found\n"; 
    }
    }
    else{
      std::cout << input << ": command not found\n"; 
    }
    
    std::cout << "$ ";
    std::getline(std::cin, input);
  }
}
