// (c) S. Trowbridge & J. Sun
// Ex2 - Array Size by Constant

#include <iostream>
#include <string>
using namespace std;

int main() {

    // declare an array of integers of size 4
    const int NUMINTEGERS = 6;
    int numbers[NUMINTEGERS];
    // manually initialize each element independently
    numbers[0] = 100; // initialize the first element in the array
    numbers[1] = 33;
    numbers[2] = 4;
    numbers[3] = -80; // initialize the last element in the array
    // output array
    cout << "Numbers: ";
    for(int i = 0; i <= NUMINTEGERS; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // initialize an array of animal names in one statement
    const int NUMANIMALS = 3;
    string animals[NUMANIMALS] = {"Lion", "Tiger", "Bear"};
    // output array
    cout << "Animals: ";
    for(int i = 0; i < NUMANIMALS; i++) {
        cout << animals[i] << " ";
    }
    cout << endl;
    return 0;
}
