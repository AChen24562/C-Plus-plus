// (c) 2018 S. Trowbridge
// Ex 1c - string concatenation

#include <iostream>
using namespace std;

int main( ) {

    string first = "John";
    string last = "Smith";

    // String concatenation.
    cout << "Concatenated string: ";
    string name = first + " " + last;
    cout << name << endl << endl;

    // Shortcut operator syntax for appending text.
    cout << "Concatenated via the shortcut operator: ";
    name += " Jr.";
    cout << name << endl << endl;

    // String "copy".
    // Strings are "immutable" which means the original string cannot be modified.
    // When a modification command is issued, the original string object
    // is deleted and a new string is created which is referenced by the same
    // variable name, thus this process is transparent to the coder.
    cout << "String \"copy\": ";
    name = first;
    cout << name << endl;

    return 0;
}
