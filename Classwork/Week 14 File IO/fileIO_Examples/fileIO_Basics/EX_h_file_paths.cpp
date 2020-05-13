// (c) S. Trowbridge & J. Sun
// Ex h - OSX file paths

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( ) {

    // Right click on the folder in the Atom browser and select Copy Full Path
    // Paste the copied path plus a final / character before the filename.
    // This should be used for file input and output.
    //ifstream fin("/Users/username/Desktop/Examples/Filename.txt");

    //specify the full path in the ""
    //ifstream fin("c:/Fileio/Filename.txt");

    // Open a file in the same file/folder directory as this program for input.
    ifstream fin("input.txt");
    string line;
    while(getline(fin, line)) {
      cout << line << endl;
    }

    fin.close();

    return 0;
}
