// (c) S. Trowbridge & J. Sun
// Ex 4 - conditional if statement

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y;

    cout << "\n\nConditional If Example" << endl;
    cout << "---------------" << endl;
    cout << "Enter two integers, each separated by a space: ";
    cin >> x >> y;
    cout << endl;


    //------------------------------------------------------------------------------------
    cout << "Is " << x << " greater than or equal to " << y << "? " << endl << endl;
    string result = (x >= y ? "Yes, it is." : "No, it isn't.");
    cout << result << endl;
    //cout << (x >= y ? "Yes, it is." : "No, it isn't.") << endl;

    //-------------------------------------------------------------------------------------
    cout << "Is " << x << " greater than or equal to " << y << "? " << endl << endl;
    int a = (x >= y ? a = 1: a = 0);
    cout << a << endl;
    //cout << (x >= y ? a = 1: a = 0) << endl;

    //-------------------------------------------------------------------------------------
    cout << "Is " << x << " greater than or equal to " << y << "? " << endl << endl;
    bool b;
    //b = (x >= y ? b = 1: b = 0);
    //cout << b << endl;
    cout << (x >= y ? b = 1: b = 0) << endl;


    cout << endl;
    return 0;
}
