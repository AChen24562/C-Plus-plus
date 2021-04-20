// S. Trowbridge 2020
#include <iostream>
using namespace std;

double dividePositive(double a, double b) {                   // only divide positive numbers
    if(b == 0) { throw "Cannot divide by zero."; }            // first possible exception
    if(b<0 || a<0) { throw "Values must be positive."; }      // second possible exception
    return a/b;                                               // if no exceptions run this
}

int main() {
    cout << endl;

    double n, d;
    double answer;
    cout << "Enter a numerator: ";
    cin >> n;
    cout << "Enter a denominator: ";
    cin >> d;

    try {                                                     // code to try
        cout << dividePositive(n, d);                         // code to test for an exception
    }
    catch(const char* e) {                                    // code to run if there is a caught exception
        cerr << "Error: " << e << "\n";
    }

    cout << "\nProgram Continues" << "\n";

    cout << endl;
    return 0;
}
