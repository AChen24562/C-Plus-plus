// (c) S. Trowbridge & J. Sun
// EX 4 Helper Functions

#include <iostream>
using namespace std;

void divide(double numerator, double denominator);
bool isZero(double number);

int main() {

    double n, d;
    do {
        cout << "Enter a numerator and a denominator: "
             << "(separate numbers by a space)" << endl;
        cin >> n >> d;
        cout << endl;
        divide(n, d);
        cout << endl;
    } while (d != 0);

    return 0;
}
void divide(double numerator, double denominator) {
    if(!isZero(denominator))
        cout << "Regular Division = " << numerator / denominator << endl;
    else
        cout << "ERROR: DENOMINATOR CANNOT BE ZERO." << endl;
}
bool isZero(double number) {
    return number == 0;
}


