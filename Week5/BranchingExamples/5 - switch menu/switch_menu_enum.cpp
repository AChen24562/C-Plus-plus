// (c) S. Trowbridge & J. Sun
// Ex 5 - enumeration & switch menu

#include <iostream>

using namespace std;

int main()
{

    enum WorkDays
    {
        MONDAY = 1,
        TUESDAY = 2,
        WEDNESDAY = 3,
        THURSDAY = 4,
        FRIDAY = 5,
    };
    WorkDays day;
    day = TUESDAY;



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
        case FRIDAY:
            cout << "You will work on Friday.";
            break;
        default:
            cout << "You did not select an available day.";
    }

    cout << endl;
    return 0;
}
