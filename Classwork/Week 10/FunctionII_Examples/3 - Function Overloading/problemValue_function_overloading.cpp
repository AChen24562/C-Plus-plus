// (c) S. Trowbridge & J.Sun
// EX 9.3 Function Overloading

#include <iostream>
using namespace std;
void sum(int x, int y);
void sum(double x, double y);
void sum(double x, double y, double z);
int main() {

    sum(1, 2);
    sum(1.15, 2.25);
    sum(1.5, 2.5, 575);
    return 0;
}
void sum(int x, int y)
{
    cout << "Two Integer Values: \t\t" << x+y << endl;
}
void sum(double x, double y){
    cout << "Two Floating Point Values: \t" << x+y << endl;
}
void sum(double x, double y, double z){
    cout << "Three Floating Point Values: \t" <<  x+y+z << endl;
}
