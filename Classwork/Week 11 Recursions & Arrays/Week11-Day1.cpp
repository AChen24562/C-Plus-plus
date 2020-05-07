#include <iostream>
#include <ctime>
using namespace std;

void write_backward (int n);

int main( ) {

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
            write_backward(n/10);
            cout<<(n%10) << " ";
            //Backward
            //write_backward(n/10);

        }
}
