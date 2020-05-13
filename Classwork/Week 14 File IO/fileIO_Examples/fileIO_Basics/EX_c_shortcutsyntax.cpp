// (c) S. Trowbridge & J. Sun
// Ex c - shortcut syntax
//-------------------------------------------
//fin and fout can access the same file
//-------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( ) {
    string text;

    // create a file i/o variables
    ifstream fin("output.txt");
    ofstream fout("output.txt");

    fout << "using shortcut" << endl;
    getline(fin, text);
    cout << text << endl;

    // close the files
    fin.close();
    fout.close();

    return 0;
}
