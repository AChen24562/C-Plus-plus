// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

 const int ARRAYS = 3;
 const int INTEGERS = 4;

int main() {
    cout << endl;

    //  create a non-contiguous dynamic array of arrays
    int **arr = new int*[ARRAYS];
    for(int i=0; i<ARRAYS; i++) { arr[i] = new int[INTEGERS];}
    

    // assign values with pointer arithmetic
    int num = 1;
    for(int a=0; a<ARRAYS; ++a) {
        for(int i=0; i<INTEGERS; ++i) {
            *(*(arr+a)+i) = num++; // same as a[a][i] = num++
        }
    }

    // print array values with pointer arithmetic
    for(int a=0; a<ARRAYS; ++a) {
        for(int i=0; i<INTEGERS; ++i) {
            cout << *(*(arr+a)+i) << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // print array memory addresses with pointer arithmetic
    for(int a=0; a<ARRAYS; ++a) {
        for(int i=0; i<INTEGERS; ++i) {
            cout << (*(arr+a)+i) << " "; // same as &a[a][i]
        }
        cout << "\n";
    }
    cout << "\n";


    // access an element in the first array at position 2 (given zero offset)
    cout << *(*(arr+0)+2) << endl;
    // access an element in the second array at position 3 (given zero offset)
    cout << *(*(arr+1)+3) << endl;

    // delete the array of arrays
    for(int a=0; a<ARRAYS; ++a) { delete [] arr[a]; }
    delete [] arr;

    cout << endl;
    return 0;
}
