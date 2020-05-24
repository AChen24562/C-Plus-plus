// (c) S. Trowbridge 2019
// EX 8b Problem Function Overloading

#include <iostream>
using namespace std;

void sum(int x, int y);
void sum(double x, double y);
void sum(int x, int y, int z);
void sum(double x, double y, double z);

// void sum(double& x, double& y);
// void sum(double& x, double& y, double& z);

int main() {
    int a = 3, b = 2, c = 3;
    double d = 1.5, e = 2.5, f = 3.5;

    sum(1, 2);
    sum(1.5, 2.5);
    sum(a, b);
    sum(d, e);

    cout << endl;

    sum(1, 2, 3);
    sum(1.5, 2.5, 3.5);
    sum(a, b, c);
    sum(d, e, f);

    // Problem Function Calls
    // Ambigious function calls. Call sum(double double) or sum(int int)?
    // sum(c, d);
    // sum(3.5, 4);

    return 0;
}

void sum(int x, int y)                      {cout << "Two Integer Values: \t\t" << x+y << endl;}
void sum(double x, double y)                {cout << "Two Floating Point Values: \t" << x+y << endl;}
void sum(int x, int y, int z)               {cout << "Three Integer Values: \t\t" <<  x+y+z << endl;}
void sum(double x, double y, double z)      {cout << "Three Floating Point Values: \t" <<  x+y+z << endl;}

// void sum(double& x, double& y)              {cout << "Two Integer References: \t" << x+y << endl;}
// void sum(double& x, double& y, double& z)   {cout << "Three Floating Point References: \t" <<  x+y+z << endl;}
