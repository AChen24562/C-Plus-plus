// (c) S. Trowbridge
// Ex 4 - uninitialized variables

#include <iostream>
using namespace std;

int main () {
    // x is declared
    int x ;


    // by default, x will contain a garbage value
    cout << "X = " << x << endl;

    // since x is a garbage value
    // the value of y is unpredictable
    int y = x + 1;
    cout << "Y = " << y << endl;

    cout << endl;
    return 0;
}
