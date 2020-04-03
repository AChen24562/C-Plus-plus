// (c) 2018 S. Trowbridge
// Ex 5b - parameters by reference

#include <iostream>
using namespace std;

// Parameters are passed by reference.
// The & symbol indicates that the variable n is passed by reference.
//
// When passing by reference, the memory address of the input variable
// will be passed instead of the value. The local variable 'n' becomes
// another name for the input variable. Thus, you have one memory
// address storing one value, with two names, one outside the function
// one inside the function.
void callByRef_1(int &n);
void callByRef_2(int &n);

int main( ) {
    int number;

    cout << "Enter the integers: ";
    cin >> number;
    cout << endl;

    cout << "Main: number = " << number << endl << endl;

    callByRef_1(number);

    callByRef_2(number);

    // Note that the value of number has changed.
    cout << "Main: number = " << number << endl << endl;
    return 0;
}

void callByRef_1(int &n) {
    n *= 2;
    cout << "Function_1: n = " << n << endl << endl;
}

void callByRef_2(int &n) {
    n *= 3;
    cout << "Function_2: n = " << n << endl << endl;
}
