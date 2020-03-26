// (c)S. Trowbridge
// Ex 8.2 - void functions

#include <iostream>
#include <string>
using namespace std;

void hello( );
string getName( );
void goodbye(string name);

int main( ) {

    // discrete function calls
    hello();
    string person = getName();
    goodbye(person);

    cout << endl;

    // function call used as a parameter
    hello();
    goodbye(getName( ));

    cout << endl;
    return 0;
}

void hello( ) {
    cout << "Hello" << endl;
}
string getName( ) {
    string name;
    cout << "What is your name? ";
    cin >> name;
    return name;
}
void goodbye(string name) {
    cout << "Goodbye " << name << ".\n";
}
