#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

  void outData(string inputFile, string outputFile){
    ifstream fin(inputFile);
    ofstream fout(outputFile);
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
  }



int main(){
  outData("data1.txt", "outputFile1.txt");





      return 0;
}
