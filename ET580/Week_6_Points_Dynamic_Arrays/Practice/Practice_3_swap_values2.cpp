#include <iostream>
using namespace std;

void swapVar(int *&a, int *&b){
  int *temp = b;
  b = a;
  a = temp;

}

void swapVal(int *a, int *b){
  int temp = *b;
  *b = *a;
  *a = temp;
}

int main(){
  int a = 1;
  int b = 2;
  int *p1 = &a;
  int *p2 = &b;

  cout << a << " " << b << endl ;
  cout << *p1 << " " << *p2<< endl << endl;

  swapVar(p1, p2);
  cout << a << " " << b << endl ;
  cout << *p1 << " " << *p2<< endl << endl;

  swapVal(p1, p2);
  cout << a << " " << b << endl ;
  cout << *p1 << " " << *p2<< endl << endl;




}
