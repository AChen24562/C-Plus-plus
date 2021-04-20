// S. Trowbridge 2020
#include <iostream>
using namespace std;

double divide(double a, double b) {
    if(b == 0) { throw "Cannot divide by zero."; }           // end function and throw exception
    return a/b;                                              // if no exception run this
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
        cout << divide(n, d);                                // code to test for an exception
    }
    catch(const char* e) {                                    // code to run if there is a caught exception
        cerr << "Error: " << e << "\n";
    }

    cout << "\nProgram Continues" << "\n";

    cout << endl;
    return 0;
}
