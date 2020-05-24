// (c) S. Trowbridge & J. Sun
// 3 - Mixing data types

#include <iostream>;
using namespace std;

int main (  )
{

    //Sometimes we need to perform operations that use data with different data types.
    //You must understand how to handle variables properly.

    double d = 5.75;
    bool b = 0;
    int x = b = (5 + 1) + d;
    cout << " x = " << x << endl;

    return 0;
}
