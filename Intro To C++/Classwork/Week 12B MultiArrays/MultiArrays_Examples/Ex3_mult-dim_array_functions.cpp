// (c)S. Trowbridge
// Ex - multi dimensional arrays functions 2

#include <iostream>
using namespace std;

// Global variables have a global scope, therefore
// they are accessible throughout the program.
const int DIM1 = 3;
const int DIM2 = 5;

// Function input parameters are simplified because DIM1 and DIM2
// are accessible within the functions.
void input(int m[][DIM2]);
void output(const int m[][DIM2]);

int main( ) {
    cout << endl << endl;
    int matrix[DIM1][DIM2];

    input(matrix);
    output(matrix);
    cout << endl << endl;
    return 0;
}

void input(int m[][DIM2]) {
    int n = 1;
    for(int i=0; i<DIM1; i++) {
        for(int j=0; j<DIM2; j++) {
            m[i][j] = n++;
        }
    }
}

void output(const int m[][DIM2]) {
    for(int i=0; i<DIM1; i++) {
        for(int j=0; j<DIM2; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
