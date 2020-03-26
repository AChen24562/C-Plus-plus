// (c)S. Trowbridge
// Ex 8.5 - call by reference

#include <iostream>
using namespace std;

void callByRef_1(int& a);
void callByRef_2(int& a);

int main( ) {
    int a;

    cout << "Enter the integers: ";
    cin >> a;
    cout << endl;

    cout << "Main: a = " << a << endl << endl;

    callByRef_1(a);

    callByRef_2(a);

    cout << "Main: a = " << a << endl << endl;
    return 0;
}

void callByRef_1(int& a) {
    a *= 2;
    cout << "Function_1: a = " << a << endl << endl;
}

void callByRef_2(int& a) {
    a *= 3;
    cout << "Function_2: a = " << a << endl << endl;
}

