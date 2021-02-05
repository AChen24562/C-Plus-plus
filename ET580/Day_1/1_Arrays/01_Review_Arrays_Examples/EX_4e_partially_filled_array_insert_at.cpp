// 2020 S. Trowbridge
#include <iostream>
using namespace std;

void print(int *nums, const int &SIZE) {
  for(int i=0; i<SIZE; i++) {
      cout << nums[i] << " ";
  }
  cout << endl;
}

void insertAt(int *nums, const int &CAPACITY, int &size, int index, int value) {
    if(size < CAPACITY && index>=0 && index<=size) { // if there is room, and index is legal
        for(int i=size; i>index; --i) {   // iterate from size down to index+1
            nums[i] = nums[i-1];          // shift right (copy previous to current)
        }
        nums[index] = value;             // insert value at index
        ++size;                          // increment size
    }
}

int main() {
    cout << endl;


    const int CAPACITY = 10;
    int numbers[CAPACITY] = {5, 4, 3, 2, 1};
    int size = 5;

    print(numbers, size);

    cout << "\nInsert 20 at index 0. " << endl;     // insert first
    insertAt(numbers, CAPACITY, size, 0, 20);
    print(numbers,size);

    cout << "\nInsert 40 at index 3. " << endl;     // insert middle
    insertAt(numbers, CAPACITY, size, 3, 40);
    print(numbers,size);

    cout << "\nInsert 50 at index 7. " << endl;     // insert last
    insertAt(numbers, CAPACITY, size, 7, 50);
    print(numbers,size);

    cout << "\nInsert 100 at index 9. " << endl;    // insert bad index
    insertAt(numbers, CAPACITY, size, 9, 100);
    print(numbers,size);

    cout << endl;
    return 0;
}
