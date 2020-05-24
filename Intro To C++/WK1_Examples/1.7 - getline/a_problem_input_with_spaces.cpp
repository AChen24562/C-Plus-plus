// (c) S. Trowbridge
// Ex 1.7a - problem for input with spaces

#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;

    // cin only reads up to the first whitespace character.
    cout << "What is your full name? ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    return 0;
}
