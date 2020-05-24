// (c)S. Trowbridge & J. Sun
// PE1 - PE1.txt will be created during the run time.

#include <iostream>
#include <fstream>
using namespace std;
void outfile(string fn){
    ofstream fileout(fn);
    fileout << "This is my first output file using function.\n";
    fileout.close();
}

int main() {
    string fName="PE1.txt";
    outfile(fName);

    return 0;
}
