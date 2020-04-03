// (c) S. Trowbridge 2019
// EX 7b Reference Type Conversion

#include <iostream>
using namespace std;


void difference(double& x, double& y);

int main() {
    int x = 1, y = 2;

    // call by reference parameters cannot be casted (int to double)
    // they must match type (this will not compile)
    difference(x, y);

    return 0;
}

void difference(double& x, double& y) {
    cout << x+y << endl;
}
