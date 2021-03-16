// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // int variable
    int i = 5;

    // initialize an integer pointer to the integer variable i
    // a pointer stores the memory address of another variable
    int *p = &i;

    // output the value of i and the memory address of i
    cout << i << " " << &i << "\n\n";

    // output the values of i and p
    // the value of p is the memory address of i
    cout << i << " " << p << "\n\n";

    // output the memory addresses of i and p
    // i and p are different variables, so they have different memory addresses
    cout << &i << " " << &p << "\n";

    cout << endl;
    return 0;
}
