// S. Trowbridge 2020
#include <iostream>
using namespace std;

int getIndex(int *a, const int& SIZE, int value) {  // linear search - O(n)
    for(int i=0; i<SIZE; i++) {                     // iterate from 0 to size-1
        //cout << a[i] << "\n";
        if(a[i] == value) {                         // if value found
            return i;                               //    return index
        }
    }
    return -1;                                      // value not found
}

int main( ) {
    cout << endl;

    const int SIZE = 10;
    int numbers[SIZE] = {1, 5, 14, 23, 45, 52, 58, 71, 82, 91};

    for(int i=0; i<SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << "\n\n";

    cout << "Number 23 is located at index " << getIndex(numbers, SIZE, 23) << endl << endl;
    cout << "Number 58 is located at index " << getIndex(numbers, SIZE, 58) << endl << endl;
    cout << "Number 11 is located at index " << getIndex(numbers, SIZE, 11) << endl << endl;

    cout << endl;
    return 0;
}
