// (c) S. Trowbridge & J. Sun
// Ex 5 - switch menu using int

#include <iostream>

using namespace std;

int main()
{
    int day;

    cout << "\n\nWork Schedule" << endl
         << "-------------" << endl
         << "Select the day you wish to work:\n" << endl
         << "1) Monday" << endl
         << "2) Tuesday" << endl
         << "3) Wednesday" << endl
         << "4) Thursday" << endl
         << "5) Friday" << endl
         << "6) Saturday" << endl
         << "7) Sunday" << endl

    cout << "\nSelect Number> ";
    cin >> day;
    cout << endl;

    switch(day)
    {
        case 1:
            cout << "You will work on Monday.";
            break;
        case 2:
            cout << "You will work on Tuesday.";
            break;
        case 3:
            cout << "You will work on Wednesday.";
            break;
        case 4:
            cout << "You will work on Thursday.";
            break;
        case 5:
            cout << "You will work on Friday.";
            break;
        case 6:
            cout << "You will work on Saturday.";
            break;
        case 7:
            cout << "You will work on Sunday.";
            break;
        default:
            cout << "You did not select an available day.";
    }

    cout << endl;
    return 0;
}
