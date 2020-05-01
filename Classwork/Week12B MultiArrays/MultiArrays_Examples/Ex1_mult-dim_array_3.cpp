// (c)S. Trowbridge
// Ex - multi dimensional arrays

#include <iostream>
#include <string>
using namespace std;

int main( ) {
    cout << endl << endl;
    const int DIM_1 = 3;
    const int DIM_2 = 3;

    // Two dimensional array.
    int matrix[DIM_1][DIM_2];

    // Nested loop initialization of array values (note how count is used).
    int counter = 1;
    for(int i=0; i<DIM_1; i++) {
        for(int j=0; j<DIM_2; j++) {
            matrix[i][j] = counter;
            counter++;
        }
    }
    // Nested loop output of array values.
    for(int i=0; i<DIM_1; i++) {
        for(int j=0; j<DIM_2; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << endl;
    return 0;
}
