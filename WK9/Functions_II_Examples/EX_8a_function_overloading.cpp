// (c) S. Trowbridge 2019
// EX 8a Function Overloading

#include <iostream>
using namespace std;

void sum(int x, int y);
void sum(double x, double y, double z);

int main() {
    // calls the first function definition
    sum(1, 2);
    // calls the second function definition
    sum(1.5, 2.5, 3.5);
    return 0;
}

void sum(int x, int y)
{
    cout << "Two Integer Values: \t\t" << x+y << endl;
}

void sum(double x, double y, double z)
{
    cout << "Three Floating Point Values: \t" <<  x+y+z << endl;
}
