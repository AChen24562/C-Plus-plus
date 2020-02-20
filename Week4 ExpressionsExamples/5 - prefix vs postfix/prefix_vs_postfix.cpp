// (c) S. Trowbridge
// Ex 5 - Prefix vs Postfix

#include <iostream>

using namespace std;

int main()
{
    int x = 1, y = 0;

    cout << endl << endl;
    cout << "Prefix vs. Postfix\n";
    cout << "------------------\n";
    cout << "x = " << x << ", y = " << y << endl;
    cout << endl;

    x = 1, y = 0; // assign values to x and y
    y = (++x);
    cout << "Prefix example: y = ++x" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << endl;

    x = 1, y = 0; // reset x and y values
    y = (x++);
    cout << "Postfix example: y = x++" << endl;
    cout << "x = " << x << ", y = " << y <<endl;


    return 0;
}
