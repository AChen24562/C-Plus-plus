#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string line;

  ifstream fin("Practice1.txt");

if(! fin.fail() ){
  getline(fin, line);
  cout << line << endl;
}
else{
  cout << "File not found..." << endl;
}

fin.close();



    return 0;
}
