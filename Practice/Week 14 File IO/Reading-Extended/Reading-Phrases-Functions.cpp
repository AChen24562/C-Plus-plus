#include <iostream>
#include <fstream>
using namespace std;
  void finLetter(string fileName){
    char c;
    ifstream fin(fileName);
    fin >> c;
    cout << c << endl << endl;
    fin.close();
  }

void finWord(string fileName){
  string line;
  ifstream fin(fileName);
  fin >> line;
  cout << line << endl << endl;
  fin.close();
}

void finEntire(string fileName){
  string text;
  ifstream fin(fileName);
  while(getline(fin, text)){
    cout << text << endl;
  }
  fin.close();
}

int main(){
  string fileName = "Practice1.txt";
  finLetter(fileName);
  finWord(fileName);

  fileName = "Practice2.txt";
  finEntire(fileName);




    return 0;
}
