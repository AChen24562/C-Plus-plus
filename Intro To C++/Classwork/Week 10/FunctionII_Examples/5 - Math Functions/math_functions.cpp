// (c) S. Trowbridge & J. Sun
// EX 5 Math Functions

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int root = sqrt(36);
    int power = pow(2,5);
    int absVal = abs(-50);
    //int roundUp = ceil(6.1);
    //int roundDown = floor(6.9);
    //int rounded = round(6.45);

    cout << "Square root of 36 = \t\t" << root << endl << endl;
    cout << "2 to the 5th power = \t\t" << power << endl << endl;
    cout << "Absolute value of -50 = \t" << absVal << endl << endl;
    cout << "Ceiling function for 6.1 = \t" << ceil(6.1) << endl << endl;
    cout << "Floor function for 6.9 = \t" << floor(6.9) << endl << endl;
    cout << "Round function for 6.45 = \t" << round(6.45) << endl << endl;

    return 0;
}
