// S. Trowbridge 2020
#include <iostream>
using namespace std;

void print(int *a, const int &SIZE) {   // size is const so it cannot be modified
    for(int i=0; i<SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void deleteLast(int &size) {            // size is pass by reference
    if(size > 0) {                      // if array is not empty
        size--;                         //    reduce size by one (equivalent to removing the last element)
    }
}

int main() {
    cout << endl;

    const int CAPACITY = 10;

    int numbers[CAPACITY] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    print(numbers, size);

    deleteLast(size);
    deleteLast(size);

    print(numbers,size);

    cout << endl;
    return 0;
}
