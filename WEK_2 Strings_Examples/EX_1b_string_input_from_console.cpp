// (c) 2018 S. Trowbridge
// Ex 1b - string input from console

#include <iostream>
using namespace std;

int main( ) {

    string name;

    // Getline used for phrase input (spaces allowed).
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Complete input: " << name << endl << endl;

    // Cin used for word input (spaces not allowed).
    // Any text after a white space will be ignored by this cin.
    cout << "Enter your full name: ";
    cin >> name;
    cout << "Truncated input: " << name << endl << endl;

    return 0;
}
