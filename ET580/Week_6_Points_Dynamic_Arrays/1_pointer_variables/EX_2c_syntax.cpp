// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int i = 5;            // initialize an int i with the value 5
    int j = 15;
    int *p = nullptr;     // initialize an int pointer q
    p = &i;               // assign p the memory address of i (p points to i)
    *p = 10;              // dereference p to set the value of i to 10

    cout << i << "\n";    // print i
    cout << *p << "\n";   // dereference p to print value of i

    p = &j;               // point p to j (p no longer points to i)
    cout << j << "\n";    // print j
    cout << *p << "\n";   // dereference p to print value of j

    int *a, b;            // declare an int pointer a and an int b
    int c, *d;            // declare an int c and an int pointer d
    double *e, *f;        // declare two double pointers c and d

    cout << endl;
    return 0;
}
