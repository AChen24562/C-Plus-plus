// (c) S. Trowbridge
// Ex 3b - Types of Division

#include <iostream>

using namespace std;

int main()
{
    float quotient;
    int integerQuotient;
    int remainder;

    quotient = 12.0 / 5.0;
    integerQuotient = 12 / 5;
    remainder = 12 % 5;

    cout << "\n\nFloating-point division:\n";
    cout << "12.0 / 5.0 = " << quotient << "\n\n";
    cout << "Integer division:\n";
    cout << "12 / 5 = " << integerQuotient << "\n\n";
    cout << "Modulo division:\n";
    cout << "12 % 5 = "<< remainder << "\n\n";


    return 0;
}
