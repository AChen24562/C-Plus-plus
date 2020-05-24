// (c) S. Trowbridge & J Sun
//PE stringstream file parsing 1 - using '|'

#include <iostream>
#include <string>
#include <sstream>  // support for stringstream text parsing
#include <fstream>  // support for file input and output
using namespace std;



int main() {
  ifstream fin("data1.txt");

  string line, token;

  while(getline(fin, line)) {
// read one line at a time from the file, until end of file

        istringstream parser(line);
// associate a stringstream object with the recently read line

        while(getline(parser, token, '|')) {

// parse the line for each data token separated by commas
    // output each data token
        cout << token << "|";
    }
    cout << endl;
  }

  fin.close();
  return 0;
}
