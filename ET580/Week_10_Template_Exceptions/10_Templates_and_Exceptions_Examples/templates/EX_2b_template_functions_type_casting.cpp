// S. Trowbridge 2020
#include <iostream>
using namespace std;

template<typename T>
void swapVal(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    cout << endl;

    int x = 1;
    double y = 5.4;

    cout << x << " " << y << "\n";
    swapVal(x, y);                  // compiler error: template cannot auto type cast
    cout << x << " " << y << "\n";

    cout << endl;
    return 0;
}
