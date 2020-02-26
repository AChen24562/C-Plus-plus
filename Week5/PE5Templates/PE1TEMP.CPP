// (c) Name
// WK5 - PE

#include <iostream>
using namespace std;

int main( ) {

    int x;

    cout << "Input an integer: ";
    cin >> x;

    //use an if-else to check x (- Greater than 50 - Less than 0 )

    if(x > 50)
        cout << x << " is valid" << endl;
    else
        cout << x << " is invalid" << endl;

    cout << endl;
    return 0;
}
