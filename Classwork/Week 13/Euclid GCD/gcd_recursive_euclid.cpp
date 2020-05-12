// S. Trowbridge
//gcd_recursive_euclid.cpp

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    cout << a << " " << b << endl;
    if(b == 0)
        return a;
     return gcd(b, a%b);
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
