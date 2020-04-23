// (c)S. Trowbridge & J. Sun
// Ex5 - Arrays and Functions

#include <iostream>
#include <string>
using namespace std;

//bracket notation [] must be used in function prototypes to avoid syntax errors
void initialize(double a[], const int CAP);
void output(double num[], const int CAP);

int main( ) {
    const int SIZE = 10;
    double numbers[SIZE];

    initialize(numbers,SIZE);
    output(numbers,SIZE);

    cout << endl << endl;
    return 0;
}


//display all the even numbers from 0 - 18
void initialize(double num[], const int CAP) {

    for(int i=0; i<CAP; i++)
        num[i] = i*2;
}

void output(double num[], const int CAP) {
    cout << "Simple array: ";
    for(int i=0; i<CAP; i++) {
        cout << num[i] << " ";
    }
}
