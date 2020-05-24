// (c) S. Trowbridge
// Ex 2b - if-else statement

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y;

    cout << "\n\nIf/Else Example" << endl;
    cout << "---------------" << endl;
    cout << "Enter two integers (X and Y), each separated by a space: ";
    cin >> x >> y;
    cout << endl << endl;

    cout << "Variables: " << endl;
    cout << "----------" << endl;
    cout << "X assigned to " << x << endl;
    cout << "Y assigned to " << y << endl << endl << endl;

    cout << "True Statements: " << endl;
    cout << "----------------" << endl;

    if( x > y )
        cout << "X > Y" << endl << endl;
    else
        cout << "X <= Y" << endl << endl;

    return 0;
}
