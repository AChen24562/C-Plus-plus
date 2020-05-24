// Name
// week 4 - PE

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "\n\nEnter an integer number(numerator): ";
    cin >> x;

    //add your code below
    cout << "Is " << x << " even (1 = True, 0 = False)? "
         << (x % 2 == 0) << endl;

    cout << endl;
    return 0;

}
