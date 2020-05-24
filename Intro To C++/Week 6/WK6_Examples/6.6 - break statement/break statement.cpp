//(c) S. Trowbridge & J. Sun
// Ex 6.6 - break statement

#include <iostream>
using namespace std;

int main()
{

    cout << "\n\nBreak Statement" << endl;
    cout << "---------------" << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << i << " ";
        if(i == 5)
            break; //exit loop
    }

    cout << endl;
    return 0;
}
