// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

void print(int **arr, int arrays, int integers) {
  for(int a=0; a<arrays; ++a) {
      for(int i=0; i<integers; ++i) {
          cout << arr[a][i] << " ";
      }
      cout << "\n";
  }
}

void printMemory(int **arr, int arrays, int integers) {
    for(int a=0; a<arrays; ++a) {
        for(int i=0; i<integers; ++i) {
            cout << &arr[a][i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    cout << endl;

    // dimensions can be determined at run time
    int arrays, integers;
    cout << "Enter both dimensions: ";
    cin >> arrays >> integers;
    cout << "\n";

    // create an array of arrays, not a 2d array (not contiguous)
    // 1) create the first dimension (array of int pointers)
    int **arr = new int*[arrays];
    // 2) create the second dimension (arrays of integers)
    for(int i=0; i<arrays; ++i) { arr[i] = new int[integers];}

    print(arr, arrays, integers);
    cout << "\n";
    printMemory(arr, arrays, integers);

    // delete an array of arrays
    // 1) delete each array in the second dimension
    for(int i=0; i<arrays; ++i) { delete [] arr[i];}
    // 2) delete the array of pointers in the first dimension
    delete [] arr;

    cout << endl;
    return 0;
}
