// (c) S. Trowbridge
// WK4 - PE

#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter an integer x: ";
    cin >> x;

    cout << "Is " << x << " not a multiple of 5 (1 = True, 0 = False)? " << (x%5!=0) << endl;

    return 0;
}
