// (c) S. Trowbridge & J. Sun
// Function II - PE

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << endl;

    cout << "Cubic root: " << cbrt(n) << endl;
    cout << "n to m power: " << pow(n,3) << endl;
    cout << endl;

    double d;
    cout << "Enter a double: ";
    cin >> d;
    cout << endl;

    cout << "Rounded up: " << ceil(d) << endl;
    cout << "Rounded down: " << floor(d) << endl;
    cout << "Round Default: " << round(d) << endl;
    cout << endl;

    return 0;
}
