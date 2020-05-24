#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

  const int size =100;

  void processData(string inputF, string outputF, string array[], int& amount){
    string token, line;

    ifstream fin(inputF);
    ofstream fout(outputF);

      while(getline(fin, line)){
        stringstream parse(line);
        while(getline(parse, token,  '|')){
          fout << token << ", ";
          cout << token << ", ";
          stringstream converter(token);
          converter >> array[amount++];
        }
        cout << endl;
      }
      fin.close();
      fout.close();
  }

  void swapFL(string array[], const int&  amount){
    string temp = array[amount -1];
    array[amount-1] = array[0];
    array[0] = temp;
  }

  void outputArray(const string array[], const int& amount){
    for(int i =0; i <amount; i ++){
      cout << array[i] << endl;
    }
  }



int main(){
  string array[size];
  int amount = 0;

  cout << "Original Data: " << endl;
  processData("data1.txt", "data2.txt", array, amount);

  cout << endl << endl  << "Swapped Data: " << endl;
  swapFL(array, amount);
  outputArray(array, amount);

  cout << endl << endl;


      return 0;
}
