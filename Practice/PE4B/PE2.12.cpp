// (c) S. Trowbridge
// WK4 - PE

#include <iostream>
using namespace std;

int main() {

    const float QUARTER = .25;

    double money, change;
    //int numQuarters;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Enter the amount of money: $";
    cin >> money;

    //numQuarters = static_cast<int>(money / QUARTER);
    //change = money - (numQuarters * QUARTER);

    //cout << "The number of quarters is " << numQuarters << endl;
    //cout << "The remaining change is $" << change << endl;


    cout << "The number of quarters is " << static_cast<int>(money / QUARTER) << endl;
    cout << "The remaining change is $" << money - static_cast<int>(money / QUARTER) * QUARTER << endl;

    return 0;
}
