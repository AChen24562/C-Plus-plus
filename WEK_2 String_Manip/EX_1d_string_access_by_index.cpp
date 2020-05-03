// (c) 2018 S. Trowbridge
// Ex 1d - string access by index

#include <iostream>
#include <string>      // string library included for access to string functions
using namespace std;

int main( ) {
    string name = "Alex Chen";

    cout << "String: " << name << endl << endl;

    // Output the length of the text string using the length "function".
    // Note the syntax: stringname.functionname.
    // Also note the "function call" syntax: functionname().
    cout << "String length: " << name.length() << " characters" << endl << endl;

    // Print all letters of the string (access each character by index).
    // Note that the indicies go from position 0 to position length - 1.
    cout << "[0] " << name[0] << endl;              // first character
    cout << "[1] " << name[1] << endl;
    cout << "[2] " << name[2] << endl;
    cout << "[3] " << name[3] << endl;
    cout << "[4] " << name[4] << endl;
    cout << "[5] " << name[5] << endl;
    cout << "[6] " << name[6] << endl;
    cout << "[7] " << name[7] << endl;
    cout << "[8] " << name[8] << endl;
    cout << "[9] " << name[9] << endl << endl;      // last character

    // Print the first letter of the string.
    cout << "first letter [0]: " << name[0] << endl;
    // Print the last letter of the string.
    cout << "last letter  [9]: " << name[9] << endl << endl;

    // Print the last letter of the string using the length function.
    cout << "last letter  [9]: " << name[name.length()-1] << endl << endl;

    return 0;
}
