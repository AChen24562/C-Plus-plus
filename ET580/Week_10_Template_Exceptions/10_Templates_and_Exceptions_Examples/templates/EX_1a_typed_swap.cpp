// S. Trowbridge 2020
#include <iostream>
using namespace std;

void swapVal(int& a, int& b) {      // swap for integers
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapVal(char& a, char& b) {    // swap for characters
    char temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    cout << endl;

    int x = 1, y = 2;
    char v = 'V', w = 'W';

    cout << x << " " << y << "\n";
    swapVal(x, y);
    cout << x << " " << y << "\n\n";

    cout << v << " " << w << "\n";
    swapVal(v, w);
    cout << v << " " << w << "\n";

    cout << endl;
    return 0;
}
