// (c)S. Trowbridge & J.Sun
// Ex 8.1 - division

#include <iostream>
#include <string>
using namespace std;

// function prototypes/declarations
double divide(double numerator, int denonimator);
int mod(int numerator, int denominator);

int main() {
    int x, y;

    cout << "Divide two Integers" << endl;
    cout << "----------------" << endl;

    do{
        cout << "Enter two integers (x y): ";
        cin >> x >> y;
        if (y==0)
            cout<< "Denominator can not be zero.  Please re-enter.\n\n";
        else
            break;
    }while(true);


    // function call returns value to a variable
    double q = divide(x, y);
    cout << "\nThe quotient of " << x << " and " << y << " is " << q << "." << endl;

    // inline function call returns value to the output stream
    cout << "\nThe remainder of " << x << " and " << y << " is " << mod(x, y) << "." << endl;

    cout << endl;
    return 0;
}

// function definitions
double divide(double numerator, int denonimator) {
    double quotient = numerator / denonimator;
    return quotient;
}

int mod(int numerator, int denominator) {
    return numerator % denominator;
}
