// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    double n, d;
    double answer;
    cout << "Enter a numerator: ";
    cin >> n;
    cout << "Enter a denominator: ";
    cin >> d;

    try {                                                     // code to try
        if(d == 0) { throw "Cannot divide by zero."; }        // throw an exception with a string literal message
        cout << n/d << "\n";                                  // code is only run if d != 0
    }
    catch(const char* e) {                                    // code to run if there is a caught exception
        cerr << "Error: " << e << "\n";
    }

    cout << "\nProgram Continues to Run" << "\n";

    cout << endl;
    return 0;
}
