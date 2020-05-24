#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
  ifstream fin("data3.txt");
  string line, token;
  const int size = 100;
  int array[size];
  int amount = 0 ;

  while(getline(fin, line)){
    stringstream parse(line);

    while(getline(parse, token, '|')){
      stringstream converter(token);
      converter >> array[amount++];
    }

  }

fin.close();

for(int i =0; i < amount; i++){
  cout << array[i] << " ";
}
cout << endl;



  return 0;
}
