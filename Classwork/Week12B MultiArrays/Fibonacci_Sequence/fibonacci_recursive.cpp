// (c) s. trowbridge 2019
// pointers and dynamic arrays p1.cpp

#include <iostream>
using namespace std;

// recursive fibonacci solution (classic sequence starting from 0)
// O(2^n) time complexity
int fibonacci(int n) {
    if(n<2) return n;

    //cout << "Branch: " << n-1 << " " << n-2 << endl;
    return fibonacci(n-1) + fibonacci(n-2);

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
    cout << "fib(9): " << fibonacci(9) << endl; // 34
    cout << "fib(100): " << fibonacci(100) << endl; // 34
    cout << endl;
    return 0;
}
