#include <iostream>
#include <fstream>
using namespace std;

void verifyFile(string fileName){
  string text;
  ifstream fin(fileName);

  if(! fin.fail()){
    getline(fin, text);
    cout << text << endl;
  }
  else{
    cout <<" File not found...";
  }
  fin.close();
}

int main(){
  string fileName = "Practice1.txt";
  string

  verifyFile(fileName);



    return 0;
}
