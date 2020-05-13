// (c) S. Trowbridge & J. Sun
// Ex b - writing to a file
//-------------------------------------------
//output.txt is created during the run-time
//-------------------------------------------

#include<iostream>
#include <fstream>
//#include <string>
using namespace std;

int main( ) {
    // create a file output variable
    ofstream fileout;

    // open the file for output
    fileout.open("output.txt");

    // output to the file
    fileout << "Hello World!" << endl;

    // Output multiple lines of text to the file.
    for(int i=1; i<=3; i++)
      fileout << "Line " << i << " Some output text." << endl;

    // close the output file
    fileout.close();

    return 0;
}
