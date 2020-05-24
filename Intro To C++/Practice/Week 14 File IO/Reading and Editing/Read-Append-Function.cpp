#include <iostream>
#include <fstream>
using namespace std;
  void infile(string fileName){
    string text;

    ifstream fin(fileName);
    getline(fin, text);
    cout << text;
    fin.close();
  }

void outfileAppend(string fileName){
  ofstream fout(fileName, ios::app);
  fout << "Text Added from a function";
  fout.close();
}



int main(){
  string fileName = "Read-append.txt";
  infile(fileName);
  outfileAppend(fileName);

  return 0;
}
