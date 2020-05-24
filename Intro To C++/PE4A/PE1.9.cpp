// (c) S. Trowbridge
// WK4 - PE

#include <iostream>
using namespace std;

int main() {
    double x, y;

    // set the floating point precision of the output
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(3);

    cout << "\n\nSimple Adder" << endl;
    cout << "------------" << endl;
    cout << "Input first number: ";
    cin >> x;
    cout << "Input second number: ";
    cin >> y;
    //x += y;
    cout << "Answer: " << (x += y) << endl << endl;


    cout << "Simple Subtractor" << endl;
    cout << "-----------------" << endl;
    cout << "Input first number: ";
    cin >> x;
    cout << "Input second number: ";
    cin >> y;
    //x -= y;
    cout << "Answer: " << (x -= y) << endl << endl;


    cout << "Simple Multiplier" << endl;
    cout << "-----------------" << endl;
    cout << "Input first number: ";
    cin >> x;
    cout << "Input second number: ";
    cin >> y;
    //x *= y;
    cout << "Answer: " << (x *= y) << endl << endl;


    cout << "Simple Divider" << endl;
    cout << "-----------------" << endl;
    cout << "Input first number: ";
    cin >> x;
    cout << "Input second number: ";
    cin >> y;
    //x /= y;
    cout << "Answer: " << x/y << endl << endl;
    cout << "Integer division Answer: "
         << static_cast <int>(x)/static_cast <int>(y) << endl << endl;
    cout << "% division Answer: "
         << static_cast <int>(x)% static_cast <int>(y) << endl << endl;

    return 0;
}
