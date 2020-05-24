// (c)S. Trowbridge & J. Sun
// PE3

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char c;
    string word;
    string line;

    ifstream filein;
    filein.open ("PE1.txt");
    filein >> c;
    filein.close();
    cout << c << endl;

    filein.open ("PE1.txt");
    filein >> word;
    filein.close();
    cout << word << endl;

    filein.open ("PE1.txt");
    getline(filein, line);
    filein.close();
    cout << line << endl;


    filein.open ("PE2.txt");
    while(getline(filein, line)) {
      cout << line << endl;
    }
    filein.close();

    return 0;
}
