#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

  void parseToArray(string fileName){
    ifstream fin(fileName);
    string line, token;

    const int size = 100;
    int array[size];
    int amount = 0;

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



  }


int main(){
  parseToArray("data3.txt");





      return 0;
}
