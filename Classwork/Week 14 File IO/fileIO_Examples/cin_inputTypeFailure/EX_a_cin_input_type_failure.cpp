// (c) S. Trowbridge
// Ex a - cin input type failure

#include <iostream>
using namespace std;

int main( ) {
    // Enter letters (improper type) to demonstrate cin failures.
    int i;
    cout << "Enter an integer: ";
    cin >> i;
    cout << i << endl << endl;

    int j;
    cout << "Enter another integer: ";
    cin >> j;
    cout << j << endl << endl;

    return 0;
}
