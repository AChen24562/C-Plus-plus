// (c)S. Trowbridge
// Ex 8.1 - sum function

#include <iostream>
using namespace std;

// function prototype/declaration
int sumTwoIntegers(int a, int b);

int main() {
    int x, y;

    cout << "Sum two Integers" << endl;
    cout << "----------------" << endl;

    cout << "Enter two integers (x y): ";
    cin >> x >> y;

    // function call with variable parameters returns value to a variable
    int sum = sumTwoIntegers(x, y);
    cout << "\nThe sum of " << x << " and " << y << " is " << sum << "." << endl;

    // inline function call with literals returns value to the output stream
    cout << "\nThe sum of 12 and 20 is " << sumTwoIntegers(12, 20) << "." << endl;

    cout << endl;
    return 0;
}

// function definition
int sumTwoIntegers(int a, int b) {
    int sum = a + b;
    return sum;
}

