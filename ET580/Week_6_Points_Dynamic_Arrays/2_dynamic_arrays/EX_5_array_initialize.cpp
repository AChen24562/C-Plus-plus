// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;;

int main() {
    cout << endl;

    // for primitives, use () at the end to initialize with default values
    int *a = new int[5]();
    for(int i=0; i<5; ++i) { cout << a[i] << " "; }
    cout << "." << "\n";

    // for objects, the default constructor is called to initialize data
    string *b = new string[5];
    for(int i=0; i<5; ++i) { cout << b[i] << " "; }
    cout << "." << "\n";

    // c++11 initialization method to partially fill an array
    int *c = new int[5] {5, 10};
    for(int i=0; i<5; ++i) { cout << c[i] << " "; }
    cout << "." << "\n";

    // delete the arrays
    delete [] a;
    delete [] b;
    delete [] c;

    cout << endl;
    return 0;
}
