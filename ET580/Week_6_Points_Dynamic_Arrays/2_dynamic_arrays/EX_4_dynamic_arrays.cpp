// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

void populate(int *p, int size) {
    for(int i=0; i<size; ++i) {
        p[i] = i+1;
    }
}

void print(int *p, int size) {
    for(int i=0; i<size; ++i) {
        cout << p[i] << " ";    // print value
        cout << &p[i] << "\n";  // print memory address (contiguous)
    }
}

int main() {
    cout << endl;

    // dynamic array creation
    int *a = new int[10]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // print sizeof a (pointer type)
    cout << "Size of a: " << sizeof(a) << endl << endl;

    populate(a, 10);
    print(a, 10);

    // deallocate all heap memory in the array
    delete [] a;

    cout << endl;
    return 0;
}
