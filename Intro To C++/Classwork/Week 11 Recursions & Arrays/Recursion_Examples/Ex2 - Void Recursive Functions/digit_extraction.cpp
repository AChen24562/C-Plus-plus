// (c) S. Trowbridge
// Ex2 - Void Recursive Functions

#include <iostream>

using namespace std;

void digitExtraction(int n);

int main( ) {
    cout << "Digit Extraction: " << endl;
    digitExtraction(5342);
    cout << endl;
    return 0;
}

// recursive solution
void digitExtraction(int n) {
    if(n<10) {
        cout << n << " ";
    }
    else {
        cout << n%10 << " ";
        digitExtraction(n/10);
    }
}
