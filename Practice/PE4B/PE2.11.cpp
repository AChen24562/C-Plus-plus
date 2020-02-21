// (c)S. Trowbridge & J.Sun
// week 4 - PE

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    //output console will display correctly only if integers are entered
    cout << "\n\nEnter an integer number(numerator): ";
    cin >> x;

    // How to determine x is even or odd?
    cout << "Is " << x << " even (1 = True, 0 = False)? " << (x%2==0) << endl;


    cout << endl;
    return 0;

}
