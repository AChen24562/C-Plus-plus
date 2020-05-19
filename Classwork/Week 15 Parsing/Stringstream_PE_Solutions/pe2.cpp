// (c) S. Trowbridge
//PE stringstream file parsing 1 - using ','


#include <iostream>
#include <string>
#include <sstream>  // support for stringstream text parsing
#include <fstream>  // support for file input and output
using namespace std;

int main() {
  ifstream fin("data1.txt");
  ofstream fout;
  fout.open("output.txt");

  string line, token;

  while(getline(fin, line)) {         // read one line at a time from the file, until end of file
    istringstream parser(line);           // associate a stringstream object with the recently read line
    while(getline(parser, token, '|')) {  // parse the line for each data token separated by commas
      fout << token << ",";          // output each data token
    }
    fout << endl;
  }

  fin.close();
  fout.close();
  return 0;
}
