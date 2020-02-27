// (c) Name
// WK5 - PE

#include <iostream>
using namespace std;

int main( ) {

    int option;

    cout << "Vending Machine" << endl;
    cout << "1) Coke" << endl;
    cout << "2) Sprite" << endl;
    cout << "3) Water" << endl;
    cout << "4) Ice tea" << endl;
    cout << "Select: ";
    cin >> option;
    cout << endl;

    //use swithch() to to handle a vending machine menu above
    switch(option)
    {
        case 1:
            cout << "Coke Dispending...";
            break;
        case 2:
            cout << "Sprite Dispending...";
            break;
        case 3:
            cout << "Water Dispending...";
        case 4:
            cout << "Ice Tea Dispending...";
            break;
        default:
            cout << "Error: No valid choice selected";








    }

    cout << endl;
    return 0;
}
