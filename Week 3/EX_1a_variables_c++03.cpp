// (c) S. Trowbridge
// Ex 1a - variables c++03 syntax

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i; // declare a variable of type int
    i = 5; // assign a literal integer value to the previously declared variable i
    cout << i << endl; // variables values are output as such (no need for "")

    // initialize a double variable (declare + assign) with a floating point value
    double d = 5.3;
    cout << d << endl;

    // initialize a string variable with a string literal
    string s = "Hello";
    cout << s << endl;

    char c = 'A'; // initialize a char variable with a character literal
    c = 'B'; // assign a new character value to the variable c
    cout << c << endl;

    bool b = true; // initialize a boolean variable with the value true
    cout << b << endl;

    return 0;
}
