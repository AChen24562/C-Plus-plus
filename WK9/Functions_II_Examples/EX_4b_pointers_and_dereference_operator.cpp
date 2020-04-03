// (c) S. Trowbridge 2018
// Ex 4b - pointers & dereference operator

#include <iostream>
using namespace std;

int main() {

    int x;
    x = 1;

    // A variable is a pointer variable if a * precedes the variable name.
    int *x_ptr;

    // Pointer variables are not used to store data.
    // Pointer variables are used to store memory addresses of other variables.
    // The pointer variable 'x_ptr' stores the memory address of 'x'.
    x_ptr = &x;

    cout << "X Variable:" << endl;
    cout << "x original value          (x): " << x << endl;
    cout << "x memory address         (&x): " << &x << endl << endl;

    cout << "X_PTR Variable:" << endl;
    cout << "x_ptr value           (x_ptr): " << x_ptr << endl;
    cout << "x_ptr memory address (&x_ptr): " << &x_ptr << endl << endl;

    // It is possible to obtain the value of the variable that a pointer
    // points to. To do this we use the deference operator followed by the variable name.
    cout << "Dereferencing a Pointer: " << endl;
    cout << "x_ptr dereferenced   (*x_ptr): " << *x_ptr << endl;

    // Note that the output of line 17 and 20 are the same.
    // 'x_ptr' stores the memory address of the variable 'x'.
    // Thus the value of 'x_ptr' is the same as the memory address of 'x'.

    return 0;
}
