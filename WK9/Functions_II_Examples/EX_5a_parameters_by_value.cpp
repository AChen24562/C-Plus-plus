// (c) 2018 S. Trowbridge
// Ex 5a - parameters by value

#include <iostream>
using namespace std;

// Parameters are passed by value.
// The value of the input variable 'number' in main
// is copied to the parameter variable 'n' in the local function.
void callByValue_1(int n);
void callByValue_2(int n);

int main( ) {
    int number;

    cout << "Enter the integers: ";
    cin >> number;
    cout << endl;

    cout << "Main: number = " << number << endl << endl;

    callByValue_1(number);

    callByValue_2(number);

    // Note that the value of number has not changed.
    cout << "Main: number = " << number << endl << endl;
    return 0;
}

void callByValue_1(int n) {
    n *= 2;
    cout << "Function_1: n = " << n << endl << endl;
}

void callByValue_2(int n) {
    n *= 3;
    cout << "Function_2: n = " << n << endl << endl;
}
