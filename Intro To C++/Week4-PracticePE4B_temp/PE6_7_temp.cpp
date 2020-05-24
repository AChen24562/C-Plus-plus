// Name
// WK4 - PE

#include <iostream>
using namespace std;

int main() {

    int x = 3, y = 2, z = 1;

    cout << "Original: " << endl;
    //add your code below

    cout << "(x > y) || (y == z) : " << ((x > y) || (y == z)) << endl;
    cout << "(x > y) || (y == z) : " << ((x > y) || (y == z)) << endl;
    cout << "(x < 4) || ((z == x) && !(x == 3)) : "  << ((x < 4) || ((z == x) && !(x == 3))) << endl << endl;

    cout << "Negate Original: " << endl;
    // negating add '!'
    cout << (!((x > y) || (y == z))) << endl;


    cout << "negated equivalents: " << endl;
    cout << ((x <= y) && (y != z)) << endl;



    return 0;
}
