// Name
// WK4 - PE
#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter an integer x: ";
    cin >> x;

    //add your code below
    cout << "Is " << x << " odd and <= 20 or > 50 (1 if it is, 0 if it is not) "
         << ((x%2!=0 && x <= 20) || x > 50) << endl;

    return 0;
}
