// J. Sun
//Week 8 - PE creating void user defined function/predefine <cmath>

#include <iostream>
using namespace std;

void square (int n);
void exit();

int main() {
    int a;

    square(5);

    cout << "Enter and integer: ";
    cin >> a;
    square(a);
    cout << endl;

    exit();
    return 0;
}

void square (int n){
    int result = n*n;
    cout << n << " square = " << result << endl; //variable scope
}

void exit(){
    cout << "\n\nEXIT PROGRAM. GOODBYE!" << endl;
}
