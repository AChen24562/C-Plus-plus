// S. Trowbridge 2020
#include <iostream>
using namespace std;

// inline function:
// compiler replaces the function call with actual function code
inline void output(int a[], int size)  {
    for(int i=0; i<size; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    cout << endl;

    const int SIZE = 5;
    int a[SIZE] = {1,2,3,4,5};

     // output function code is placed here by compiler instead of a function call
    output(a, SIZE);

    cout << endl;
    return 0;
}
