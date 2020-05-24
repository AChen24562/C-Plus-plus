// (c) J.Sun
// recursion - PE2
//integer: Keyword used for integer data types is int.
//Integers typically requires 4 bytes of memory space and ranges from -2147483648 to 2147483647.

#include <iostream>
#include <ctime>
using namespace std;

void write_backward (int n);

int main( ) {

    cout << "Write_backward(3)" << endl;
    write_backward (3);
    cout << endl;

    cout << "Write_backward(12)" << endl;
    write_backward (12);
    cout << endl;

    cout << "Write_backward(123)" << endl;
    write_backward(123);
    cout << endl;

    cout << "Write_backward(123575)" << endl;
    write_backward (123575);
    cout << endl;

//Generating random number and write it backwards
    srand(time(NULL));
    int n = rand();
    cout << "Write_backward(" << n << ")" << endl;
    write_backward (n);
    cout << endl;

    return 0;
}
void write_backward  (int n){
    if (n<10)
        cout<<n << " ";
    else
        {
            // Foward
            //write_backward(n/10);
            cout<<(n%10) << " ";
            //Backward
            write_backward(n/10);

        }
}
