// (c) S. Trowbridge 2019
// EX 7a Automatic Type Conversion

#include <iostream>
using namespace std;

void sum(double x, double y);

int main() {
    // second argument is an integer, gets implicitly casted to a double
    sum(1.5, 2);
    return 0;
}

void sum(double x, double y) {
    cout << x+y << endl;
}
