// (c) S. Trowbridge & J. Sun
// EX 4b Helper Functions

#include <iostream>
using namespace std;

void divide(double numerator, double denominator);
bool isZero(double number);

int main() {
    double n, d;

    cout << "Enter a numerator and a denominator: "
         << "(separate numbers by a space)" << endl;
    cin >> n >> d;
    cout << endl;
    divide(n, d);
    cout << endl;

    return 0;
}
void divide(double numerator, double denominator) {
    if(!isZero(denominator))                  // helper function call
        cout << "Regular Division = "
             << numerator / denominator << endl;
    else
        cout << "ERROR: DENOMINATOR CANNOT BE ZERO." << endl;
}
bool isZero(double number) {
    return number == 0;
}
