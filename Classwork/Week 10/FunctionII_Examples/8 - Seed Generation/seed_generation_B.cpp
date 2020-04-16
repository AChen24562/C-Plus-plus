// (c) S. Trowbridge J. Sun
// EX 8b Seed Generation
// Check http://www.cplusplus.com/reference/ctime/ for <time.h>

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    cout << "Psuedo-random Numbers" << endl;
    cout << "---------------------" << endl;

    cout << "\nRandom sequence between 0 and 10\n"
         << "with a seed based on current time: " << endl;
    srand(time(0));
    cout<<"time(0) = " << time(0) << endl;
    cout<<"time(NULL)="<<time(NULL)<<endl;
    for(int i=0; i<5; i++){
        for (int k=0; k<5;k++){
            cout << rand() % 11 << "\t";
       }
       cout<<endl;
    }
    cout << endl << endl;
    return 0;
}
