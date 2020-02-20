// (c)S. Trowbridge
// Ex 1a - Number Format

#include <iostream>

using namespace std;

int main( )
{
    double number;

    cout << "\n\nNumber Format\n";
    cout << "-------------\n";

    // floating point number displayed as 1
    number = 1;
    cout << "double number 1;" << endl;
    cout << "==> " << number << endl;
    cout << endl;

    // floating point number is still displayed as 1
    number = 1.0;
    cout << "double number 1.0;" << endl;
    cout << "==> " << number << endl;
    cout << endl;

    // force the stream to display in decimal form
    cout.setf(ios::showpoint);
    cout << "cout.setf(ios::showpoint)\n";
    cout << "==> " << number << endl;
    cout << endl;

    // force the stream to display in decimal form of a fixed precision
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "cout.setf(ios::fixed);\n";
    cout << "cout.precision(2);\n";
    cout << "==> " << number << endl << endl;


    return 0;
}
