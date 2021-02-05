// s. trowbridge 2020
#include <iostream>
using namespace std;

void f3(int c) {
    cout << c << "\n";  // print the value of c
}

void f2(int b) {        // f2 waits for f3
    f3(b);              // assign the value of b to c in the function f3
}

void f1(int a) {        // f1 waits for f2 which waits for f3
    f2(a);              // assign the value of a to b in the function f2
}

int main( ) {
    cout << endl;

    int n = 10;

    // main waits for f1, which waits for f2, which waits for f3
    f1(n);       // assign the value of n to a in the function f1

    cout << endl;
    return 0;
}
