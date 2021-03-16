// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// type decay: int b[] is automatically converted to int *b
void testPassByArray(int b[]) {
    cout << "\nPassByArray: " << "\n";
    cout << "Size of b: " << sizeof(b) << "\n";
    cout << "Value of b: " << b << "\n";
}

// int p[] or int *p are acceptable because they are the same due to type decay
void testPassByPointer(int *p) {
    cout << "\nPassByPointer: " << "\n";
    cout << "Size of p: " << sizeof(p) << "\n";
    cout << "Value of p: " << p << "\n";
}

// print an array by pointer
void print(int *p, int size) {
    for(int i=0; i<size; ++i) {
        cout << p[i] << " ";    // print value
        cout << &p[i] << "\n";  // print memory address (note they are contiguous)
    }
}

int main() {
    cout << endl;

    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << "Main:" << "\n";
    cout << "Size of a: " << sizeof(a) << "\n";
    cout << "Value of a: " << a << "\n";

    testPassByArray(a);
    testPassByPointer(a);

    cout << "\n";
    print(a,10);

    cout << endl;
    return 0;
}
