// (c) 2019 S. Trowbridge
// Ex 2 - iterative binary search

#include <iostream>
using namespace std;

// iterative binary search - O(log n)
// iterative is faster and takes up less memory unless compiler supports tail recursion
int getIndex(int a[], int size, int n) {
    int start = 0, end = size-1;        // assign start and end to first and last indexes of the array

    while(start <= end) {               // iterate as long as there is a search zone where start <= end

        int middle = (start+end)/2;     // find the middle index of the current search zone

        if(a[middle] == n) {            // if n is the middle element, return the middle index as the position of n
            return middle;
        }
        else if(a[middle] < n) {        // if n is greater than the middle element,
            start = middle+1;           // move the search zone from middle+1 to end (check top half of the array)
        }
        else {                          // if n is less than the middle element,
            end = middle-1;             // move the search zone from start to middle-1 (check bottom half of the array)
        }

    }
    return -1;                          // return -1 if n is not found
}

int main( ) {
    cout << endl;

    const int CAPACITY = 10;
    int numbers[CAPACITY] = {1, 5, 14, 23, 45, 52, 58, 71, 82, 91};

    for(int i : numbers) { cout << i << " "; }
    cout << endl << endl;

    cout << "Number 23 is located at index " << getIndex(numbers, CAPACITY, 23) << endl << endl;
    cout << "Number 58 is located at index " << getIndex(numbers, CAPACITY, 58) << endl << endl;
    cout << "Number 11 is located at index " << getIndex(numbers, CAPACITY, 11) << endl << endl;

    cout << endl;
    return 0;
}
