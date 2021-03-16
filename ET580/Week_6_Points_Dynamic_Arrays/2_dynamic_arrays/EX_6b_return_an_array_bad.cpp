// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// this function is incorrect, why?
int* returnAnArrayBad(int size) {
    int b[5] = {1,2,3,4,5};
    for(int i=0; i<size; ++i) { b[i] = i;}
    return b;
}

void print(int *q, int size) {
    for(int i=0; i<size; ++i) { cout << q[i] << " ";}
}

int main() {
    cout << endl;

    int size = 10;
    int *p = returnAnArrayBad(size);
    print(p, size);
    delete [] p;

    cout << endl;
    return 0;
}
