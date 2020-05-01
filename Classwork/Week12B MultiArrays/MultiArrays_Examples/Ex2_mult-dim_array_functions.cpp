// (c)S. Trowbridge
// Ex - multi dimensional arrays functions 1

#include <iostream>
using namespace std;

// Multi dimensional array input and output functions.
// Every dimension after the first must have a specified value in the array
// parameter, in this case the value 3 for the second dimension.
//
// This particular implementation is poor because it is hardcoded for an array
// with a fixed second dimension, in this case 3.
//
// The function must know the values of both dimensions, hence DIM1 and DIM2 parameters.
void input(int m[][3], const int& DIM1, const int& DIM2);
void output(const int m[][3], const int& DIM1, const int& DIM2);

int main( ) {
    cout << endl << endl;
    int matrix[3][3];

    input(matrix,3,3);
    output(matrix,3,3);
    cout << endl << endl;
    return 0;
}

void input(int m[][3], const int& DIM1, const int& DIM2) {
    int n = 1;
    for(int i=0; i<DIM1; i++) {
        for(int j=0; j<DIM2; j++) {
            m[i][j] = n++;
        }
    }
}

void output(const int m[][3], const int& DIM1, const int& DIM2) {
    for(int i=0; i<DIM1; i++) {
        for(int j=0; j<DIM2; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
