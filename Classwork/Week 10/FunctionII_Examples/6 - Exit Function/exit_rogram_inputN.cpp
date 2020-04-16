// (c) S. Trowbridge & J. Sun
// EX 6 Terminating a Program in a function

#include <iostream>
#include <cstdlib>
using namespace std;

const int END = 575;
int inputN() {
        int option;

        cout << "Enter an integer number (or enter "<< END << " to exit): ";
        cin >> option;

        if(option == END){
            cout << END << " is entered. Good Bye!" << endl;
            exit(END);
            //return 0; // If return 0 is used
                        // option variable will be set to 0
        }
        cout << "You decided to continue the program." << endl << endl;
    return option;
}

int main() {
    int option;
    option = inputN();
    cout << "N = " << option << endl;

    cout << endl;
    return 0;
}
