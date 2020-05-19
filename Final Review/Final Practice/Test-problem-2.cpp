#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main(){
string line = "001|11110|01010";
string intermediate;
string outputfile;


stringstream anything(line);

while(getline(anything, intermediate, '|')){
  cout << intermediate << endl;
  outputfile += intermediate += ",";
}

ofstream fout("test.txt");
fout << outputfile;
fout.close();



    return 0;
}
