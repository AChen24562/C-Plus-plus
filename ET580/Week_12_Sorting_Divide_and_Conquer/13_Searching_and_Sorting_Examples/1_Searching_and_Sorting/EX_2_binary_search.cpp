// S. Trowbridge 2020
#include <iostream>
using namespace std;

int getIndex(int *a, int size, int n) { // binary search - O(log n)
    int start = 0, end = size-1;        // start is first value, end is last value
    while(start <= end) {               // repetitively halve zone
        int middle = (start+end)/2;     // find middle of zone
        //cout << start << " " << middle << " " << end << "\n"; // enable to view the process
        if(a[middle] == n) {            // if middle is value return middle
            return middle;
        }
        else if(a[middle] < n) {        // if middle is less than value:
            start = middle+1;           //    halve zone to the right (shift start right)
        }
        else {                          // if middle is less than value:
            end = middle-1;             //    halve zone to the left (shift end left)
        }
    }
    return -1;                          // value not found
}

int main( ) {
    cout << endl;

    const int SIZE = 10;
    int numbers[SIZE] = {1, 5, 14, 23, 45, 52, 58, 71, 82, 91};

    for(int i=0; i<SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << "\n\n";

    cout << "Number 23 is located at index " << getIndex(numbers, SIZE, 23) << endl << endl;
    cout << "Number 58 is located at index " << getIndex(numbers, SIZE, 58) << endl << endl;
    cout << "Number 11 is located at index " << getIndex(numbers, SIZE, 11) << endl << endl;

    cout << endl;
    return 0;
}
