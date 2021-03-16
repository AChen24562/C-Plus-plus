// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
  cout << endl;

  int a[3] = {10, 20, 30};

  // output the memory address of the array (first element of the array)
  cout << a << endl;
  cout << a+0 << endl << endl;

  // output the values of the array
  cout << *(a+0) << endl; // a[0]
  cout << *(a+1) << endl; // a[1]
  cout << *(a+2) << endl << endl; // a[2]

  // output the memory address of all array elements
  cout << a+0 << endl;
  cout << a+1 << endl;
  cout << a+2 << endl << endl;

  // be careful using the address of operator with array variables
  cout << &a << endl;   // outputs the address of the first array element
  cout << &a+1 << endl; // outputs the address of the first element after the array

  cout << endl;
  return 0;
}
