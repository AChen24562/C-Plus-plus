// (c) S. Trowbridge J. Sun
// EX 8 Seed Generation
// Check http://www.cplusplus.com/reference/ctime/ for <time.h>

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    cout << "Psuedo-random Numbers" << endl;
    cout << "---------------------" << endl;

    cout << "\nRandom sequence between 0 and 10,000\n"
         << "with a seed based on current time: " << endl;
    //srand(time(0));
    //cout<<"time(0)="<<time(0);
    for(int i=0; i<5; i++){
       srand(time(0));
       //cout<<"time(0)="<<time(0)<<endl;
       //cout<<"time(NULL)="<<time(NULL)<<endl;
       //system("PAUSE");
       cout << rand() % 10001 << endl;
    }
    cout << endl << endl;
    return 0;
}
