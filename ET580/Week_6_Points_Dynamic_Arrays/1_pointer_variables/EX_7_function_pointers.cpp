// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}

int multiply(int a, int b) {
    return a*b;
}

void print( int a, int b, int (*f)(int, int) ) {
    cout << (*f)(a,b) << "\n";
}

int main() {
    cout << endl;

    int (*f)(int, int);             // create a function pointer

    f = add;                        // point to add function
    cout << (*f)(5, 6) << "\n";     // explicitly dereference and call the sum function

    f = multiply;                   // point to multiply function
    cout << f(5, 6) << "\n\n";      // implicitly dereference and call the multiply function

    print(5, 6, add);               // call print with add function pointer
    print(5, 6, multiply);          // call print with multiply function pointer

    cout << endl;
    return 0;
}
