#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
  ifstream fin("data3.txt");

  const int size =100;
  int amount =0;
  int array[size];

  string line, token;

  while(getline(fin, line)){
    stringstream parser(line);
    while(getline(parser,token, '|')){
      stringstream converter(token);
      converter >> array[amount++];
    }
  }

  fin.close();

  for(int i =0; i < amount; i++){
    cout << array[i] << " ";
  }
  




  return 0;
}
