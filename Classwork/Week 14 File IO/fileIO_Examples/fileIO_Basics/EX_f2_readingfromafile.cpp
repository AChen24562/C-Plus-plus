// (c) S. Trowbridge & J. Sun
// Ex f reading from a file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( ) {

    ifstream fileIn;

    char c;
    fileIn.open("input575.txt");
    fileIn >> c;
    fileIn.close();
    cout << c << endl;

    string str;
    fileIn.open("input575.txt");
    fileIn >> str; // (stops reading at the first whitespace character)
    fileIn.close();
    cout << str << endl;

    string text;
    fileIn.open("input575.txt");
    getline(fileIn, text);
    fileIn.close();
    cout << text << endl;

    return 0;
}
