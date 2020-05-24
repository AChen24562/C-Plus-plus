// J. Sun
//Week 8 - PE creating user defined function with return value

#include <iostream>
#include<cmath>
using namespace std;

double cube(int n);
void exit();

int main() {
    int m;
    cout << "Enter an integer: ";
    cin >> m;

    cout << m << " cube = " << cube(m) << endl;
    cout << m << " cube with cmath = " << pow(m, 3) << endl;

    exit();
    return 0;
}

double cube(int n){

    return n*n*n;
}

void exit(){
    cout << "\n\nEXIT PROGRAM. GOODBYE!" << endl;
}
