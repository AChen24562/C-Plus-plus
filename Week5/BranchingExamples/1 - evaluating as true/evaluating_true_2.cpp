// (c) S. Trowbridge & J. Sun
// Ex 1 - evaluating_true_2

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;

    cout << endl << endl
         << "Boolean Evaluation" << endl
         << "------------------" << endl;
    cout << "Enter a number (0->0(false), other->1(true): ";
    cin >> number;
    cout << endl;

    cout << number << " && true is equivalent to " << (number && true) << endl;

    return 0;
}
