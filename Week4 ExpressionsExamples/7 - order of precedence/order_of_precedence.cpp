// (c) S. Trowbridge
// Ex 7 - Order of Precedence

#include <iostream>

using namespace std;

int main ()
{
    int x,y;

    cout << endl << endl;
    cout << "Expression Evaluation" << endl;
    cout << "----------------------" << endl;

    cout << "x = 5 and y = 10" << endl;
    cout << "x = " << (x = 5)
         << " and y = " << (y = 10) << endl;
    cout << endl;

    cout << "x = " << x << " and y = " << y << endl;
    cout << "x = " << x++ << " and y = " << ++y << endl;
    cout << "x = " << x++ << " and y = " << y++ << endl;

    cout << endl;

    return 0;
}
