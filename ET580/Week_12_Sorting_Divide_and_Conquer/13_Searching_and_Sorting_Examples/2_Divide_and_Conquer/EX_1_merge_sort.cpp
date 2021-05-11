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
    cout << endl;
}

void print(const vector<int> &v) {
    for(int i=0; i<v.size(); ++i) { cout << v[i] << " "; }
    cout << endl;
}

void merge(int *a, int start, int middle, int end) {
    int s1 = middle-start+1;              // calculate size of left half
    int s2 = end-middle;                  // calculate size of right half
    vector<int> left(s1);                 // left half
    vector<int> right(s2);                // right half
    for(int i=0; i<s1; ++i) { left[i] = a[start+i]; }    // copy left half to left
    for(int i=0; i<s2; ++i) { right[i] = a[middle+1+i]; } // copy right half to right

    int l=0, r=0, index=start;            // indexes for left half, right half and original array

    while(l<s1 && r<s2) {                 // iterate through both halves simultaneously
        if(left[l] <= right[r]) {         // compare same index in each half
            a[index] = left[l];           //    store smaller value
            ++l;                          //    advance left half index
        } else {
            a[index] = right[r];          //    store smaller value
            ++r;                          //    advance right half index
        }
        ++index;                          // advance through array
    }
    while(l<s1) {                         // add remaining values from left
        a[index] = left[l];               // copy to array
        ++l;                              // advance though l
        ++index;                          // advance through temp
    }
    while(r<s2) {                         // add remaining values from right
        a[index] = right[r];              // copy to array
        ++r;                              // advance though r
        ++index;                          // advance through temp
    }
    //print(left);
    //print(right);
}

void sort(int *a, int start, int end) {   // merge sort - O(nlogn)
    if(start < end) {                     // if we have not reached end of array
        int middle = (start + end) / 2;   // find middle
        sort(a, start, middle);           // sort left half
        sort(a, middle+1, end);           // sort right half
        merge(a, start, middle, end);     // merge sorted arrays
    }
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int SIZE = 8;
    //int a[SIZE];    // disable line 70, enable 69 and 73 for randomly generated values
    int a[SIZE] = {41, 49, 99, 59, 67, 96, 84, 47};

    cout << "Original: ";
    //init(a, SIZE);
    print(a, SIZE);
    sort(a, 0, SIZE-1);

    cout << "\nSorted: ";
    print(a, SIZE);

    cout << endl;
    return 0;
}
