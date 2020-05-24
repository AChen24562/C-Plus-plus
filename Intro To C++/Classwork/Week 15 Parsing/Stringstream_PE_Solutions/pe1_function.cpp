// (c) S. Trowbridge & J. Sun
//PE stringstream file parsing 1 - using '|'

#include <iostream>
#include <string>
#include <sstream>  // support for stringstream text parsing
#include <fstream>  // support for file input and output
using namespace std;

void outData(string fn){
    ifstream fin(fn);

    string line, token;
    // read one line at a time from the file, until end of file
    while(getline(fin, line)) {
        // associate a stringstream object with the recently read line
        istringstream parser(line);
         // parse the line for each data token separated by commas
        while(getline(parser, token, '|')) {
            // output each data token
            cout << token << "|";
    }
        cout << endl;
  }

    fin.close();
}

int main() {
    outData("data1.txt");

  return 0;
}
