// (c) S. Trowbridge & J. Sun
//PE stringstream file parsing 1 - using ','

#include <iostream>
#include <string>
#include <sstream>  // support for stringstream text parsing
#include <fstream>  // support for file input and output
using namespace std;
void outDatatoFile(string ifn, string ofn){
  ifstream fin(ifn);
  ofstream fout(ofn);
  string line, token;

  while(getline(fin, line)) {
    istringstream parser(line);
    while(getline(parser, token, '|')) {
      fout << token << ",";
      cout << token << ",";
    }
    fout << endl;
    cout << endl;
  }
  fin.close();
  fout.close();
}

int main() {
    outDatatoFile("data1.txt", "outFile1.txt" );

  return 0;
}
