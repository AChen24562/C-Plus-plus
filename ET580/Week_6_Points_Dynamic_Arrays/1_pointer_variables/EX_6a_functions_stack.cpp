// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// return a local variable by value
int f1() {
    int i = 100;        // i is on the stack
    return i;           // i goes out of scope, memory is recycled
}

// return a local variable by reference (NEVER DO THIS)
int& f2() {
    int i = 10;         // i is on the stack
    return i;           // i goes out of scope, memory is recycled
}

int main() {
    cout << endl;

    int n = f1();
    cout << "n:\t" << n << endl;

    n = f2();
    cout << "n:\t" << n << endl;  // garbage print

    cout << endl;
    return 0;
}
