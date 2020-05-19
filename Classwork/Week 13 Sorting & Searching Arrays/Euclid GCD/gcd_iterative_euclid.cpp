// S. Trowbridge
//gcd_iterative_euclid.cpp

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int temp;
    while(b != 0) {
        cout << a << " " << b << endl;
        temp = b;
        b = a%b;
        a = temp;
    }
    cout << a << " " << b << endl;
    return a;
}

int main() {
    cout << endl;

    cout << "GCD(240,64)" << endl;
    int answer = gcd(240, 64);
    cout << "GCD = " << answer << endl << endl;

    cout << "GCD(64,240)" << endl;
    answer = gcd(64, 240);
    cout << "GCD = " << answer << endl;

    cout << endl;
    return 0;
}
