// (c)S. Trowbridge
// Ex 8.4 - call by value

#include <iostream>
using namespace std;

void callByValue_1(int a);
void callByValue_2(int a);

int main( ) {
    int a;

    cout << "Enter the integers: ";
    cin >> a;
    cout << endl;

    cout << "Main: a = " << a << endl << endl;

    callByValue_1(a);

    callByValue_2(a);

    cout << "Main: a = " << a << endl << endl;
    return 0;
}

void callByValue_1(int a) {
    a *= 2;
    cout << "Function_1: a = " << a << endl << endl;
}

void callByValue_2(int a) {
    a *= 3;
    cout << "Function_2: a = " << a << endl << endl;
}

