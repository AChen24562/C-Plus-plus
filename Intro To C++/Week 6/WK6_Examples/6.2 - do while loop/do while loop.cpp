//(c) S. Trowbridge & J. Sun
// Ex 6.2 - do while loop

/*
There are two kinds of while loops: the standard while loop and the do_while loop.
The difference between them is where the control expression is tested.
*/
#include <iostream>
using namespace std;

int main()
{
    int i;

    cout << "\n\nDo While Loop" << endl;
    cout << "---------------" << endl;

    i = 1;
    while(i < 11)
    {
        cout << i++ << " ";
    }

    cout << endl;

    i = 1;
    do{
         cout << i++ << " ";
    } while(i <= 10);

    cout << endl;
    return 0;
}
