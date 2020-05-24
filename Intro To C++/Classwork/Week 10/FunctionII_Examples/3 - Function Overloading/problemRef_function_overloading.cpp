// (c) S. Trowbridge
// EX 3 Problem Function Overloading

#include <iostream>
using namespace std;

void sum(int x, int y);
void sum(double x, double y);
void sum(int x, int y, int z);
void sum(double x, double y, double z);

void sum_ref(double& x, double& y);
void sum_ref(double& x, double& y, double& z);

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

    cout << endl;
    // Problem Function Calls
    sum_ref(d, e);
    sum_ref(f, d, e);

    cout << endl;
    sum(d, e);
    sum(c, b);
    sum(3.5, 4.5);

    return 0;
}

void sum(int x, int y)                      {cout << "Two Integer Values: \t\t" << x+y << endl;}
void sum(double x, double y)                {cout << "Two Floating Point Values: \t" << x+y << endl;}
void sum(int x, int y, int z)               {cout << "Three Integer Values: \t\t" <<  x+y+z << endl;}
void sum(double x, double y, double z)      {cout << "Three Floating Point Values: \t" <<  x+y+z << endl;}
void sum_ref(double& x, double& y)
{
    x++;
    y--;
    cout << "Two Floating References: \t" << x+y << endl;}

void sum_ref(double& x, double& y, double& z)
{
    x+=10;
    y+=20;
    z+=30;
    cout << "Three Floating Point References: \t" <<  x+y+z << endl;}
