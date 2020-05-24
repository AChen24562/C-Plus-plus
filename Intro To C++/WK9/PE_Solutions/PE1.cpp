// (c) J.Sun
// Nested loop  Quiz  Solution

#include <iostream>
using namespace std;

int main() {

    const int DIMENSIONS = 7;
    cout << "\nTable of C\n"
         << "----------\n\n";

    for(int r = 0; r < DIMENSIONS; r++)
    {
        for (int c = 0; c < DIMENSIONS; c++)
            cout << 'C' << "\t";
        cout << endl;
    }

    cout << endl;
    return 0;
}
