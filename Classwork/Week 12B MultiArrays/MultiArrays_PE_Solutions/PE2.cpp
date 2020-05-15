// (c) S. Trowbridge & J. Sun
//PE2

#include <iostream>
using namespace std;

int main() {
    cout << endl << endl;
    const int NUM_ROWS = 5;
    const int NUM_COLS = 5;

    int matrix[NUM_ROWS][NUM_COLS];

    int num = 10;
    for(int i=0; i<NUM_ROWS; i++)
        for(int j=0; j<NUM_COLS; j++)
            matrix[i][j] = num++;

    for(int i=0; i<NUM_ROWS; i++){
        for(int j=0; j<NUM_COLS; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
    cout << endl << endl;
    return 0;
}
