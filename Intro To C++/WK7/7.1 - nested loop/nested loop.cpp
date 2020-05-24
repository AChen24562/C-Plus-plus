// (c) S. Trowbridge
// Ex 7.1 - Nested Loop

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int DIMENSION = 5;

    cout << endl << endl
         << "Nested Loop" << endl
         << "-----------" << endl;


    for(int i=0; i < DIMENSION; i++)
    {
        for(int j=0; j < DIMENSION; j++)
        {
            cout << i << "   " << j << endl;
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
