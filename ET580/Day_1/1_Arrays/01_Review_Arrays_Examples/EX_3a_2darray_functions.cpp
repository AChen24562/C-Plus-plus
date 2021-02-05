// S. Trowbridge 2020
#include <iostream>
using namespace std;

void init(int matrix[][3], int d1, int d2) { // second dimension requires a value a[][v]
    int n = 1;
    for(int i=0; i<d1; i++) {
        for(int j=0; j<d2; j++) {
            matrix[i][j] = n++;
        }
    }
}

void print(int matrix[][3], int d1, int d2) { // second dimension requires a value a[][v]
    for(int i=0; i<d1; i++) {
        for(int j=0; j<d2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main( ) {
    cout << endl;

    int matrix[3][3];

    init(matrix,3,3);
    print(matrix,3,3);

    cout << endl;
    return 0;
}
