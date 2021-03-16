// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// update heap memory (pass pointer by value)
void f1(int *i) {
    *i = 100;                // update the value of the variable pointed to by i
}

// return new heap memory (return pointer by value)
int* f2() {
    int *i = new int(1000);  // assign new memory on the heap
    return i;                // i goes out of scope, heap memory address returned
}

// replace heap memory (pass pointer by reference)
void f3(int *&i) {
    delete i;               // delete original memory
    i = new int(10000);     // assign new memory
}

int main() {
    cout << endl;

    int *p = new int{10};

    f1(p);                  // update *p
    cout << *p << endl;

    int *q = f2();          // assign new heap memory to q
    cout << *q << endl;

    f3(p);                  // replace heap memory pointed to by p
    cout << *p << endl;

    cout << endl;
    return 0;
}
