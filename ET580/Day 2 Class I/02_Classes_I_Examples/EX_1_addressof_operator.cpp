// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // int variable
    int i = 5;

    // output the value of i and the memory address of i
    // & in this context is called the "addressof" operator
    cout << i << " " << &i << "\n\n";

    // initialize a reference or alias for i
    // a reference or alias is an additional name for the same memory location
    int &r = i;

    // output the values of i and r
    cout << i << " " << r << "\n\n";

    // output the memory addresses for i and r
    cout << &i << " " << &r << "\n";

    cout << endl;
    return 0;
}
