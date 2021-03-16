// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int a = 5;                // non-const variable
    const int b = 5;          // const variable

    // CONST POINTER
    int *const p = &a;        // p is a const pointer (must point to non-const), p cannot be modified, *p can
    *p = 20;                  // variable pointed to by p can be modified
    // p = &b;                // compiler error: p cannot be modified

    // POINTER TO A CONSTANT VARIABLE
    const int *q;             // q is a pointer to a constant variable, q can be modified, *q cannot
    q = &a;                   // q can point to non-const
    q = &b;                   // q can point to a const
    //*q = 10;                // compiler error: *q cannot be modified

    // CONST POINTER TO A CONSTANT VARIABLE
    const int *const r = &a;  // r is a const pointer to a non-constant variable
    const int *const s = &b;  // r is a const pointer to a constant variable
    //r = &b;                // compiler error: r cannot be modified
    //*r = 10;                // compiler error: *r cannot be modified
    //s = &a;                 // compiler error: r cannot be modified
    //*s = 10;                // compiler error: *r cannot be modified

    cout << endl;
    return 0;
}
