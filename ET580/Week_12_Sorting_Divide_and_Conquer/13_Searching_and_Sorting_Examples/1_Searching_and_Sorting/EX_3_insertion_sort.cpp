// S. Trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void init(int *a, const int& SIZE) {
    for(int i=0; i<SIZE; ++i) { a[i] = rand() % 100 + 1; }
}

void print(int *a, const int& SIZE) {
    for(int i=0; i<SIZE; ++i) { cout << a[i] << " "; }
    cout << endl;
}

void sort(int *a, int size) {             // insertion sort algorithm - O(n^2)
    int v, index;                         // create value and index variables
    for(int i=1; i<size; ++i) {           // iterate from second to end
        v = a[i];                         // store current in v
        index = i;                        // store i in index
        print(a, size);
        while(index>0 && a[index-1]>v) {  // repeat if previous > v and index > 0
            a[index] = a[index-1];        //    shift previous to current
            --index;                      //    decrement index
        }
        a[index] = v;                     // insert value at index
    }
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int SIZE = 5;
    int a[SIZE];

    cout << "Original: ";
    init(a, SIZE);
    print(a, SIZE);
    sort(a, SIZE);

    cout << "\nSorted: ";
    print(a, SIZE);

    cout << endl;
    return 0;
}
