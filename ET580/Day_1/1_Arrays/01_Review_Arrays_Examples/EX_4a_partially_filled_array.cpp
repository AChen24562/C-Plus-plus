// S. Trowbridge 2020
#include <iostream>
using namespace std;

void print(int *a, const int &SIZE) {     // iterate to SIZE not CAPACITY
    for(int i=0; i<SIZE; i++) {           // SIZE is the current number of values
        cout << a[i] << " ";              // SIZE is const so it cannot be modified
    }
    cout << endl;
}

int main() {
    cout << endl;

    const int CAPACITY = 10;              // maximum number of values in the array
    int numbers[CAPACITY] = {5,10,15,20}; // partially filled array
    int size = 4;                         // current number of values in the array

    print(numbers, size);

    cout << endl;
    return 0;
}
