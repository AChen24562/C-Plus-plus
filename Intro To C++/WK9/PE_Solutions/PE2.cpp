// (c) S. Trowbridge
// Functions PE

#include <iostream>
using namespace std;


int main( ) {
     int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "x is " << x << ", y is " << y << endl;
    cout << endl;

    //swap
    int temp = x;
    x = y;
    y = temp;

    cout << "Swapped values: " << endl;
    cout << "x is " << x << ", y is " << y << endl;
    cout << endl;

    return 0;
}

