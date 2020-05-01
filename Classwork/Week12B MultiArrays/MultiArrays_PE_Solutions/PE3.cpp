// (c) S. Trowbridge & J. Sun
// PE3 using constants as global variables

#include <iostream>
using namespace std;

const int NUM_ROWS = 5;
const int NUM_COLS = 5;

void populate(int m[][NUM_COLS]);
void output(const int m[][NUM_COLS]);

int main() {
    cout << endl << endl;
    int matrix[NUM_ROWS][NUM_COLS];

    populate(matrix);
    output(matrix);
    cout << endl << endl;
    return 0;
}

void populate(int m[][NUM_COLS]) {
    int num = 1;
    for(int i=0; i<NUM_ROWS; i++)
        for(int j=0; j<NUM_COLS; j++)
            m[i][j] = num++;
}

void output(const int m[][NUM_COLS]) {
    for(int a=0; a<NUM_ROWS; a++) {
        for(int b=0; b<NUM_COLS; b++) {
            cout << m[a][b] << "\t";
        }
        cout << endl;
    }
}
