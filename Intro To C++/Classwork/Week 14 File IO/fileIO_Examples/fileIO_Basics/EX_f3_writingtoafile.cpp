// (c) S. Trowbridge & J. Sun
// Ex g reading different data from a file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( ) {

    ifstream fileIn;
    ofstream fileOut;

    char c;
    fileIn.open("input575.txt");
    fileIn >> c;    //read a single character from a file
    fileIn.close();
    fileOut.open("out.txt");
    fileOut << c;
    fileOut.close();
    cout << c << endl;


    string str;
    fileIn.open("input575.txt");
    fileIn >> str;  //read a single word from a file
    fileIn.close();
    fileOut.open("out.txt");
    fileOut << str;
    fileOut.close();
    cout << str << endl;

    string text;
    fileIn.open("input575.txt");
    getline(fileIn, text);
    fileIn.close();

    fileOut.open("out.txt");
    fileOut << text;
    fileOut.close();
    cout << text << endl;


    return 0;
}
