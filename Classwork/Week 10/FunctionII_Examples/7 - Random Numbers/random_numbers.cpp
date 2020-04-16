// (c) S. Trowbridge & J. Sun
// EX 9.7 Pseudo-random Numbers
// Go to http://www.cplusplus.com/reference/cstdlib/srand/
// or http://www.cplusplus.com/reference/cstdlib/rand/
// to find more information about srand() and rand()

#include <iostream>
//#include <cstdlib>
using namespace std;

int main() {

    cout << "Psuedo-random Numbers" << endl;
    cout << "---------------------" << endl;

    cout << "\nRandom sequence:" << endl;
    for(int i=0; i < 5; i++)
        cout << rand() << " ";
    cout << endl << endl;

    cout << "\nRandom sequence with a seed:" << endl;
    srand(1);
    for(int i=0; i < 5; i++){
        cout << rand() << " ";
    }
    cout << endl << endl;

    cout << "\nRandom sequence between 0 and 10:" << endl;
    //srand(1);
    for(int i=0; i < 5; i++)
        cout << rand() % 11 << " ";
    cout << endl << endl;

    cout << "\nRandom sequence between 0 and 10 with a seed:" << endl;
    srand(111);
    for(int i=0; i < 5; i++){
        cout << rand() % 11 << " ";
    }
    cout << endl << endl;

    cout << endl;
    return 0;
}
