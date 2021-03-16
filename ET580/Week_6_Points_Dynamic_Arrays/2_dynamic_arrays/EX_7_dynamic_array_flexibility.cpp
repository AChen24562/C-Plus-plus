// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // dynamic array:
    // size of the array can be decided and/or modified during run time
    int size;
    cout << "Enter size: ";
    cin >> size;
    cout << "\n";

    int *a = new int[size];

    // contiguous block of memory
    for(int i=0; i<size; ++i) { cout << a[i] << "\t" << &a[i] << "\n";}

    // delete the array
    delete [] a;

    cout << endl;
    return 0;
}
