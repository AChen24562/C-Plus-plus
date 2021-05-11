// S. Trowbridge 2020
#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

void init(int *a, const int& SIZE) {
    for(int i=0; i<SIZE; ++i) { a[i] = rand() % 100 + 1; }
}

void print(int *a, const int& SIZE) {
    for(int i=0; i<SIZE; ++i) { cout << a[i] << " "; }
    cout << "\n";
}

void print(int *a, int low, int high) {
    for(int i=low; i<=high; ++i) { cout << a[i] << " "; }
    cout << "\n";
}

void swap(int &a, int &b) {                   // generic swap function
    int temp = a;
    a = b;
    b = temp;
}

int partition(int *a, int low, int high) {
    int pivot = high;                         // pivot defaults to last value (better if randomized)
    int index = low;                          // index is first value of partition
    //cout << "pivot: " << a[pivot] << "\n";
    //print(a, low, high);
    for(int i=low; i<high; ++i) {             // iterate through the partition
        if(a[i] < a[pivot]) {                 // if smaller value found
            //cout << "lswap " << a[i] << " " << a[index] << ": ";
            swap(a[index],a[i]);              //    swap smaller with larger
            //print(a, low, high);
            ++index;                          // advance to next pivot location
        }
    }
    //cout << "fswap " << a[pivot] << " " << a[index] << ": ";
    swap(a[pivot],a[index]);                  // move pivot to its relative sorted location
    //print(a, low, high);
    //cout << "\n";
    return index;                             // return new pivot location
}

void sort(int *a, int low, int high) {        // quick sort - O(n^2)
    if(low < high) {                          // run until out of values
        int pivot = partition(a, low, high);  // determine the partitions
        sort(a, low, pivot-1);                // sort lower partition (relative to pivot value)
        sort(a, pivot+1, high);               // sort upper partition (relative to pivot value)
    }
}


int main() {
    cout << endl;
    srand(time(NULL));

    const int SIZE = 6;
    int a[SIZE] = {22,62,48,91,12,15};

    cout << "Original: ";
    //init(a, SIZE);
    print(a, SIZE);
    sort(a, 0, SIZE-1);

    cout << "\nSorted: ";
    print(a, SIZE);

    cout << endl;
    return 0;
}
