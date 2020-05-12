// (c) S. Trowbridge 2019
// Ex 2 - selection sort

#include <iostream>
#include <time.h>
using namespace std;

// Selection Sort - O(n^2)
// Divide the array into two subsets, sorted subset, and the unsorted subset.
// Initially, the sorted subset is empty, the unsorted subset contains everything else.
// For each iteration (outer loop):
// Find the minimum of the unsorted subset,
// and move it to the end of the sorted subset.
// Repeat until the end of the array is reached.
void selectionSort(int a[], const int &SIZE) {
    for(int pos=0; pos<SIZE-1; ++pos) {     // iterate through the array
        int min = pos;                      // set unsorted min index to current position
        for(int e=pos+1; e<SIZE; ++e) {     // e iterates from pos+1 to end of the array
            if(a[e] < a[min]) {             // find the minimum element in the unsorted subset,
                min = e;                    // if found, update unsorted min index to new position
            }
        }
        swap(a[pos], a[min]);               // swap current element and unsorted minimum element
    }
}
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void populate(int a[], const int& SIZE) {
    for(int i=0; i<SIZE; ++i) {
       a[i] = rand() % 100 + 1;
     }
}
void output(int a[], const int& SIZE) {
    for(int i=0; i<SIZE; ++i) { cout << a[i] << " "; }
    cout << endl;
}
int main() {
    cout << endl;
    const int SIZE = 5;
    int a[SIZE];

    cout << "Original: ";
    populate(a, SIZE);
    output(a, SIZE);

    cout << endl;
    selectionSort(a, SIZE);

    cout << "\nSorted: ";
    output(a, SIZE);

    cout << endl;
    return 0;
}
