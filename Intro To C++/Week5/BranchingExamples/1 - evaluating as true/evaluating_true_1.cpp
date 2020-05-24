// (c) S. Trowbridge
// Ex 1 - evaluating_true_1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "\n\nBoolean Evaluation" << endl;
    cout << "------------------" << endl;

    int w = 4, x = 3, y = 2, z = 1;
    cout << "w = 4\nx = 3\ny = 2\nz = 1\n\n";

    cout << "Evaluate (w > x):\t\t" << (w > x) << endl;
    cout << "Evaluate (y < z):\t\t" << (y < z) << endl << endl;

    cout << "Evaluate (w > x) && (y < z):\t" << ((w > x) && (y < z)) << endl;
    cout << "Evaluate (w > x) || (y < z):\t" << ((w > x) || (y < z)) << endl;

    return 0;
}
