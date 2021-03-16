// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int *p = new int(1);    // declare memory on the heap
    delete p;               // deallocate the memory pointed to by p

    // point p to nullptr to avoid a dangling pointer
    // assign p to a new pointer since it is safe to do so
    p = nullptr;
    if(p == nullptr) {
        p = new int(100);
    }

    cout << endl;
    return 0;               // all memory is recycled when program ends
}
