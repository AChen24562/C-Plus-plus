// (c)S. Trowbridge
// Ex - multi dimensional arrays

#include <iostream>
using namespace std;

int main( ) {
    cout << endl << endl;
    // Two-dimensional array.
    const int DIM1 = 2;
    const int DIM2 = 5;
    int matrix[DIM1][DIM2];
    // Manual initialization of the array.
    // The first bracket is the first dimension.
    // The second bracket is the second dimension.
    matrix[0][0] = 0;
    matrix[0][1] = 1;
    matrix[0][2] = 2;
    matrix[0][3] = 3;
    matrix[0][4] = 4;
    matrix[1][0] = 5;
    matrix[1][1] = 6;
    matrix[1][2] = 7;
    matrix[1][3] = 8;
    matrix[1][4] = 9.99;
     // Nested loop required to output this array (one loop for each dimension).
    for(int i=0; i<DIM1; i++) {
        for(int j=0; j<DIM2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    return 0;
}
