#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

  void parseToArray(string fileName){
    ifstream fin(fileName);

    const int size = 100;
    int amount =0;
    int array[size];
    string line, token;

    while(getline(fin, line)){
      stringstream parse(line);

      while(getline(parse, token, '|')){
          stringstream converter(token);
          converter >> array[amount++];
      }
    }
    fin.close();

    for(int i =0; i < amount; i ++){
      cout << array[i] << " ";
    }

  }

void parseToOutput(string inputFile, string outputFile){
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
  parseToOutput("data3.txt", "test1.txt");
  cout << endl;
  parseToArray("data3.txt");
      return 0;
}
