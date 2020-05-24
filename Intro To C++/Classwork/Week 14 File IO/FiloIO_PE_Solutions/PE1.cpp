// (c)S. Trowbridge & J. Sun
// PE1 - PE1.txt will be created during the run time.

//#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fileout("PE1.txt");

    fileout << "This is my first output file.\n";

    fileout.close();
    return 0;
}
