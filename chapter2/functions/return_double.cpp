#include <iostream>

int getValueFromUser(){
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

void printDoubledValue(int x){
  //int result{x * 2};
  std::cout << x << " doubled is " << x * 2 << "\n";
}

int main(){
  printDoubledValue(getValueFromUser());

  return 0;
}
