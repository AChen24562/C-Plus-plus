// (c)S. Trowbridge
// Ex - multi dimensional arrays

#include <iostream>
using namespace std;

int main( ) {
    cout << endl << endl;

    // Initializating a two dimensional array.
    int m[2][3] = { {1,2,3}, {4,5,6} };

    // Output element and memory address.
    // This demonstrates the a static two dimensional array is contigous.
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            cout << m[i][j] << " " << &m[i][j] << " ";
        }
        cout<< endl;
    }
    cout << endl << endl;
    return 0;
}
