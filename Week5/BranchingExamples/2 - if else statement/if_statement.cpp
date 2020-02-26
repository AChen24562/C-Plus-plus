// (c) S. Trowbridge & J.Sun
// Ex 2a - if-else statement

#include <iostream>

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


    if(x == y)
        cout << "X == Y" << endl;
    if(x != y)
        cout << "X != Y" << endl;
    if(x > 0)
        cout << "X > 0" << endl;
    if(x > y)
        cout << "X > Y" << endl << endl;
    if(y > 10)
        cout << "Y > 10" << endl;


    return 0;
}

