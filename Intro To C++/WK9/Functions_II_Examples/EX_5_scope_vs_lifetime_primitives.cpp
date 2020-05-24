// (c) S. Trowbridge 2019
// EX 6 - scope vs lifetime, primitives

#include <iostream>
using namespace std;

// pass a variable by value
// val is a local variable of type int
// What is the scope of val? What is the lifetime of val?
int f1(int val) {
    cout << "val            " << &val << endl;
    return val;
}

// pass a variable by reference
// ref is a local reference of type int
// What is the scope of ref? What is the lifetime of ref?
int& f2(int &ref) {
    cout << "ref            " << &ref << endl;
    return ref;
}

int main() {
    cout << endl;

    int i = 1;
    cout << "i              " << &i << endl;
    cout << endl;

    i = f1(i);
    cout << "i              " << &i << endl;
    cout << endl;

    i = f2(i);
    cout << "i              " << &i << endl;
    cout << endl;

    cout << endl;
    return 0;
}
