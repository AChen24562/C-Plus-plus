#include <iostream>
using namespace std;

void decrement(int& num, int value){
  num -= value;

}


int main(){
  int num = 10;
  int value = 5;

  decrement(num, value);
  cout << num;




  return 0;
}
