// (c) S. Trowbridge
// simple reference/deference example

#include <iostream>
using namespace std;

int main() {

    int x;
    int* x_ptr;

    x = 1;
    x_ptr = &x;

    cout << "X Variable: (int x)" << endl;
    cout << "x original value: \t\t\t" << x << endl;
    cout << "x referenced (memory address): \t\t" << &x << endl << endl;

    cout << "X_PTR Variable: (int* x_ptr)" << endl;
    cout << "x_ptr value: \t\t\t\t" << x_ptr << endl;
    cout << "x_ptr referenced (memory address): \t" << &x_ptr << endl;
    cout << "x_ptr dereferenced : \t\t\t" << *x_ptr << endl;

    return 0;
}
