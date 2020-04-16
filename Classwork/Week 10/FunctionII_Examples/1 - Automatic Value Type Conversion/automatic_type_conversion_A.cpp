//(c) S. Trowbridge & J. Sun
// EX 1a Automatic Type Conversion

#include <iostream>
using namespace std;
void set_precision(int x){
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(x);
 }

void sum(double x, double y);

int main() {

    sum(2.11, 3);    // second argument is an integer
    return 0;       //automatically cast 3 to 3.0
}

void sum(double x, double y) {
    set_precision(2);
    cout << endl << "x = " << x
         << endl << "y = " << y
         << endl << "sum = " << (x+y) << endl;

}
