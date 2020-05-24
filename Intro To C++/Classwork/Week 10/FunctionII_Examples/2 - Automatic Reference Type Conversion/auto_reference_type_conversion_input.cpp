// (c) S. Trowbridge & J. Sun
// EX 2 Reference Type Conversion

#include <iostream>
using namespace std;
void difference(double& x, int& y);

int main() {
    double x; int y;
    cout << "Enter two numbers:";
    cin >> x >> y;
    cout << "\nx = " << x << "\t" << "\ny = " << y << endl;

    difference(x, y);
    cout << "\nx = " << x
         << "\ny = " << y;
    return 0;
}
void difference(double& x, int& y) {
    x+=10.10;
    y+=10;
    cout << "\nx = " << x
         << "\ny = " << y
         <<"\nDifference  = " << x-y << endl;
}
