#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
  ifstream fin("data1.txt");
  ofstream fout("parsed-data.txt");

  string line, token;

  while(getline(fin, line)){
    stringstream parser(line);
    while(getline(parser, token, '|')){
      fout << token << ",";
    }
    fout << endl;
  }

  fin.close();
  fout.close();

      return 0;
}
