// (c)S. Trowbridge & J. Sun
// PE3

#include <iostream>
#include <fstream>
using namespace std;

void infileLetter(string fn){
    char c;
    ifstream fin(fn);
    fin >> c;
    cout << c << endl;
    fin.close();
}
void infileWord(string fn){
    string text;
    ifstream fin(fn);
    fin >> text;
    cout << text << endl;
    fin.close();
}
void infileLine(string fn){
    string text;
    ifstream fin(fn);
    while(getline(fin, text)) {
      cout << text << endl;
    }
    fin.close();
}
int main() {

    string fName="PE1.txt";
    infileLetter(fName);
    infileWord(fName);
    infileLine(fName);

    cout << endl << endl;
    fName = "PE2.txt";
    infileLine(fName);

    return 0;
}
