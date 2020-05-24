// (c) S. Trowbridge & J. Sun
// Function II - PE

#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int randNum(int);
int randNum(int, int);
int randNum(int, int, int);

int main() {
    int n, s, b;
    cout << "Please enter a range: ";
    cin >> n;
    cout << "Please enter a seed: ";
    cin >> s;
    cout << "Please enter a starting number of the range: ";
    cin >> b;
    cout << endl << endl;

    cout << "The random number in the range (0-" << n-1 << ") is "
         << randNum(n) << ".\n\n";

    cout << "The random number (w/seed = " << s << ") in the range (1-"
         << n << ") is " << randNum(n,s) << ".\n\n";

    cout << "The random number (w/seed = current time) in the range (" << b << "-"
         << n+b-1 << ") is " << randNum(b,n,time(0)) << ".\n\n";
    return 0;
}
int randNum(int range) {
    return rand() % range;
}
int randNum(int range, int seed) {
    srand(seed);
    return rand() % range + 1;
}
int randNum(int base, int range, int seed) {
    srand(seed);
    return rand() % range + base;
}
