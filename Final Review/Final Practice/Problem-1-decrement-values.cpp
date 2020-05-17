#include <iostream>
using namespace std;

void decrementBy(int& num, int value){
  num -= value;
  cout << num;
}



int main(){
  int num =10;
  int decrValue =3;

  decrementBy(num, decrValue);
  cout << endl << num;


  return 0;
}
