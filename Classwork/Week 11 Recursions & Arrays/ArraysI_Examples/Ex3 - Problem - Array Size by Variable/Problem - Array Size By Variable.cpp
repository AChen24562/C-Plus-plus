// (c) S. Trowbridge & J. Sun
// Ex3 - Array Size Defined at Run Time
// What NOT to do.

#include <iostream>
using namespace std;

/*
* What NOT to do.
*
* Static array size should be specified prior to run time
* by a constant variable or literal value. Array size should
* never be determined by a variable that can be altered during
* run time.
*
* Note that this will work with some compilers,
* even though it is not the proper way to define arrays.
*/
int main( ) {
    int size;

    cout << "What size array do you want? ";
    cin >> size;
    cout << endl;

    int myArray[size];
    //for(int i=0; i<=size; i++) { //what is the problem in this statement?
    for(int i=0; i<size; i++) {
        myArray[i] = i+1;
    }

    cout << "Array: ";
    //for(int i=0; i<=size; i++) {
    for(int i=0; i<size; i++) {
        cout << myArray[i] << " ";
    }

    cout << endl << endl;
    return 0;
}
