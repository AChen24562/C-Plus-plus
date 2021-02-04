// s. trowbridge 2020
#include <iostream>
using namespace std;

// this function adds as it returns
//
// numDigits(5432)
//  numDigits(543)
//    numDigits(54)
//      numDigits(5) return 1
//    numDigits(54) return 1 + 1
//  numDigits(543) return 2 + 1
// numDigits(5432) return 3 + 1
int numDigits(long n) {
    if(n<10) {                    // base case: (one digit left)
        return 1;                 // 1: return 1 to end recursion

    }                             // recursive task:
                                  // 1. reduce the problem by removing the last digit
    return numDigits(n/10) + 1;   // 2. add 1 to the return value
}

int main( ) {
    cout << endl;

    long n = 5432;
    cout << numDigits(n) << "\n";

    cout << endl;
    return 0;
}
