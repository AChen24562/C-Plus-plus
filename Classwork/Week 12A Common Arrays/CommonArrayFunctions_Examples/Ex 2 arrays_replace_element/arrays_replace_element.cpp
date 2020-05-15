// (c) S. Trowbridge & J. Sun
// Ex 2 - Array Replace

#include <iostream>
using namespace std;

void output(const int n[], const int& CAP);
void replaceNum(int n[], const int& CAP, int numToReplace, int newNumber);

int main( ) {
    const int SIZE = 10;
    int numbers[SIZE] = {1, 5, 2, 6, 3, 7, 4, 8, 5, 9};

    output(numbers, SIZE);
    replaceNum(numbers, SIZE, 10, 575);
    output(numbers,SIZE);

    return 0;
}

void output(const int *n, const int& CAP) {
    cout << "Array: \t";
    for(int i=0; i<CAP; i++) {
        cout << n[i] << "\t";
    }
    cout << endl << endl;
}

void replaceNum(int *n, const int& CAP, int numToReplace, int newNumber) {
  if(numToReplace < CAP)
        n[numToReplace] = newNumber;
   else
        cout << "New number cannot be replaced.\n";
}
