// (c) S. Trowbridge & J. Sun
// Ex 5 - enumeration & switch menu

#include <iostream>

using namespace std;

int main()
{
int day;
    enum WorkDays
    {
        MONDAY = 1,
        TUESDAY = 2,
        WEDNESDAY = 3,
        THURSDAY = 4,
        FRIDAY = 5,
    };

    cout << "\n\nWork Schedule" << endl
         << "-------------" << endl
         << "Select the day you wish to work:\n" << endl
         << "1) Monday" << endl
         << "2) Tuesday" << endl
         << "3) Wednesday" << endl
         << "4) Thursday" << endl
         << "5) Friday" << endl;
    cout << "\nSelect Number> ";

cout << "Please enter a day: ";
cin >> day;


    switch(day)
    {
        case MONDAY:
            cout << "You will work on Monday.";
            break;
        case TUESDAY:
            cout << "You will work on Tuesday.";
            break;
        case WEDNESDAY:
            cout << "You will work on Wednesday.";
            break;
        case THURSDAY:
            cout << "You will work on Thursday.";
            break;
        case FRIDAY:
            cout << "You will work on Friday.";
            break;
        default:
            cout << "You did not select an available day.";
    }

    cout << endl;
    return 0;
}
