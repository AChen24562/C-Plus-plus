// s. trowbridge 2020
#include <iostream>
using namespace std;

// this function adds as it returns, two functions at a time
//
// recursion tree (diagram of all recursive function calls)
//            f(4)
//           /    \
//        f(3)    f(2)
//        /  \    /   \
//    f(2)  f(1)f(1) f(0)
//   /  \
// f(1) f(0)
//
//          3
//       /    \
//      2  +  1
//     / \   / \
//    1 + 1 1 + 0
//   / \
//  1 + 0
//
// Fibonacci Sequence
// nth = 0 1 2 3 4 5 6 7  8  9  10
//       0 1 1 2 3 5 8 13 21 34 55
int fibonacci(int n) {
    if(n<2) {                                 // base case: when n is less than 2
        return n;                             // 1: return n
    }
                                              // recursive task:
    return fibonacci(n-1) + fibonacci(n-2);   // 1: sum previous two values
}

int main() {
    cout << endl;

    long n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << fibonacci(n) << endl;

    cout << endl;
    return 0;
}
