// (c) S. Trowbridge
// 3B - Recursion vs. Iteration

#include <iostream>
using namespace std;

void recursiveDigitExtraction(int n);
void iterativeDigitExtraction(int n);

int main( ) {
    cout << "Recursive function: " << endl;
    recursiveDigitExtraction(1234);
    cout << endl << "Iterative function: " << endl;
    iterativeDigitExtraction(5342);
    return 0;
}

// recursive solution
void recursiveDigitExtraction(int n) {
    if(n<10) {
        cout << n << "\t";
    }
    else {
        // 1234
        recursiveDigitExtraction(n/10);
        cout << n%10 << "\t";
        //4321
        //recursiveDigitExtraction(n/10);

    }
}

// iterative solution
void iterativeDigitExtraction(int n) {
    int numTens = 1;
    int number = n;

    while(number > 9) {
        number = number / 10;
        numTens = numTens * 10;
    }
    for(int i = numTens; i > 0; i = i / 10) {
        cout << n / i << " ";
        n = n%i;
    }
}
