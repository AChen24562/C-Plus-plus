// (c) S. Trowbridge & J. Sun
// 2 L-Value

#include <string>
#include <iostream>
using namespace std;

int main()
{
    int x = 2;
    int y = 3;

    // the initial value of x and y
    cout << endl << endl
         << "Initial Values:" << endl;
    cout << "---------------" << endl;
    cout << "X \t\t\tX = " << x << endl;
    cout << "Y \t\t\tY = " << y << endl;
    cout << endl << endl;

    cout << "Expressions" << endl
         << "-----------" << endl;

    x = y;
    cout << "X = Y \t\t\tX = " << x << endl << endl;

    x = 2, y = 3;   // re-initialize the values
    x = y + 3;
    cout << "X = Y + 3 \t\tX = " << x << endl << endl;

    x = 2, y = 3;    // re-initialize the values
    x = 5 + x * y - 1;
    cout << "X = 5 + X * Y - 1 \tX = " << x << endl << endl;

    x = 2, y = 3;    // re-initialize the values
    x = (5 + x) * y - 1;
    cout << "X = (5 + X) * Y - 1 \tX = " << x << endl << endl;

    x = 2, y = 3;       // re-initialize the values
    x = (5 + x) * (y - 1);
    cout << "X = (5 + X) * (Y - 1) \tX = " << x << endl << endl;

    cout << endl;
    return 0;
}
