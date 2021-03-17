// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // a static array is created on the stack with a fixed size
    int a[5] = {10, 20, 30, 40, 50};

    // 'a' is a static array of type int[5]
    // 'a' is also the memory location of the first element of the array
    // Memory addresses are in hexadecimal which is base 16 equating to 0-15 in decimal:
    // Hexadecimal values are: 0-9,A-F where A==10, B==11, C==12, D==13, E==14, F==15
    cout << "Address of a: " << a << "\n";
    cout << "Address of a: " << &a << "\n\n";

    // sizeof(x) prints the total memory usage of any variable x in bytes
    // a is of type int[5], and each integer requires 4 bytes of space so:
    // sizeof(a) == arraySize * typeSize == 5 * 4 == 20
    cout << "Size of a: " << sizeof(a) << "\n\n";

    // calculate memory addresses:
    // all positions from first address can be calculated using this formula:
    // size * index + startAddress
    // a[0] = 4 * 0 + 2000 = 2000
    // a[1] = 4 * 1 + 2000 = 2004
    // a[2] = 4 * 2 + 2000 = 2008 etc.
    for(int i=0; i<5; ++i) {
      cout << a[i] << "\t" << &a[i] << "\n";
    }

    cout << endl;
    return 0;
}
