// (c) S. Trowbridge & J. Sun
// Ex b - cin input type failure handling 2

#include <iostream>
#include <string>
using namespace std;

int main( ) {
    int i = 100;
    //char i;
    //string i;

    // Error checking with feedback
    do {
        cout << "Enter an integer: ";
        //cout << "Enter a character ";
        //cout << "Enter a string ";
        // If the input is of improper type, the state of cin is set to 'failbit'.
        // Thus this condition reads "If cin is NOT good" etc.
        if(!(cin >> i)) {
             cout << "Invalid input." << endl;      // Output error message.
             cin.clear();                       // Clears the previous cin error flag.
             cin.ignore(10000,'\n');              // Discard the previous input, start fresh.
        }
        else {
            break;                      // If cin is successful, exit the loop.
        }
    } while(true);
    //i++;
    cout << "i = " << i << "\nInput section completed. " << endl;

    return 0;
}
