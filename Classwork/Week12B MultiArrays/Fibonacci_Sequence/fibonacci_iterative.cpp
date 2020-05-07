// (c) s. trowbridge & J. Sun 2019
// pointers and dynamic arrays p1.cpp

#include <iostream>
using namespace std;

// iterative fibonacci solution (classic sequence starting from 0)
// O(n) time complexity
// 0 1 1 2 3 5 8 13 21
    long long    int fibonacci(int n) {
    long long    int prev1=0, prev2=1, current;

    /*if (n==0) return  0;
    else if (n==1) return 1;*/

    if(n<2) return n;


    for(int i=2; i<=n; i++) {
        current = prev1+prev2;
        prev1 = prev2;
        prev2 = current;

    }
    return current;
}

int main( ) {
    cout << endl;

    cout << "fib(0): " << fibonacci(0) << endl; // 0
    cout << "fib(1): " << fibonacci(1) << endl; // 1
    cout << "fib(2): " << fibonacci(2) << endl; // 1
    cout << "fib(3): " << fibonacci(3) << endl; // 2
    cout << "fib(4): " << fibonacci(4) << endl; // 3
    cout << "fib(5): " << fibonacci(5) << endl; // 5
    cout << "fib(6): " << fibonacci(6) << endl; // 8
    cout << "fib(7): " << fibonacci(7) << endl; // 13
    cout << "fib(8): " << fibonacci(8) << endl; // 21
    cout << "fib(100): " << fibonacci(100) << endl; // 21

    cout << endl;
    return 0;
}
