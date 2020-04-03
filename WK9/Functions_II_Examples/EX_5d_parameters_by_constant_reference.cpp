// (c) 2018 S. Trowbridge
// Ex 5d - parameters by constant reference

#include <iostream>
using namespace std;

// Pass by constant reference parameters require
// the 'const' keyword, and the '&' operator such as parameter b.
//
// Constant reference parameters are not modifiable, similar to a constant variable.
// This protects the programmer from mistakenly changing a value that remain constant.
void callBy(const int& a, int b);

int main( ) {
    int x, y;

    cout << "Enter the integers: ";
    cin >> x >> y;
    cout << endl;

    cout << "Main Values: " << x << " " << y << endl << endl;

    callBy(x, y);

    cout << "Main Values: " << x << " " << y << endl << endl;
    return 0;
}

// Line 31 line issues a compiler error indicating that 'a' is a read-only value.
void callBy(const int& a, int b) {
    a += 100;
    b += 100;
    cout << "Function Value: " << a << " " << b << endl << endl;
}
