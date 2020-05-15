#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void outData(string fileName){
  ifstream fin(fileName);
  string line, token;

  while(getline(fin, line)){
    stringstream parse(line);

    while(getline(parse, token, '|')){
      cout << token << " ";
    }
    cout << endl;
  }
  fin.close();
}


int main(){

  outData("data1.txt");




      return 0;
}
