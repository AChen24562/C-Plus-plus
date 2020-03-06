//(c) S. Trowbridge & J. Sun
// Ex 6.7 - continue statement

#include <iostream>

using namespace std;

int main()
{
    cout << "\n\nContinue Statement" << endl;
    cout << "------------------" << endl;

    for(int i = 0; i < 10; i++)
    {
        if(i == 7)
            continue; //jump to next iteration, skip remaining code
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
