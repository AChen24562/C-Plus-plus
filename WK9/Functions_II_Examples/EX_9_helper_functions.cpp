// (c) S. Trowbridge 2019
// EX 9 Helper Functions

#include <iostream>
using namespace std;

void divide(double numerator, double denominator);

// Function is only called by the divide function, not by main.
// Therefore, divide will be its calling function, not main.
bool isNotZero(double number);

int main() {

    double n, d;

    cout << "Enter a numerator and a denominator: " << endl;
    cin >> n >> d;
    cout << endl;

    divide(n, d);
    cout << endl;
    return 0;
}

void divide(double numerator, double denominator) {
    if(!isNotZero(denominator)) {                   // helper function call
        cout << "Error: You cannot divide by 0.";
        return;                                     // return used in a void function to end function early
    }
    cout << numerator / denominator << endl;
}
bool isNotZero(double number) {
    return number != 0;
}
