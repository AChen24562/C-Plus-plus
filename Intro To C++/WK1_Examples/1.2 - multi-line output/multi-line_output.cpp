// (c) S. Trowbridge
// Ex 1.2 - Multi-Line Output

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World";          // one cout statement

    cout << endl;                   // insert a blank line

    cout << "Hello ";                // two cout statements
    cout << "World";

    cout << endl;                   // insert a blank line

    cout << "Hello "                 // one cout statement
         << "World";

    return 0;
}
