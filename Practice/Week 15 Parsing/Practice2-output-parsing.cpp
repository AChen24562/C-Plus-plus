#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
  ifstream fin("data1.txt");
  ofstream fout("parse-data1.txt");
  string line, token;

  while(getline(fin, line)){
    stringstream parse(line);

    while(getline(parse, token, '|')){
      fout << token << " ";
      cout << token << " ";
    }
    fout << endl;
    cout << endl;

  }

fin.close();
fout.close();

      return 0;
}
