// (c) S. Trowbridge & J. Sun
// Ex 1 - Array Append and Remove

#include <iostream>
using namespace std;

void append(int a[], int& n, const int& CAP, int x);
void removeLast(int a[], int& numElements);
void outputArray(const int a[], int numElements);

int main( ) {
    const int CAPACITY = 10;
    int myArray[CAPACITY];
    int numElements = 0;

    // append the number 5, 6 and 7
    append(myArray, numElements, CAPACITY, 5);
    cout << "numElements = " << numElements << endl;
    outputArray(myArray, numElements);

    append(myArray, numElements, CAPACITY, 6);
    cout << "numElements = " << numElements << endl;
    outputArray(myArray, numElements);

    append(myArray, numElements, CAPACITY, 7);
    cout << "numElements = " << numElements << endl;
    outputArray(myArray, numElements);

    // remove the last number in the array (7)
    removeLast(myArray, numElements);

    // output array
    outputArray(myArray, numElements);

    cout << endl << endl;
    return 0;
}
void append(int a[], int& n, const int& CAP, int x) {
    if(n < CAP) {
        a[n] = x;
        n++;
    }
}
void removeLast(int a[], int& n) {
    n--;
}
void outputArray(const int a[], int n) {
    cout << "Simple array: ";
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl << endl;
}
