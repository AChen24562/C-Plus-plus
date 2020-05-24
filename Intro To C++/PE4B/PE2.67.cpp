// (c) S. Trowbridge & J. Sun
// WK4 - PE

#include <iostream>
using namespace std;

int main() {

    int x = 3, y = 2, z = 1;

    cout << "Original: " << endl;
    cout << "(x > y) || (y == z) : " << ((x>y) || (y==z)) << endl;
    cout << "(y >= z) && !(x == 3) : " << ((y >= z) && !(x == 3)) << endl;
    cout << "(x < 4) || ((z == x) && !(x == 3)) : "
         << ((x < 4) || ((z == x) && !(x == 3))) << endl << endl;


    cout << "Negate Original: " << endl;
    cout << "(!(x > y) || (y == z)) : " << (!(x > y) || (y == z)) << endl;
    cout << "(!((y >= z) && !(x == 3))) : " << (!((y >= z) && !(x == 3))) << endl;
    cout << "(!((x < 4) || ((z == x) && !(x == 3)))) : "
         << (!((x < 4) || ((z == x) && !(x == 3)))) << endl << endl;

    cout << "negated equivalents: " << endl;
    cout << "(x <= y) && (y != z) : " << ((x <= y) && (y != 1)) << endl;
    cout << "(y < z) || (x == 3) : " << ((y < z ) || (x == 3)) << endl;
    cout << "(x >= 4) && ((z != x) || (x == 3)) : "
         << ((x >= 4) && ((z != x) || (x == 3))) << endl << endl;


    return 0;
}
