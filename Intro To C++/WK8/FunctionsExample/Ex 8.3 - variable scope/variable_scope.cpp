// (c)S. Trowbridge
// Ex 8.3 - variable scope

#include <iostream>
using namespace std;

int main( ) {
    cout << "Example 1:" << endl;
    cout << "----------" << endl;
    int x = 4;
    cout << "Main  x: " << x << endl;
    {
        cout << "Outer x: " << x << endl;
        {
            cout << "Inner x: " << x << endl;
        }
    }
    cout << "Main  x: " << x << endl;
    cout << endl << endl;



    cout << "Example 2:" << endl;
    cout << "----------" << endl;
    int y = 1;
    cout << "Main  y: " << y << endl;
    {
        int y = 2;
        cout << "Outer y: " << y << endl;
        {
            int y = 3;
            cout << "Inner y: " << y << endl;
        }
    }
    cout << "Main  y: " << y << endl;
    cout << endl << endl;



    cout << "Example 3:" << endl;
    cout << "----------" << endl;
    cout << "Testing the value of i: " << endl;
    int i=0;
    for(int i=1; i<=10; i++)
    {
        cout << i << " ";
    }
    cout << "\n\ni is " << i << endl;

    cout << endl;
    return 0;
}
