// (c) S. Trowbridge 2019
// Ex 1 - insertion sort

#include <iostream>
#include <time.h>
using namespace std;

// Insertion Sort - O(n^2)
// Divide the array into two subsets, sorted subset, and the unsorted subset.
// Initially, the sorted subset only contains the first element,
// the unsorted subset contains everything else.
// For each iteration (outer loop):
// Take the first element of the unsorted subset,
// and move it into the sorted subset in sorted position.
// Repeat until the end of the array is reached.
void insertionSort(int a[], int size) {
    int e, pos;                           // create an element and position variable
    for(int i=1; i<size; ++i) {           // loop through the array from second element
        e = a[i];                         // backup the element at the current position
        pos = i;                          // set pos to the current i

        while(pos > 0 && a[pos-1] > e) {  // repeat if pos > 0 and the previous element > e
            a[pos] = a[pos-1];            // copy previous element to current
            pos = pos-1;                  // move position down to previous
        }

        a[pos] = e;                       // store the backed up element to its sorted position
    }
}
void populate(int a[], const int& SIZE) {
    for(int i=0; i<SIZE; ++i) { a[i] = rand() % 100 + 1; }
}
void output(int a[], const int& SIZE) {
    for(int i=0; i<SIZE; ++i) { cout << a[i] << " "; }
    cout << endl;
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int SIZE = 10;
    int a[SIZE];

    cout << "Original: ";
    populate(a, SIZE);
    output(a, SIZE);

    insertionSort(a, SIZE);

    cout << "\nSorted: ";
    output(a, SIZE);

    cout << endl;
    return 0;
}
