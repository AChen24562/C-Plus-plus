// (c) S. Trowbridge
// Functions I PE3

#include <iostream>
using namespace std;
void swapByValue(int , int );
void swapByRef(int& x, int& y);
int main( ) {
     int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "x is " << x << ", y is " << y << endl;
    cout << endl;

    swapByValue(x,y);
    cout << "Swapped values: " << endl;
    cout << "x is " << x << ", y is " << y << endl;
    cout << endl;

    swapByRef(x,y);
    cout << "Swapped values: " << endl;
    cout << "x is " << x << ", y is " << y << endl;
    cout << endl;

    return 0;
}
void swapByValue(int x, int y){
    //swap
    int temp = x;
    x = y;
    y = temp;
}
void swapByRef(int& x, int& y){
    //swap
    int temp = x;
    x = y;
    y = temp;
}

