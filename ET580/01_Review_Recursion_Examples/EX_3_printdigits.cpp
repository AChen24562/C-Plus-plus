// s. trowbridge 2020
#include <iostream>
using namespace std;

// this function prints as it returns
//
// printDigits(73624)
//  printDigits(7362)
//    printDigits(736)
//      printDigits(73)
//        printDigits(7) print 7
//      printDigits(73) print 3
//    printDigits(736) print 6
//  printDigits(7362) print 2
// printDigits(73624) print 4
void printDigits(long n) {
    if(n<10) {                // base case: (one digit left)
        cout << n << " ";     // 1: print the last digit
        return;               // 2: return to end recursion
    }
                              // recursive task: (more then one digit left)
    printDigits(n/10);        // 1: reduce problem by removing last digit
    cout << n%10 << " ";      // 2: print the last digit
}

int main( ) {
    cout << endl;

    long n = 73624;
    printDigits(n);

    cout << endl;
    return 0;
}
