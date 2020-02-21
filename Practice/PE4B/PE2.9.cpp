// (c) S. Trowbridge
// WK4 - PE

#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter an integer x: ";
    cin >> x;

    cout << "Is " << x
         << " not a multiple of 3 and not a multiple of 7 (1 = True, 0 = False)? "
         << ((x%3!=0)&&(x%7!=0))<< endl;

    return 0;
}
