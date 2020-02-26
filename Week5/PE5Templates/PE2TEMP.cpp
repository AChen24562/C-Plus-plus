// (c) Name
// WK5 - PE

#include <iostream>
using namespace std;

int main() {

    //declare two boolean variables
    bool movies, dinner;

    //request input_1
    cout << "Do you wish to go to the movies (1/0)? ";
    cin >> movies;
    //request input_2
    cout << "Do you wish to go to dinner (1/0)? ";
    cin >> dinner;

    cout << endl;

    //add conditions
    if(movies == 1 && dinner == 0)
        cout << "You are going to the movies." << endl;
    else if(movies == 0 && dinner == 1)
        cout << "You are going to dinner." << endl;
    else if(movies == 0 && dinner == 0)
        cout << "You must do something!" << endl;
    else
        cout << "You cannot do both!" << endl;

    return 0;
}
