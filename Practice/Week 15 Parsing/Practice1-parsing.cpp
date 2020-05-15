#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
  string text, token;
  ifstream fin("data1.txt");

  while(getline(fin, text)){
    stringstream parser(text);

    while(getline(parser, token, '|')){
      cout << token << " ";
    }
    cout << endl;
}
fin.close();



    return 0;
}
