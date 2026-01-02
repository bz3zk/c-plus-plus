/*
 * Shows several ways of initialize variables
 * */
#include <iostream>

int main(){
  int a; // default initialization (but no initializer)
  // Traditional ways of initialize
  int w2 = 3; // copy-initialization (initial value after equal sign)
  int c (6); // direct-initialization (initial value in parenthesis)
  // Modern initialization forms (preferred):
  int d {8}; // direct-list-initialization (initial value in braces)
  int e {}; // value-initialization (empty braces)

  return 0;
}
