// (c)S. Trowbridge & J. Sun
// PE4

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
void validFile(string fn){
    cout << endl << endl;
    ifstream fin(fn);
    if(! fin.fail() ) {
        infile(fn);
    }
    else {
        cout << "File does not exist." << endl;
    }
    fin.close();
}

int main() {

    string fname="pe101.txt";
    string fname1="pe1.txt";

    validFile(fname);
    validFile(fname1);
    cout << endl << endl;
    return 0;
}
