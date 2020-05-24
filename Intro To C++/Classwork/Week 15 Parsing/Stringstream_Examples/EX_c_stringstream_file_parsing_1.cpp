// (c) S. Trowbridge
// Ex c - stringstream file parsing 1

#include <iostream>
#include <string>
#include <sstream>  // support for stringstream text parsing
#include <fstream>  // support for file input and output
using namespace std;

int main() {
  ifstream fin("SampleCSV.txt");

  string line, token;
  while(getline(fin, line)) {         // read one line at a time from the file, until end of file
    istringstream parser(line);           // associate a stringstream object with the recently read line
    while(getline(parser, token, ',')) {  // parse the line for each data token separated by commas
      cout << token << endl;          // output each data token
    }
    cout << endl;
  }

  fin.close();
  return 0;
}
