// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int* f1() {
    int *i;
    int n = 5;              // n is on the stack
    i = &n;                 // point i to n
    return i;               // n and i go out of scope
}

int* f2() {
    int *i = new int(100);  // *i is on the heap
    return i;               // i goes out of scope, but *i remains alive
}

int main() {
    cout << endl;

    int *p = f1();          // dangling pointer (why?)
    cout << *p << "\n";     // garbage print

    int *q = new int{10};
    q = f2();               // memory leak (why?)

    cout << endl;
    return 0;
}
