// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
  cout << endl;

  int *a = new int[5] {1,2,3,4,5};

  for(int i=0; i<5; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";

  // print values with pointer arithmetic
  for(int i=0; i<5; i++) {
     cout << *(a+i) << " ";
   }
  cout << "\n\n";

  // print memory with pointer arithmetic
  for(int i=0; i<5; i++) {
    cout << (a+i) << endl;
  }
  cout << "\n";

  // delete the array
  delete [] a;

  cout << endl;
  return 0;
}
