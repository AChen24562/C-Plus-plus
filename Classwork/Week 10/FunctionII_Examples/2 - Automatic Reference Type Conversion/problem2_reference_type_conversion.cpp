// (c) S. Trowbridge & J. Sun
// EX 2 Reference Type Conversion

#include <iostream>
using namespace std;

void difference(double& x, int& y);

int main() {
  // these must match with the functions parameters
    int x = 1;
    int y = 2;
    cout << "\nx = " << x << "\t" << "\ny = " << y << endl;

    difference(x, y);
    cout << "\nx = " << x << "\t" << "\ny = " << y << endl;
    return 0;
}

void difference(double& x, int& y) {
    x+=10.10;
    y+=10;
    cout << "\nx = " << x
         << "\ny = " << y
         <<"\nDifference  = " << x-y << endl;
}
