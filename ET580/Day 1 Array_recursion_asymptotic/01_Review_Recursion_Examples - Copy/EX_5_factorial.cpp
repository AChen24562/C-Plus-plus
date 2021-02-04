// s. trowbridge 2020
#include <iostream>
using namespace std;

// this function multiplies as it returns
//
// factorial(5)
//  factorial(4)
//    factorial(3)
//      factorial(2) return 2
//    factorial(3) return 2 * 3
//  factorial(4) return 6 * 4
// factorial(5) return 24 * 5
long factorial(int n) {
    if(n==2) {                        // base case: when n is 2 (no point in multiplying by 1)
        return 2;                     // 1: return 2 to end recursion (last value to multiply by)
    }
                                      // recursive task:
                                      // 1. reduce problem by subtracting 1 from n
    return factorial(n-1) * n;        // 2. multiply return value by n
}

int main( ) {
    cout << endl;

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << factorial(n) << endl;

    cout << endl;
    return 0;
}
