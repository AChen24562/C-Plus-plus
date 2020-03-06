//(c) S. Trowbridge & J. Sun
// Ex 6.1 - while loop

/*
In counter-controlled repetition, a control variable is used to count the number of repetitions.
The control variable is incremented or decremented each time the group of instructions is performed.
When the value of the control variable indicates that the correct number of repetitions has been performed,
the loop terminates and the computer continues executing with the statement after the repetition structure.
*/
#include <iostream>
using namespace std;

int main()
{
    int i;      //control variable

    cout << "\n\nWhile Loop" << endl;
    cout << "---------------" << endl;

    i = 1;      //initialize the control value

    while(i < 11)
    {
        cout << i++ << " ";    //increment control variable by 1 every iteration
    }

    cout << endl;

    i = 1;
    while(i <= 10 )
    {
        cout << i << " ";
        i += 2;
    }

    cout << endl;
    return 0;
}
