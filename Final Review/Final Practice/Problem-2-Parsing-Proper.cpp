#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
  string line = "001|11110|01010";
  string token, output;

  stringstream parse(line);

  while(getline(parse,token, '|')){
    cout << token << endl;
    output += token +", ";
  }

  ofstream fout("output.txt");
    fout << output;
    fout.close();


      return 0;
}
