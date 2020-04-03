// (c) S. Trowbridge 2018
// ex 4a addressof operator

#include <iostream>
#include <string>
using namespace std;

int main() {

  // int variable
  int i = 5;
  // print the value of i
  cout << i << endl;
  // & in this context is called the "addressof" operator
  // this prints the memory address of the variable i
  cout << &i << endl;

  return 0;
}
