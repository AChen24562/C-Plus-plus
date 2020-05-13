// (c)S. Trowbridge & J. Sun
// PE2 - PE2.txt should be pre-made for displaying.

#include <iostream>
#include <fstream>
using namespace std;
void infile(string fn){
    string text;
    ifstream fin(fn);
    getline(fin, text);
    cout << text;
    fin.close();
}
void outfileAppend(string fn){
    ofstream fileout(fn,ios::app);
    fileout << "Additional text.\n";
    fileout.close();
}

int main() {
    string fName="PE2.txt";
    infile(fName);
    outfileAppend(fName);

    cout << endl;
    return 0;
}
