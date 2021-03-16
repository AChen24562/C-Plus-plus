// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // output the value of a (the memory address of the array)
    int a[5] = {10, 20, 30, 40, 50};
    cout << "a: " << a << "\n";

    // assign a pointer alias for the array
    int *p = a;
    cout << "p: " << p << "\n\n";

    // print array values using array name and pointer alias
    for(int i=0; i<5; ++i) { cout << "a: " << a[i] << "\tp: " << p[i] << "\n"; }
    cout << "\n";

    // print array memory addresses using array name and pointer alias
    for(int i=0; i<5; ++i) {
        cout << "Memory of a: " << &a[i] << "\tMemory of p: " << &p[i] << endl;
    }
    cout << endl;

    // sizeof operator can be used to verify that:
    // a in an array, and p is a pointer, these are two different types (not the same thing)
    cout << "Size of a: " << sizeof(a) << endl;
    cout << "Size of p: " << sizeof(p) << endl;

    cout << endl;
    return 0;
}
