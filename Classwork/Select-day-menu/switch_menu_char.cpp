// (c) S. Trowbridge & J. Sun
// Ex 5 - switch menu using char

#include <iostream>

using namespace std;

int main()
{
    char day;

    cout << "\n\nWork Schedule" << endl
         << "-------------" << endl
         << "Select the day you wish to work:\n" << endl
         << "M) Monday" << endl
         << "T) Tuesday" << endl
         << "W) Wednesday" << endl
         << "H) Thursday" << endl
         << "F) Friday" << endl
         << "A) Saturday" << endl
         << "U) Sunday" << endl
         << "\nSelect a letter> ";
    cin >> day;
    cout << endl;

    switch(day)
    {
        case 'M':case 'T':case 'W':case 'H':case 'F':case 'm':
        cout << "You will work on weekdays.";
            break;
        case 'A':case 'U':
            cout << "You will work on weekends.";
            break;
        default:
            cout << "You did not select an available day.";
    }

    cout << endl;
    return 0;
}
