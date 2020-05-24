// (c) S. Trowbridge & J. Sun
// Ex 5 - Constants

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // constant variable names should always be UPPERCASE
    // constants are constant, they cannot be modified
    const float PI = 3.1415926;

    //PI += 1;
    float n = PI + 1;

    cout << n << endl;

    cout << endl;
    return 0;
}
