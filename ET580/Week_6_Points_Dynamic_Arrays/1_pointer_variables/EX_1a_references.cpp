// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // int variable
    int i = 5;

    // & is called the "addressof" operator
    // initialize a reference or alias for i
    // a reference is an additional name (alias)for an existing memory location
    int &r = i;

    // output the values of i and r
    // i and r are two different names (aliases) for the same memory location
    cout << i << " " << r << "\n\n";

    // output the memory addresses of i and r
    // i and r are two different names (aliases) for the same memory location
    cout << &i << " " << &r << "\n";

    cout << endl;
    return 0;
}
