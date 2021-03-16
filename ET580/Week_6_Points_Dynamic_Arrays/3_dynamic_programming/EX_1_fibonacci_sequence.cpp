// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// global counter variable to track the total number of function calls
long long counter = 0;

long fibonacci(int n) {
    // demonstration code to track the # of function calls and print function calls
    counter++;              // demonstration code
    //cout << n << "\n";      // demonstration code

    // base case
    if(n<2) { return n; }
    // recursive task
    return fibonacci(n-1) + fibonacci(n-2);
}

int main( ) {
    cout << endl;

    cout << fibonacci(5) << "\n";
    cout << counter << "\n";

    cout << endl;
    return 0;
}
