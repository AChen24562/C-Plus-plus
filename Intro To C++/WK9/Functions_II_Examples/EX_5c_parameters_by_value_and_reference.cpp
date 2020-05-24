// (c) 2018 S. Trowbridge
// Ex 5c - parameters by value & reference

#include <iostream>
using namespace std;

// Pass by reference and Pass by value.
void callBy(int &a, int b);

int main( ) {
    int x, y;

    cout << "Enter the integers: ";
    cin >> x >> y;
    cout << endl;

    cout << "Main Values: " << x << " " << y << endl << endl;

    callBy(x, y); // updates the value of x, not the value of y

    cout << "Main Values: " << x << " " << y << endl << endl;
    return 0;
}

void callBy(int &a, int b) {
    a += 100;
    b += 100;
    cout << "Function Value: " << a << " " << b << endl << endl;
}
