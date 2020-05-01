// (c) S. Trowbridge & J. Sun
//PE1

#include <iostream>
using namespace std;

int main() {
    cout << endl << endl;
    const int DIM1 = 2;
    const int DIM2 = 5;
    int matrix[DIM1][DIM2] = {0,1,2,3,4,5,6,7,8,9};

     for(int i=0; i<DIM1; i++) {
        for(int j=0; j<DIM2; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    cout << endl << endl;
    return 0;
}
