// (c) S. Trowbridge & J. Sun
// Ex g - reading from a file

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main( ) {
    string text;

    // create a file input variable
    ifstream fin;

    // open a file in the local directory
    fin.open("InputFileThatDoesNotExit.txt");
    //fin.open("Input575.txt");

    // if the file is not found, exits the program with a message
    if(fin.fail()) {
        cout << "Input file does not exist." << endl;
        //exit(1);
        return 0;
    }
    else
    // read from the file
    {
        getline(fin, text);
        cout << text << endl;
    }
    // close the input file
    fin.close();

    return 0;
}
