#include <iostream>
using namespace std;

void swapVar(int *& a, int *&b){
  int *c = a;
  a = b;
  b = c;
  
}

void swapVal(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int *num1 = new int(1);
  int *num2 = new int(2);

  cout << *num1 << " " << *num2 << endl;
  swapVar(num1, num2);
  cout << *num1 << " " << *num2 << endl;

  swapVal(num1 , num2);
  cout << *num1 << " " << *num2 << endl;
}
