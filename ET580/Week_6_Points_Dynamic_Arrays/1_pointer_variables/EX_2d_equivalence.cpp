// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // initialize a double and two double pointers
    double d = 3.14;
    double *p = &d, *q = &d;

    // print values
    cout << " d: " << d << "\n";
    cout << "&d: " << &d << "\n\n";

    cout << " q: " << q << "\n";
    cout << " p: " << p << "\n";
    cout << "*q: " << *q << "\n";
    cout << "*p: " << *p << "\n\n";

    // testing if p and q are the same variable (same memory address)
    if(&p == &q)
        cout << " &p == &q" << "\n";
    else
        cout << " &p != &q" << "\n";

    // testing if p and q point to the same variable (same value)
    if(p == q)
        cout << " p == q" << "\n";
    else
        cout << " p != q" << "\n";

    // point q to a new variable e with the same value as d
    double e = 3.14;
    q = &e;

    // testing if p and q point to variables with equivalent values
    if(*p == *q)
        cout << " *p == *q" << "\n";
    else
        cout << " *p != *q" << "\n";

    cout << endl;
    return 0;
}
