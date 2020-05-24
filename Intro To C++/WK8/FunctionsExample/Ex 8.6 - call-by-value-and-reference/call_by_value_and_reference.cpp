// (c)S. Trowbridge
// Ex 8.6 - call by reference

#include <iostream>
using namespace std;

void callBy(int& a, int b);

int main( ) {
    int a, b;

    cout << "Enter the integers: ";
    cin >> a >> b;
    cout << endl;

    cout << "Main Values: " << a << " " << b << endl << endl;

    callBy(a, b);

    cout << "Main Values: " << a << " " << b << endl << endl;
    return 0;
}

void callBy(int& a, int b) {
    a += 100;
    b += 100;
    cout << "Function Value: " << a << " " << b << endl << endl;
}
