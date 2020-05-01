// (c) S. Trowbridge & J. Sun
// Ex - getIndex

#include <iostream>
using namespace std;

int getIndex(const int n[], const int& CAP, int x);

int main( ) {
    const int SIZE = 10;
    int numbers[SIZE] = {1, 5, 2, 6, 3, 7, 4, 8, 5, 9};

    cout << "Array: \t";
    for(int i=0; i<SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    cout << "Number 7 is located at index " << getIndex(numbers, SIZE, 7) << endl;
    cout << "Number 3 is located at index " << getIndex(numbers, SIZE, 3) << endl;
    cout << "Number 11 is located at index " << getIndex(numbers, SIZE, 11) << endl;

    return 0;
}

int getIndex(const int n[], const int& CAP, int x) {
    for(int i=0; i<CAP; i++) {
        if(n[i] == x)
            return i;
    }

    cout << "\nInvalid input value.  Index can not be found.\n";
    return -1;
}
