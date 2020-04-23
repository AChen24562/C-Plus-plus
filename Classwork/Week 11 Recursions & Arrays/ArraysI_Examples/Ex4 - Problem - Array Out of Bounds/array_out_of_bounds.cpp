// (c) S. Trowbridge & J. Sun
// Ex4 - Problem - Array Out of Bounds

#include <iostream>
using namespace std;

int main() {

    // declare an array of size 5
    char myArray[6];

    // manually assign array element values
    myArray[0] = 'A';
    myArray[1] = 'B';
    myArray[2] = 'C';
    myArray[3] = 'D';
    myArray[4] = 'E';
    myArray[5] = 0;

    cout << myArray << endl;


    // this loop exceeds the boundaries of the array
    for(int i=0; i<5; i++) {
        cout << "myArray[" << i << "] = " << myArray[i] << endl;
    }

    cout << endl << endl;

    // declare an array of size 10
    char yourArray[10];

    // manually assign array element values
    myArray[0] = 'A';
    myArray[1] = 'B';
    myArray[2] = 'C';
    myArray[3] = 'D';
    myArray[4] = 'E';

    // Only first 5 elements in the array have assigned values.
    // The rest elements in the array are garbage values or have no value yet.
    for(int i=0; i<10; i++) {
        cout << "yourArray[" << i << "] = " << myArray[i] << endl;
    }

    cout << endl << endl;
    return 0;
}
