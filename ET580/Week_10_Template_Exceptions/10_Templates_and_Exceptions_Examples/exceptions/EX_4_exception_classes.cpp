// S. Trowbridge 2020
#include <iostream>
using namespace std;

class DivByZero {                                             // exception class
private:
    const char* message;                                      // error message (constant char array)
public:
    DivByZero(): DivByZero("") { }
    DivByZero(const char* msg): message(msg) { }              // store a message in the object
    const char* getMessage() const { return message; };       // return the stored message
};

double divide(double a, double b) {
    if(b == 0) { throw DivByZero("Cannot divide by zero."); } // end function and throw exception
    return a/b;                                               // if no exception run this
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
    catch(const DivByZero &e) {                               // code to run if there is a caught exception
        cerr << "Error: " << e.getMessage() << "\n";
    }

    cout << "\nProgram Continues" << "\n";

    cout << endl;
    return 0;
}
