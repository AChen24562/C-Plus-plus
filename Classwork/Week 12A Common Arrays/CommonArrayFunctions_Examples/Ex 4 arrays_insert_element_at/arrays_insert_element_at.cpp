// (c) S. Trowbridge & J. Sun
// Ex 4 - insert element at position

#include <iostream>
using namespace std;

void insertAt(int n[], int& sizeofn, const int& CAPACITY, int index, int newNumber);
void output(const int n[], const int& SIZE);

int main( ) {
    const int CAPACITY = 10;
    int numbers[CAPACITY] = {1, 3, 5, 7, 9};
    int numElements = 5;

    output(numbers, numElements);

    cout << "Insert 2 at index[1]:\n";
    insertAt(numbers, numElements, CAPACITY, 1, 2);
    output(numbers, numElements);

    return 0;
}

void insertAt(int n[], int& sizeofn, const int& CAPACITY, int index, int newNumber) {

    if(sizeofn < CAPACITY){
        for(int i=sizeofn; i>index; i--) {
            n[i] = n[i-1];
        }
        n[index] = newNumber;
        sizeofn++;
    }
}

void output(const int n[], const int& SIZE) {
        cout << "Array of " << SIZE << " elements: \t";
        for(int i=0; i<SIZE; i++) {
            cout << n[i] << " ";
        }
        cout << endl << endl;
}
