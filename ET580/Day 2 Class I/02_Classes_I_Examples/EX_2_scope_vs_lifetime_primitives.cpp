// S. Trowbridge 2020
#include <iostream>
using namespace std;

// pass and return by value
int f1(int val) {
    cout << "val            " << &val << endl;
    return val;
}

// pass and return by reference
int& f2(int &r) {
    cout << "r              " << &r << endl;
    return r;
}

int main() {
    cout << endl;

    int i = 1;
    cout << "i              " << &i << "\n\n";

    i = f1(i);
    cout << "i              " << &i << "\n\n";

    i = f2(i);
    cout << "i              " << &i << "\n\n";

    cout << endl;
    return 0;
}
