// (c) S. Trowbridge
// Ex d - replacing a file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( ) {

    // create a file output variable
    ofstream fout;

    // open the file for output
    fout.open("output.txt");

    // output to the file
    fout << "replace new text" << endl;

    // close the output file
    fout.close();

    return 0;
}
