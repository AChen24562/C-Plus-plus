//(c) S. Trowbridge & J. Sun
// Ex 6.3 - while loop

/*
The sentinel value indicates “end of data.”
The sentinel is entered after all regular data items have been supplied to the program.
Sentinels must be unique from regular data items.
*/
#include <iostream>
using namespace std;

int main()
{
    int option = 0;

    cout << "\n\nWhile Loop Sentinel" << endl;
    cout << "---------------" << endl;

    int count = 0;
    // -1 is used as a sentinel value to end the loop
    while(option != -1)
    {
        cout << "Enter any positive integer or -1 to end loop." << endl;
        cout << "Select an option: ";
        cin >> option;
        count++;

        //How to ensure the input is a positive integer?
        //Insert your code here







        cout << endl;
    }

    cout << endl;
    cout << "Program Looped: " << count << " time(s)." << endl;

    cout << endl;
    return 0;
}
