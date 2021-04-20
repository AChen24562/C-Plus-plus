// S. Trowbridge 2020
#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b) {                      // T pass by value and T return
    return a + b;
}

int main() {
    cout << endl;

    cout << add(5, 7) << "\n";         // sum two integers
    cout << add(5.5, 3.2) << "\n";     // sum two doubles

    string s1 = "Hi ";
    string s2 = "There";
    cout << add(s1, s2) << "\n";       // concatenate two strings

    cout << endl;
    return 0;
}
