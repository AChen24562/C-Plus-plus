// (c)J. Sun
// WK4 - PE

#include <iostream>
using namespace std;

int main( ) {

    cout << "WK4 Programming Exercises 1 - 7" << endl;
    cout << "-------------------------------" << endl;
    int x, y;
    cout << "Q1:";
    int a = 10;
    bool b = 1;
    x = b = (1 + 2 + 3)/a;
    //x = b = (1 + 2 + 3)/(double)a;
    cout << x << endl;


    cout << "Q2:";
    x = 1; y = 10;
    y = ++x;
    x += y * 3;
    cout << x << endl;

    cout << "Q3:";
    x = 10, y = 4;
    x /= y;
    cout << x << endl;

    cout << "Q4:";
    x = static_cast<int>(9.99);
    cout << x << endl;

    cout << "Q5:";
    x = 2.5; y = 2.5;
    x *= y;
    cout << x << endl;

    cout << "Q6:";
    double X = 2.5; y = 2.5;
    X *= y;
    cout << X << endl;

    cout << "Q7:";
    double z = 2.5;
    X = 2.5;
    X *= z;
    //x = X;
    cout << X << endl;
    //cout << x << endl;


    return 0;
}
