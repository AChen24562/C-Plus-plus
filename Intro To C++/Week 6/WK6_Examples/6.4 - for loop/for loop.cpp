//(c) S. Trowbridge & J. Sun
// Ex 6.4 - for loop

/*
a). The loop control variable is a counter of the loop.
b). The loop repetition condition is a logical expression.
Which uses relational operators such as ==, !=, >, >=, < or <=.
The condition is tested before the start of each loop repetition.
c). The loop control variable has to increase or decrease during each iteration.
d). for loops are usually used for counter controlled repetition
*/

#include <iostream>
using namespace std;

int main()
{

    cout << "\n\nFor Loop" << endl;
    cout << "--------" << endl;


    for(int i = 1; i < 11; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    for(int i = 1; i <= 10; i++)

    {
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    // set an initial value outside of the loop
    int i = 20;

    // initial value previously set, update of value occurs in code block
    for(; i >= 0;)
    {
        cout << i << " ";
        i--;
    }


    cout << endl;
    return 0;
}
