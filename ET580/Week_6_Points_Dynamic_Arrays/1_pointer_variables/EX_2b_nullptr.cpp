// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // declare an integer pointer p
    // q currently stores garbage
    int *p;

    // initialize an integer pointer q with the value nullptr
    // q points to nullptr (points to nothing)
    int *q = nullptr;

    // we can test if a pointer points to nullptr
    if(q == nullptr) {
        cout << "Q currently points to nothing." << endl;
    }

    cout << endl;
    return 0;
}
