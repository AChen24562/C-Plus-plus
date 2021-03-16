// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // initialize a double and a double pointer
    double d = 3.14;
    double *p = &d;

    // print the memory address of d
    cout << "&d: " << &d << "\n";
    cout << " p: " << p << "\n\n";

    // print the value of d
    cout << " d: " << d << "\n";
    cout << "*p: " << *p << "\n\n";  // dereference p (* is the dereference operator)

    // dereference p (return d) to modify the value of d, then print the value of d
    *p = 1.1643;
    cout << " d: " << d << "\n";
    cout << "*p: " << *p << "\n\n";

    cout << endl;
    return 0;
}
