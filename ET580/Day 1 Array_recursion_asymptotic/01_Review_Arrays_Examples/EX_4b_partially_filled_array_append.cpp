// S. Trowbridge 2020
#include <iostream>
using namespace std;

void print(int *a, const int &SIZE) {
    for(int i=0; i<SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void append(int *a, const int &CAPACITY, int &size, int value) {
    if(size < CAPACITY) {            // if there is room in the array
        a[size] = value;             //     store value after current last value
        ++size;                      //     increment size
    }
}

int main() {
    cout << endl;

    const int CAPACITY = 10;          // maximum number of values in the array
    int size = 0;                     // current number of values in the array

    int numbers[CAPACITY];

    append(numbers, CAPACITY, size, 5);
    append(numbers, CAPACITY, size, 10);
    append(numbers, CAPACITY, size, 15);
    append(numbers, CAPACITY, size, 25);
    append(numbers, CAPACITY, size, 30);
    append(numbers, CAPACITY, size, 35);

    print(numbers, size);

    cout << endl;
    return 0;
}
