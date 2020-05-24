// (c) S. Trowbridge & J. Sun
// EX 6 Terminating a Program

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int option;

    cout << "Enter a number (or enter 575 to exit): ";
    cin >> option;
    cout << endl;

    if(option == 575){
        cout << "Exit program.\n\n";
        exit(575);
    }
    cout << "You decided to continue the program.\n\n";
    cout << endl;
    return 0;
}
