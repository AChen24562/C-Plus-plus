// (c) S. Trowbridge & J. Sun
// Ex 3 - Arrays Remove Element

#include <iostream>
using namespace std;

void removeElement(int n[], int& sizeofn, int number);
int getIndex(const int n[], const int& SIZE, int number);
void output(const int n[], int sizeofn);

int main( ) {
    const int CAPACITY = 10;
    int numbers[CAPACITY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int numElements = 10;

    output(numbers, numElements);

    cout << "Remove 5 from the array.\n";
    removeElement(numbers, numElements, 5);
    output(numbers, numElements);

    cout << "Remove 1 from the array.\n";
    removeElement(numbers, numElements, 1);
    output(numbers, numElements);

    return 0;
}

void removeElement(int n[], int& sizeofn, int number) {
    int index = getIndex(n, sizeofn, number);

    for(int i=index; i<sizeofn; i++) {
        n[i] = n[i+1];
    }
    sizeofn--;
}

int getIndex(const int n[], const int& SIZE, int number) {
    for(int i=0; i<SIZE; i++) {
        if(n[i] == number)
            return i;
    }
    return -1;
}

void output(const int n[], int sizeofn) {
    cout << "Array of " << sizeofn << " elements: \t";
    for(int i=0; i<sizeofn; i++) {
        cout << n[i] << " ";
    }
    cout << endl << endl;
}
