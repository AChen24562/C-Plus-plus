// (c) J.Sun
// Ex 3a - Testing Division

#include <iostream>

using namespace std;

int main()
{
//--------------------------------------------
    float x,y;
    x = 5/2;
    y = 10/8;
    cout << " x = " << x << endl;
    cout << " y = " << y << endl;

    x = 5.0/2;
    y = 10/8.0;
    cout << " x = " << x << endl;
    cout << " y = " << y << endl;

//---------------------------------------------
    int a,b;
    a = 5/2;
    b = 10/8;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;


    a = 5.0/2;
    b = 10/8.0;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;

//--------------------------------------------
    cout.setf(ios::fixed);
    cout.precision(5);
    x = 5/2;
    y = 10/8;
    cout << " x = " << x << endl;
    cout << " y = " << y << endl;

    a = 5.0/2;
    b = 10/8.0;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;



    return 0;
}
