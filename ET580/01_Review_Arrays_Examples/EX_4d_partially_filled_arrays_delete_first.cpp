// S. Trowbridge 2020
#include <iostream>
using namespace std;

void print(int *n, const int &SIZE) {
    for(int i=0; i<SIZE; i++) {
      cout << n[i] << " ";
    }
    cout << endl;
}

void deleteFirst(int *a, int &size) {     // size is pass by reference
    if(size > 0) {                        // if array is not empty
        for(int i=0; i<size-1; i++) {     //    iterate from 0 to size-2
            a[i] = a[i+1];                //    shift left (copy next to current)
        }
        --size;                           // decrement size
    }
}

int main() {
    cout << endl;

    const int CAPACITY = 10;
    int numbers[CAPACITY] = {5, 4, 3, 2, 1};
    int size = 5;

    print(numbers, size);

    deleteFirst(numbers, size);
    deleteFirst(numbers, size);

    print(numbers,size);

    cout << endl;
    return 0;
}
