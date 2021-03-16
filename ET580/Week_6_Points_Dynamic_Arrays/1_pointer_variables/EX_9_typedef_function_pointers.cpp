// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// typedef alias declaration for the function pointer named func
typedef int (*func) (int, int);

int add(int a, int b) {
    return a+b;
}

int multiply(int a, int b) {
    return a*b;
}

void print(int a, int b, func f) {
    cout << f(a,b) << "\n";
}

int main() {
    cout << endl;

    print(5, 6, add);               // call print with add function pointer
    print(5, 6, multiply);          // call print with multiply function pointer

    cout << endl;
    return 0;
}
