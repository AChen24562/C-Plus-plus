// S. Trowbridge 2020
#include <iostream>
using namespace std;

void passArray_1(int a[]) {                     // int a[] is a pointer to the first value of the array
    cout << "Size of a: " << sizeof(a) << "\n"; // int a[] decays into int *a (hence the warning)
    cout << "Value of a: " << a << "\n\n";
}

void passArray_2(int *a) {                      // int *a is a pointer to the first value of the array
    cout << "Size of a: " << sizeof(a) << "\n";
    cout << "Value of a: " << a << "\n\n";
}

void print(int *p, int size) {                  // array and size must be included
    for(int i=0; i<size; ++i) {
        cout << p[i] << " ";                    // print value
        cout << &p[i] << "\n";                  // print memory address (note they are contiguous)
    }
}

int main() {
    cout << endl;

    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << "Size of a: " << sizeof(a) << "\n";
    cout << "Value of a: " << a << "\n\n";

    passArray_1(a);
    passArray_2(a);
    cout << "\n";

    print(a,10);

    cout << endl;
    return 0;
}
