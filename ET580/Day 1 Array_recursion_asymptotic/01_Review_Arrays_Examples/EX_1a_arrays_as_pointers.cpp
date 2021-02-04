// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    const int SIZE = 10;
    int a[SIZE] = {10,20,30,40,50,60,70,80,90,100};

    cout << a << "\n";                  // value of the variable a
    cout << &(a) << "\n";               // memory address of variable a
    cout << &(a[0]) << "\n\n";          // memory address of the first array value

    int *p = a;                         // store the address of the first array value into a pointer
    cout << p << "\n\n";                // pointer value is the address of the first array value (address of the array)

    cout << sizeof(a) << "\n";          // print the size of an integer array   ( 4 bytes x 10 values )
    cout << sizeof(p) << "\n\n";        // print the size of an integer pointer ( 8 bytes )

    cout << a[5] << "\n";               // bracket operator (add 5 x 4 bytes to the address of a)
    cout << p[5] << "\n";               // bracket operator (add 5 x 4 bytes to the address of a)

    cout << *(a+5) << "\n";             // pointer arithmetic (add 5 x 4 bytes to the address of a, then deference)
    cout << *(p+5) << "\n";             // pointer arithmetic (add 5 x 4 bytes to the address of a, then deference)

    cout << endl;
    return 0;
}
