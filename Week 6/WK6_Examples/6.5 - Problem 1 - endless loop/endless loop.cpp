//(c) S. Trowbridge
// Ex 6.5 - Problem 1 - endless loop

#include <iostream>

using namespace std;

int main()
{
    while(true) //ALWAYS MAKE SURE THE LOOP CONDITIONS WILL BE FALSE AT ONE POINT
    {
        cout << "Loop" << endl;
    }

    cout << endl;
    return 0;
}
