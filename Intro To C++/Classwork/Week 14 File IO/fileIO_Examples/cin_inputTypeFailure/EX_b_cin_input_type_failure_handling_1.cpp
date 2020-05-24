// (c) S. Trowbridge
// Ex b - cin input type failure handling 1

#include <iostream>
#include <string>
using namespace std;

int main( ) {
    int i;
    bool isNotValid;

    // Error checking without feedback.
    do {
      cout << "Enter an integer: ";
      cin >> i;

      // If the input is of improper type, the state of cin is set to a 'failbit'.
      // cin.fail() returns true if the cin 'failbit' has been set.
      isNotValid = cin.fail();          // If input is invalid, isNotValid set to true.
      cin.clear();                      // Clears the previous cin error flag.
      cin.ignore(411,'\n');           // Discard the previous input, start fresh.

    } while(isNotValid);

    cout << i << "\nInput section completed. " << endl;

    return 0;
}
