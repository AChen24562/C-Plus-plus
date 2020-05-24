// (c) S. Trowbridge & J. Sun
// PE2 - PE2.txt should be pre-made for displaying.

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string text;

    ifstream fin("PE2.txt");

    getline(fin, text);
    cout << text << endl;

    //append the addtional text to the file
    ofstream fout("PE2.txt", ios::app);
    fout << "Save additional text to PE2.\n";

    fin.close();
    fout.close();
    return 0;
}
