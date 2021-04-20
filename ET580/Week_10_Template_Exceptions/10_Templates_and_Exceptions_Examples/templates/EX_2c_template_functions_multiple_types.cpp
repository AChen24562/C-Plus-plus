// S. Trowbridge 2020
#include <iostream>
using namespace std;

template<typename T1, typename T2>                          // two types
void output(T1 a, T2 b) {
    cout << "Output two types: " << a << " " << b << "\n";
}

template <typename T, typename U, typename V>              // three types
V output(T a, U b, V c) {
    cout << "Output two types: " << a << " " << b << "\n";
    cout << "Return another: ";
    return c;
}

int main() {
    cout << endl;

    int i = 1;
    string s = "Hi";
    bool isSomething = true;

    output(i, s);
    output(s, i);
    cout << endl;

    cout << output(i,s, isSomething) << "\n";

    cout << endl;
    return 0;
}
