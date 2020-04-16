//(c) S. Trowbridge & J. Sun
// EX 1b Automatic Type Conversion

#include <iostream>
using namespace std;
void set_precision(int x){
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(x);
 }
void sum(double x, int y) {
    set_precision(2);
    cout << endl << "x = " << x
         << endl << "y = " << y
         << endl << "sum = " << (x+y) << endl;
}
int main() {
    // first argument is a double, automatically cast 1 to 1.0
    // second argument is an integer, automatically cast 2.99 to 2
    sum(1, 2.99);
    return 0;
}


