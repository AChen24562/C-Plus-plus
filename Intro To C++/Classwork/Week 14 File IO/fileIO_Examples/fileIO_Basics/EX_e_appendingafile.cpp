// (c) S. Trowbridge & J. Sun
// Ex e - appending a file
//-------------------------------------------
//Using ios::app to append
//the additional content the file.
//If multiple files are used
//make sure to close the file properly.
//-------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( ) {

    // create a file output variable
    ofstream fout;

    //open the file for output
    fout.open("input.txt", ios::app);
    fout << "Some appended text." << endl;
    fout.close();

    fout.open("output.txt", ios::app);
    fout << "More appended text." << endl;
    fout.close();

    return 0;
}
