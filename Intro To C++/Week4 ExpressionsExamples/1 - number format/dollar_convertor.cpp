// (c) S. Trowbridge & J. Sun
// Ex 1b - Dollar Converter

#include <iostream>

using namespace std;

int main( )
{
    double money;

    cout << "\n\nDollar Converter\n"
         << "-----------------------\n\n"
         << "Input the amount of money: ";
    cin >> money;
    cout << endl;

    cout.setf(ios::fixed);
    cout.precision(2);
    int dollar = static_cast<int>(money);
    cout << "$" << money << endl
         << "You have "<< dollar /1 << " dollar(s) and "
         << money-(dollar/1)<< " cent(s)." << endl;


    return 0;
}
