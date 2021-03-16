// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// return a pointer to the dynamic array
int* returnAnArray(int size) {
    int *a = new int[size];
    for(int i=0; i<size; ++i) { a[i] = i;}
    return a;
}

void print(int *q, int size) {
    for(int i=0; i<size; ++i) { cout << q[i] << " ";}
}

int main() {
    cout << endl;

    int size = 10;
    // p points to the returned heap array
    int *p = returnAnArray(size);
    cout << "Printing p: ";
    print(p, size);
    delete [] p;

    cout << endl << endl;
    return 0;
}
