//(c) S. Trowbridge & J. Sun
// EX 1c Automatic Type Conversion

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
    int x = 1.11;         //automatically cast 1.11 to 1
    double y = 2.22;     //automatically cast 2.22 to 2
    sum(x, y);          // sum = 3
    return 0;
}
