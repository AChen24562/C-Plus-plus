// S. Trowbridge 2020
#include <iostream>
using namespace std;

// pass and return by value
// Prints different memory location
// the scope of val is local to f1
int f1(int val) {
    cout << "val            " << &val << endl;
    return val;
}

// pass and return by reference
// prints the same memory location
// r is just an alias for i's memory location, therefore the scope of r is
// local to f2
int& f2(int &r) {
    cout << "r              " << &r << endl;
    return r;
}

int main() {
    cout << endl;

    int i = 1;
    cout << "i              " << &i << "\n\n";

    i = f1(i);
    cout << "i              " << &i << "\n\n";

    i = f2(i);  // call f2 and send i by reference to new variable r
    cout << "i              " << &i << "\n\n";

    cout << endl;
    return 0;
}
