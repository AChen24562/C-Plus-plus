// (c) 2019 S. Trowbridge
// Ex 3 - recursive binary search

#include <iostream>
using namespace std;

// recursive binary search - O(log n)
// iterative is faster and takes up less memory unless compiler supports tail recursion
int getIndex(int a[], int start, int end, int n) {
    if(start <= end) {                                // recurse if search zone is viable (start <= end)
        int middle = (start + end) / 2;               // find the middle index of the current search zone

        if(a[middle] == n) {                          // if n is the middle element,
            return middle;                            // return the middle index as the position of n
        }
        else if(a[middle] > n) {                      // if n is greater than the middle element,
            return getIndex(a, start, middle-1, n);   // move the search zone from middle+1 to end (check top half of the array)
        }
        else {                                        // if n is less than the middle element,
            return getIndex(a, middle+1, end, n);     // move the search zone from start to middle-1 (check bottom half of the array)
        }
    }
    return -1;                                        // return -1 if n is not found
}

int main( ) {
    cout << endl;

    const int CAPACITY = 10;
    int numbers[CAPACITY] = {1, 5, 14, 23, 45, 52, 58, 71, 82, 91};

    for(int i : numbers) {
        cout << i << " ";
    }
    cout << endl << endl;

    cout << "Number 23 is located at index " << getIndex(numbers, 0, CAPACITY-1, 23) << endl << endl;
    cout << "Number 58 is located at index " << getIndex(numbers, 0, CAPACITY-1, 58) << endl << endl;
    cout << "Number 11 is located at index " << getIndex(numbers, 0, CAPACITY-1, 11) << endl << endl;

    cout << endl;
    return 0;
}
