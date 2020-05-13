// (c) S. Trowbridge & J. Sun
// Ex c - cin input type failure handling 2

#include <iostream>
#include <string>
using namespace std;

int main( ) {
    double i;

    // Error checking with feedback
    do {
        cout << "Enter an integer: ";

      // If the input is of improper type, the state of cin is set to 'failbit'.
      // Thus this condition reads "If cin is NOT good" etc.

        if(!(cin >> i)) {
            cout << "Invalid input." << endl; // Output error message.
            cin.clear();                      // Clears the previous cin error flag.
            cin.ignore(10000,'\n');           // Discard the previous input, start fresh.
        }
        else if (i !=static_cast<int>(i))
            cout << "Invalid input." << endl;
        else {
            break;  // If cin is successful, exit the loop.
        }
    } while(true);

    cout << "Input section completed. " << endl;

    return 0;
}
