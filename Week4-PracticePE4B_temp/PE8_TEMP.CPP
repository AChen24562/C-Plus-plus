// Name
// WK4 - PE

#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter an integer x: ";
    cin >> x;

    //add your code below
    cout << "Is " << x << " a multiple of 5? (1 = No, 0 = Yes): "
         <<   (x % 5 != 0)   << endl;

    return 0;
}
