#include <iostream>
using namespace std;

void decrementBy(int& num, int amount){
  for(int i=0; i<amount; i++){
    num--;

  }
}

int incrementBy(int& num, int amount){
    for(int i=0; i <amount; i++){
      num++;
    }
    cout << "n = " << num << endl;
    return num;
}


int main(){

  int n =12;
  cout << "n = " << n << endl;

  decrementBy(n, 6);
  cout << "n = " << n << endl;

  n = incrementBy(n, 10);


  return 0;
}
