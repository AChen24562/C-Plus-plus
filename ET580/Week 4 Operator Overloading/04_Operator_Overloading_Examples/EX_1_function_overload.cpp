// S. Trowbridge 2020
#include <iostream>
using namespace std;

// overloading the sum function: two parameter and three parameter versions
int sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }
int sum(int a, int b, int c) { return a + b + c ; }

int main() {
    cout << endl;

    // number and type of parameters determine which function is called
    cout << sum(4, 5) << "\n";
    cout << sum(4.5, 5.3) << "\n";
    cout << sum(4, 5, 6) << "\n";

    cout << endl;
    return 0;
}
