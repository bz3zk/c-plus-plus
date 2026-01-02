#include <iostream>

int getValue(){
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

int main(){
  int userInput {getValue()};

  std::cout << "You enter the value " << userInput << "\n";
  std::cout << "Doubled is: " << userInput * 2 << "\n";

  return 0;
}
