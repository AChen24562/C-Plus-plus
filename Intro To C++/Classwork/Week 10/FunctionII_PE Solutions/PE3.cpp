// (c) S. Trowbridge & J. Sun
// Function II - PE

#include <iostream>
#include <cstdlib>
//include library for rand() & srand()

using namespace std;

int randNum(int);
int randNum(int, int);

int main() {

    int n = 10, s = 5;
    cout << "The random number in the range (0-9) is "
         << randNum(n) << ".\n\n";

    cout << "The random number(w/seed = 5) in the range (0-9) is "
         << randNum(n,s) << ".\n\n";

    return 0;
}
int randNum(int range) {
    return rand() % range;
}
int randNum(int range, int seed) {
    srand(seed);
    return rand() % range;
}
