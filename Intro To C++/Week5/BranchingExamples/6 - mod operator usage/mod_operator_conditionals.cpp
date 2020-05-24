// (c) 2017 S. Trowbridge & J.Sun
// Ex 4.6 - evenly divisible

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "\n\nEnter a number: ";
    cin >> num1;

    // How to determine num1 is even or odd
    cout << "Is " << num1 << " even(1 = yes, 0 = no)? " << (num1%2==0) << endl;

    cout << endl << endl;



    cout << "Select a number: ";
    cin >> num2;

    if  (num2 ==0)
    {
        cout<< "Denominator can not be zero.  Invalid input.\n PROGRAM ENDING!\n\n\n";
        return 0;
    }

    //Fill in the condition below
    if(num1%num2 ==0)
        cout << num1 << " is evenly divisible by " << num2 << "." << endl;
    else
         cout << num1 << " is not evenly divisible by " << num2 << "." << endl;


    cout << endl;
    return 0;
}
