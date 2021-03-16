// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int *p = new int(1);    // declare memory on the heap
    p = new int(2);         // memory leak (first heap variable was never deleted)

    // 2 possible methods of avoiding memory leaks
    // 1) delete the first dynamic variable before creating a new one
    int *q = new int(1);
    delete q;
    q = new int(2);

    // 2) create another pointer to store the location of the first dynamic variable
    int *r = new int(1);
    int *backup = r;
    r = new int(2);

    cout << endl;
    return 0;               // all memory is recycled when program ends
}
