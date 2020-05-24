// (c) S. Trowbridge
// Ex 1.7b - solution for input with spaces (getline)

#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;

    // Getline reads until the first newline character (reads whitespaces).
    cout << "What is your full name? ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    return 0;
}
