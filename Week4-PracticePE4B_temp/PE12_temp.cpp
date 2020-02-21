// Name
// WK4 - PE

#include <iostream>
using namespace std;

int main() {

    double money, change;
    const double quarter = 0.25;

    cout << "Enter the amount of money: $";
    cin >> money;

    //add your code below
    cout << "The number of quarters is: "
         << (int)(money / quarter) << endl;

    cout << "The remaining change is: "
         << (money % quarter) << endl;







    return 0;
}
