// (c) 2018 S. Trowbridge
// Ex 1.4 - creating columns

#include <iostream>
#include <iomanip> // required for "setw(x)" and "left" cout attributes
using namespace std;

int main()
{
    // Simple method for separating data into columns.
    cout << "Col1\tCol2\tCol3\n";
    cout << "0\t1\t2\n";
    cout << endl;


    // Problem: Varying data field sizes cannot be formated properly
    // using the '\t' escape character.
    cout << "Col1\tCol2\tCol3\n";
    cout << "Some really long text\t1\t2\n";
    cout << endl;


    // Optimal method for separating data into columns.
    // The attribute "left" aligns text to the left side of the column.
    // The "setw(X)" command sets the width of the column to X characters.
    cout << left << setw(25) << "Col1" << setw(5) << "Col2" << setw(5) << "Col3" << endl;
    cout << left << setw(25) << "Some really long text" << setw(5) << "1" << setw(5) << "2" << endl;

    return 0;
}
