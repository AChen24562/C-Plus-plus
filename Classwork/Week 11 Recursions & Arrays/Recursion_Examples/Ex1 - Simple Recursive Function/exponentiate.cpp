// (c) S. Trowbridge
// Ex1 - calculate exponents

#include <iostream>
using namespace std;

double exponentiate(int x, int e);

int main( ) {
    int num = 2;
    int exponent = 3;
    cout << num << " to the power of " << exponent << " is "
         << exponentiate(num, exponent) << ".\n";

    return 0;
}


double exponentiate(int x, int e) {
    if(e == 0)
        return 1;
    else
        return x * exponentiate(x, e-1);
}
