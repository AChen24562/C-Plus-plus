#include <iostream>
#include <fstream>

using namespace std;


int main(){
  char c;
  string word;
  string line;

  ifstream fin;
  fin.open("Practice1.txt");
  fin >> c;
  fin.close();
  cout << c << endl << endl;

  fin.open("Practice1.txt");
  fin >> word;
  fin.close();
  cout << word << endl << endl;

  fin.open("Practice2.txt");
  while(getline(fin, line)){
    cout << line << endl;
  }
fin.close();

  return 0;
}
