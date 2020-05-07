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
    int n;
    cout << endl;
    cout << "Enter a number: ";
    cin >> n;

    cout << fibonacci(n);

    cout << endl;
    return 0;
}
