// (c) S. Trowbridge
// Ex 6 - Problem 1 - Assignment vs. Equivalence

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "\n\nAssignment vs. Equivalence\n";
    cout << "--------------------------\n";
    cout << "Input an x value: ";
    cin >> x;
    cout << "\n\nInput a y value: ";
    cin >> y;
    cout << endl;

    //cout << "Assignment" << endl;
    cout << "(x = y) returns "
    << (x = y)
    << " (assignment, returns the current value of x)"
    << endl << endl;

    //cout << "Equivalence (boolean operation, true = 1, false = 0)" << endl;
    cout << "(x == y) returns "
        << (x == y)
        << " (equivalence, returns a boolean value, 1 or 0)"
        << endl << endl;

    return 0;
}
