#include <iostream>
#include <fstream>
using namespace std;


int main(){
  string text;
  // output a file

  /*ofstream fileout("PE2.txt");
  fileout << "Hello World!";
  fileout.close();*/


  // input a file (Reading)
  ifstream fin("Read-append.txt");
  getline(fin, text);
  cout << endl << text << endl;


  // Append additional text at the end of file;
  ofstream fout("Read-append.txt", ios:: app);
  fout << "\nAdditional text Append.\n";
  fin.close();
  fout.close();

  return 0;
}
