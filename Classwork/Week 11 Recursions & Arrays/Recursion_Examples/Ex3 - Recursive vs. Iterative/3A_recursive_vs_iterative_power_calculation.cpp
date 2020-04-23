// (c) S. Trowbridge
// A - Recursive vs Iterative Recursive Calculation

#include <iostream>
#include <string>
using namespace std;

int iterativePowerCalc(int n, int e);
int recursivePowerCalc(int n, int e);

int main( ) {

    cout << "Recursive Function: "
         << recursivePowerCalc(2, 3) << endl;
    cout << "Iterative Function: "
         << iterativePowerCalc(2, 3) << endl;

    return 0;
}
int recursivePowerCalc(int x, int e) {
    if(e == 0)
        return 1;
    else
        return x * recursivePowerCalc(x, e-1);
}

int iterativePowerCalc(int n, int e) {
    int product = 1;
    for(int i=0; i<e; i++)
        product *= n;
    return product;
}
