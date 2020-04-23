// (c) S. Trowbridge & J. Sun
// Ex1 - Arrays

#include <iostream>
#include <string>
using namespace std;

int main() {

    // declare an array of integers of size 4
    int numbers[4];
    // manually initialize each element independently
    numbers[0] = 100.5; // automatic truncation if floats are entered
    numbers[1] = 33.33;
    numbers[2] = 4;
    numbers[3] = -80; // initialize the last element in the array

    // output array
    cout << "Numbers: ";
    for(int i=0; i<4; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int new_numbers[5] = {-1,26,15,88,99};
    cout << "New Numbers: ";
    for(int i=0; i<5; i++) {
        cout << new_numbers[i] << " ";
    }
    cout << endl;

    // initialize an array of animal names in one statement
    string animals[] = {"Alligator", "Bear", "Cat", "Dog", "Elephant"};
    // output array
    cout << "Animals: ";
    for(int i=0; i<4; i++) {
        cout << animals[i] << " ";
    }
    cout << endl;

    string c_animals[20] = {"cat", "cow"};
        cout << "c_Animals: ";
        for(int i=0; i<2; i++) {
        cout << c_animals[i] << " ";
    }
    cout << endl;

    cout << endl << endl;
    return 0;
}
