#include <iostream>
using namespace std;

void swapVar(int *&a, int *&b){
  int *c =  a;
  a =b;
  b = c;
}

void swapVal(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int num1 = 1;
  int num2 = 2;


  int *p  = &num1;
  int *p2 = &num2;
  cout << num1 <<" " << num2 << endl;
  cout << *p << " " << *p2 << endl << endl;
  swapVar(p, p2);
  cout << num1 <<" " << num2 << endl;
  cout << *p << " " << *p2 << endl << endl;

  swapVal(p, p2);
  cout << num1 <<" " << num2 << endl;
  cout << *p << " " << *p2 << endl << endl;
  return 0;

}
