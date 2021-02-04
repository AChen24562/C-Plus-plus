// s. trowbridge 2020
#include <iostream>
using namespace std;

// this function prints as it recurses
//
// countdown(5) print 5
//  countdown(4) print 4
//    countdown(3) print 3
//      countdown(2) print 2
//        countdown(1) print 1
//      countdown(2)
//    countdown(3)
//  countdown(4)
// countdown(5)
void countDown(int n) {
    if(n==1) {              // base case: when n reaches 1
        cout << n << "\n";  // 1: print n
        return;             // 2: return to end recursion
    }
                            // recursive task:
    cout << n << "\n";      // 1: print n
    countDown(n-1);         // 2: reduce problem by subtracing 1 from n
}

int main( ) {
    cout << endl;

    countDown(5);

    cout << endl;
    return 0;
}
