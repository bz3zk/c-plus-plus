#include <iostream>

int getValueFromUser(){
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

int main(){
  int firstValue {getValueFromUser()};
  int secondValue {getValueFromUser()};

  std::cout << "Your first value was " << firstValue << " and your second value was " << secondValue << "\n";

  return 0;
}
