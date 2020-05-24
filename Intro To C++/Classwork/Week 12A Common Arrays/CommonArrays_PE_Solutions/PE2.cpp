// (c) S. Trowbridge & J. Sun
// PE2 - insert element at position

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

    cout << "Insert 4 at index[3]:\n";
    insertAt(numbers, numElements, CAPACITY, 3, 4);
    output(numbers, numElements);

    cout << "Insert 6 at index[5]:\n";
    insertAt(numbers, numElements, CAPACITY, 5, 6);
    output(numbers, numElements);

    cout << "Insert 8 at index[7]:\n";
    insertAt(numbers, numElements, CAPACITY, 7, 8);
    output(numbers, numElements);

    cout << "Insert 10 at index[9]:\n";
    insertAt(numbers, numElements, CAPACITY, 9, 10);
    output(numbers, numElements);

    cout << "Insert 12 at index[11]:\n";
    insertAt(numbers, numElements, CAPACITY, 11, 12); // exceeds capacity, this will not be inserted
    output(numbers, numElements);

    return 0;
}

void insertAt(int n[], int& sizeofn, const int& CAPACITY, int index, int newNumber) {
    if (index >= CAPACITY){
        cout << "Index number exceeds capacity of array. New number can not be added.\n";
        return;
    }

    if(sizeofn < CAPACITY)
    {
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
