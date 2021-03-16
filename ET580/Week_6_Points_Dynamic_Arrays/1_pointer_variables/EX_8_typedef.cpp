// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// define aliases for the type int*
typedef int* debit;
typedef int* credit;

// debit is easier to read and more descriptive then int*
void printLoss(debit d) {
    cout << *d << endl;
}

// credit is easier to read and more descriptive then int*
void printGain(credit c) {
    cout << *c << endl;
}

int main() {
    cout << endl;

    debit p = new int(5000);
    credit q = new int(10000);

    printLoss(p);
    printGain(q);

    cout << endl;
    return 0;
}
