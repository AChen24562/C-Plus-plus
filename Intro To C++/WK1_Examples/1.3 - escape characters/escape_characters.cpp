// (c) S. Trowbridge
// Ex 1.3 - Escape Characters \n and endl

#include <iostream>
using namespace std;

int main()
{
    cout << "This uses a newline escape sequence to terminate the line.\n";

    cout << endl; // insert a blank line

    cout << "This uses an end line command to terminate the line." << endl;

    cout << "\n"; // insert a blank line

    cout << "\tThis uses a tab escape sequence to indent the line." << endl;

    cout << endl << endl; // insert two blank lines

    cout << "Hello World" << endl;

    cout << "\n\n"; // insert two blank lines

    cout << "Hello World\n";

    cout << "\n" << endl; // insert two blank lines

    cout << "Hello\tWorld\n";

    return 0;
}
