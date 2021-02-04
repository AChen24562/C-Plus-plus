// S. Trowbridge 2020
#include <iostream>
using namespace std;

void print(int *a, int size) {               // print array
    for(int i=0; i<size; ++i) {              // iterate from 0 to size-1
        cout << a[i] << " ";                 // print value at index i
    }
}

int getIndex(int *a, int size, int value) {  // linear search
    for(int i=0; i<size; i++) {              // iterate from 0 to size-1
        if(a[i] == value) {                  // if num[i] is same as value
            return i;                        //    return i (the location of the value)
        }
    }
    return -1;                               // return -1 if value not found in the array
}

int main( ) {
    cout << endl;

    const int SIZE = 10;
    int numbers[SIZE] = {1, 5, 14, 23, 45, 52, 58, 71, 82, 91};

    print(numbers, SIZE);
    cout << "\n\n";

    cout << "Number 23 at index " << getIndex(numbers, SIZE, 23) << "\n";
    cout << "Number 58 at index " << getIndex(numbers, SIZE, 58) << "\n";
    cout << "Number 11 at index " << getIndex(numbers, SIZE, 11) << "\n";

    cout << endl;
    return 0;
}
