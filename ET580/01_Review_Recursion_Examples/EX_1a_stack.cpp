// s. trowbridge 2020
#include <iostream>
using namespace std;

void print(int n) {
    cout << n << "\n";
}

int main( ) {
    cout << endl;

    int n = 5;

    // three variables named n are created, one for each function call
    print(n);   // each function call has its own memory space on the stack
    print(n);   // each function call has its own memory space on the stack

    cout << endl;
    return 0;
}
