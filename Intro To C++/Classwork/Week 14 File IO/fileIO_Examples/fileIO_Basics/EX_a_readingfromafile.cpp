// (c) S. Trowbridge & J. Sun
// Ex a - reading from a file
//-------------------------------------------
//Make sure to create your input.txt
//and make some content in the file
//before you run the program
//-------------------------------------------

#include <iostream>
#include <fstream> // required to use ifstream objects (file input/output)
#include <string>
using namespace std;

int main( ) {
    // Create a file input variable.
    ifstream filein;
    // Open a file in the same file/folder directory as this program for input.
    filein.open("input.txt");

    // Variable to store file input text.
    string line;

    // Read from the file, one line at a time.
    // The while loop will run as long as getline is able to read in lines of text.
    // Once the end of the file is reached, the getline expression is evaluated
    // as false, thereby ending the loop.
    while(getline(filein, line)) {
      cout << line << endl;
    }

    // Close the input file when finished reading.
    filein.close();

    return 0;
}
