// (c) S. Trowbridge
// Ex 5 - Constants

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // constant variable names should always be UPPERCASE
    // constants are constant, they cannot be modified
    const string PAYDAY = "Friday";

    // PAYDAY = "Monday"; // remove comment to enable faulty code

    cout << "You will be paid on " << PAYDAY << ".\n";

    cout << endl;
    return 0;
}
