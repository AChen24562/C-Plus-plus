// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // L-VALUE: any expression that resolves to a memory address
    int a;                  // a variable
    string s;               // a named object (not a temporary)
    const double d = 5;     // a constant l-value

    // R-VALUE: any expresion that isn't an L-VALUE
    5;                      // a literal
    string();               // a temporary object

    // L-VALUE REFERENCE
    int &b = a;             // &b is an l-value reference
    const double &c = d;    // &c is a constant l-value reference

    // R-VALUE REFERENCE
    int &&e = 5;            // &&e is a reference that stores a literal
    string &&g = string();  // &&g is a reference that can extend the lifetime of a temporary object

    cout << endl;
    return 0;
}
