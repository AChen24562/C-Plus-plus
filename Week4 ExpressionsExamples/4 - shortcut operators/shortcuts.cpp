// (c) S. Trowbridge
// Ex 4 - Shortcut Operators

#include <iostream>
using namespace std;

int main()
{
    double x = 1.0, y = 2.0;

    cout << endl << endl;
    cout << "Shortcut Operators" << endl;
    cout << "------------------" << endl;
    cout << "double x = " << x << ", y = " << y << ";" << endl << endl;

    x = 1, y = 2;
    cout << "Addition: x += y (x = x + y)" << endl;
    cout << " x is " << (x += y) << endl << endl;

    x = 1, y = 2;
    cout << "Subtraction: x -= y (x = x - y)" << endl;
    cout << " x is " << (x -= y) << endl << endl;

    x = 1, y = 2;
    cout << "Multiplication x *= y (x = x * y)" << endl;
    cout << " x is " << (x *= y) << endl << endl;

    x = 1, y = 2;
    cout << "Division: x /= y (x = x / y)" << endl;
    cout << " x is " << (x /= y) << endl << endl;

    int a = static_cast<int>(x);
    cout << "Integer Division x /= y (x = x / y)" << endl
         << " x is " << (a /= y) << endl << endl;

    x = 1, y = 2;
    a = static_cast<int>(x);
    int b = static_cast<int>(y);
    cout << "Modulo: x %= y (x = x % y)" << endl;
    cout << " x is " << (a %= b) << endl << endl;

    return 0;
}
