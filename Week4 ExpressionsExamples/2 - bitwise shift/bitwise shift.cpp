// (c) S. Trowbridge & J. Sun
// Ex 2 - Bitwise Shift (check order of precedence on handout)


#include <iostream>

using namespace std;

int main()
{
    // in binary, 0 is represented by 0000
    int i = 0;
    i = 2;  // in binary, 2 is represented by 0010

    // shift left by 1 bit (0100)
    cout << endl << endl;
    cout << "Answer: " << (i = i << 1) << endl;

    // shift right by 2 bit (0001)
    cout << endl << endl;
    cout << "Answer: " << (i = i >> 2) << endl << endl;


    return 0;
}
