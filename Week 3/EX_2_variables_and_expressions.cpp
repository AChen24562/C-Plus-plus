// (c) S. Trowbridge
// Ex 2 - variables and expressions

#include <string>
#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int y = 2;

    // Output the initial values of x and y.
    cout << "---------------------------------------------" << endl;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    cout << "---------------------------------------------" << endl;

    // Assign (copy) the value of y into x.
    x = y;
    cout << "X = Y \t\t\tThe value of x is " << x << endl << endl;

    // Reset the values for x and y.
    // Add the value of y to the integer 3, then store the result in x.
    x = 1, y = 2;
    x = y + 3;
    cout << "X = Y + 3 \t\tThe value of x is " << x << endl << endl;

    // Reset the values for x and y.
    // Update the value of x using the existing values of x and y.
    x = 1, y = 2;
    x = (5 + x) * (y + 1);
    cout << "X = (5 + X) * (Y + 1) \tThe value of x is " << x << endl << endl;

    // Reset the values for x and y.
    // Similar to the previous expression but note the lack of parenthesis.
    x = 1, y = 2;
    x = 5 + x * y + 1;
    cout << "X = 5 + X * Y + 1 \tThe value of x is " << x << endl << endl;

    // Reset the values for x and y.
    // Once again, note the use of parenthesis.
    x = 1, y = 2;
    x = 5 + (x * y) + 1;
    cout << "X = 5 + (X * Y) + 1 \tThe value of x is " << x << endl << endl;

    // Reset the values for x and y.
    // Once again, note the use of parenthesis.
    x = 1, y = 2;
    x = (5 + x) * y + 1;
    cout << "X = (5 + X) * Y + 1 \tThe value of x is " << x << endl << endl;

    return 0;
}
