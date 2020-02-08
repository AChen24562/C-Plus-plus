// (c) 2018 S. Trowbridge
// Ex 1e - string access by at

#include <iostream>
#include <string>      // string library included for access to string functions
using namespace std;

int main( ) {
    string name = "John Smith";

    // Unsafe method:
    // Using the bracket operator it is possible to access an area of memory
    // that is outside of the string variable memory space without warning.
    // It is impossible to know what information is being accessed, therefore
    // this is not a safe methodfor reading string data.
    // Thus this the bracket operator is not a safe method of accessing a string.
    cout << name[10] << endl << endl;

    // Safer method:
    // The "at" function provides the same access as the bracket operator
    // with an error check if an attempt is made to access memory that does
    // not belong to the string variable.
    // Remove the comment below to test the at function:
    cout << name.at(10) << endl << endl;

    return 0;
}
