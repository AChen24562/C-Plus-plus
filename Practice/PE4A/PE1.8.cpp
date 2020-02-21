// (c) S. Trowbridge & J. Sun
// WK4 - PE

#include <iostream>
using namespace std;

int main() {

    int x;

    cout << "Enter a value for x: ";
    cin >> x;

    cout << "X incremented by 2: " << (x+=2) << endl;

    //Test x-- and --x
    cout << "X decremented by 1: " << --x << endl;

    //cout << "x = " << x << endl;


    return 0;
}
