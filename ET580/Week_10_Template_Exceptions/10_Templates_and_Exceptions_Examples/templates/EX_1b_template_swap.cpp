// S. Trowbridge 2020
#include <iostream>
using namespace std;

template<typename T>                           // T defines a type
void swapVal(T &a, T &b) {                     // T is replaced by the actual type
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    cout << endl;

    int x=1, y=2;
    char v='V', w='W';

    cout << x << " " << y << "\n";
    swapVal(x, y);                            //  swapVal with two ints
    cout << x << " " << y << "\n\n";

    cout << v << " " << w << "\n";
    swapVal(v, w);                            // swapVal wiht two chars
    cout << v << " " << w << "\n";

    cout << endl;
    return 0;
}
