// (c) 2019 S. Trowbridge
// Ex 1 - get index using linear search

#include <iostream>
using namespace std;

// linear search - O(n)
int getIndex(const int numbers[], const int& CAPACITY, int number) {
    for(int i=0; i<CAPACITY; i++) {
        if(numbers[i] == number) {
            return i;
        }
    }
    return -1; // Element not found.
}

int main( ) {
    cout << endl;

    const int CAPACITY = 10;
    int numbers[CAPACITY] = {1, 5, 14, 23, 45, 52, 58, 71, 82, 91};

    for(int i=0; i<CAPACITY; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

    cout << "Number 23 is located at index " << getIndex(numbers, CAPACITY, 23) << endl << endl;
    cout << "Number 58 is located at index " << getIndex(numbers, CAPACITY, 58) << endl << endl;
    cout << "Number 11 is located at index " << getIndex(numbers, CAPACITY, 11) << endl << endl;

    cout << endl;
    return 0;
}
