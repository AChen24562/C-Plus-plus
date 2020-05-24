// (c)S. Trowbridge
// recursion - PE1

#include <iostream>
using namespace std;

void countdown(int n);
void countDown(int n);

int main() {
    countdown(5);
    cout << endl;
    countDown(5);
    return 0;
}

void countdown(int n) {
    if(n==0)
        cout << n << endl;
    else {
        cout << n << endl;
        countdown(n-1);
    }
}
