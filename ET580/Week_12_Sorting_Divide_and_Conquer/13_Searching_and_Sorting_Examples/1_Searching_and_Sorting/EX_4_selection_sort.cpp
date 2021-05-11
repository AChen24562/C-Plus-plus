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

void sort(int *a, const int &SIZE) {      // selection sort - O(n^2)
    for(int i=0; i<SIZE-1; ++i) {         // iterate from start to second to last (0 to size-2)
        int min = i;                      // set minimum to current
        print(a, SIZE);
        for(int j=i+1; j<SIZE; ++j) {     // iterate from i+1 to last
            if(a[j] < a[min]) {           // find minimum from i+1 to last
                min = j;
            }
        }
        if( min != i ) {                  // if current is not minimum
            int temp = a[i];              // swap current with minimum
            a[i] = a[min];
            a[min] = temp;
        }
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
