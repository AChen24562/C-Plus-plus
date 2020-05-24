#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

  void sumofArray(int array[], int amount){
    int sum = 0;

    for(int i=0; i <amount; i++){
      sum += array[i];
    }
    cout << "Sum: " << sum;
  }

/*int sumRecursive(int array[], int amount, int& sum){

    if(amount ==0){
      return sum;
    }
      else{
        amount --;
        sum += array[amount];
        return sumRecursive(array, amount, sum);
      }

}*/

  int sumRecursive(int array[], int amount, int& sum){

    if(amount ==0){
        return sum;
    }

    else{
      amount --;
      sum += array[amount];
      return sumRecursive(array, amount, sum);
    }

  }

int main(){
  const int size =100;
  int amount = 0;
  int array[size];

  ifstream fin("input.txt");

  string line, token;

  while(getline(fin, line)){
    stringstream parse(line);

    while(getline(parse, token, '|')){
      stringstream converter(token);
      converter >> array[amount++];
      }
  }
  fin.close();

  for(int i =0; i <amount; i ++){
    cout << array[i] << " ";
  }

  cout << endl;
  sumofArray(array, amount);
  cout << endl;
  int sum =0;
  cout << "Sum with recursion: " << sumRecursive(array, amount, sum) << endl;
  cout << "Average: " << float(sum) /amount;
      return 0;
}
