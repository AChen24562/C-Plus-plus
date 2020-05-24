// (c) S. Trowbridge & J. Sun
// EX 7 Pseudo-random Numbers
// Go to http://www.cplusplus.com/reference/cstdlib/srand/
// or http://www.cplusplus.com/reference/cstdlib/rand/
// to find more information about srand() and rand()

#include <iostream>
//#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    cout << "Psuedo-random Numbers" << endl;
    cout << "---------------------" << endl;
    srand(time(NULL)); // important or will not randomly generate


    cout << "\nRandom sequence:" << endl;
    for(int i=0; i < 5; i++)
        cout << rand() << " ";
    cout << endl << endl;

    cout << "\nRandom sequence between 0 and 10:" << endl;
    for(int i=0; i < 5; i++)
        cout << rand() % 11 << " ";
    cout << endl << endl;

    cout << "\nRandom sequence between 0 and 100:" << endl;

    for(int i=0; i < 5; i++){
        cout << rand() % 101 << " ";
    }
    cout << endl << endl;

    cout << "\nRandom sequence between 0 and 1000:" << endl;
    for(int i=0; i < 5; i++)
        cout << rand() % 1001 << " ";
    cout << endl << endl;

    cout << endl;
    return 0;
}
