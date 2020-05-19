#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
  ifstream fin("data1.txt");
  string line, token;


  while(getline(fin, line)){
    stringstream parse(line);

    while(getline(parse, token, '|')){
      cout  << token  <<  " ";
    }
    cout << endl;

  }

  fin.close();

    return 0;
}
