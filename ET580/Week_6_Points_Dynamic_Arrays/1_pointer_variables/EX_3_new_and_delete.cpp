// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // create a pointer on the stack and point to a dynamic variable on the heap
    int *q = new int(5);
    cout << *q << "\n";

    // create a pointer on the stack and point to a dynamic variable on the heap
    string *t = new string("Hello");
    cout << *t << "\n";

    // deallocate the heap memory, the pointer variables remain
    delete q; // deallocate *q (the memory pointed to by q)
    delete t; // deallocate *t (the memory pointed to by t)

    cout << endl;
    return 0;   // all memory is recycled when program ends
}
