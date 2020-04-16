// (c) S. Trowbridge & J. Sun
// EX 4a Helper Functions

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
    if(isZero(denominator)) { //function call
        cout << "ERROR: DENOMINATOR CANNOT BE ZERO." << endl;
        return;     //use return to end in void functions
    } else
        cout << "Regular Division = "
             << numerator / denominator << endl;
}
bool isZero(double number) {
    if (number == 0)
        return true;
    else
        return false;
}


