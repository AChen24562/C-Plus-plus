#include <iostream>
using namespace std;

int main(){
  int i = 5;
  int *p, *q;

  p = &i;
  q = &i;

  *p = 10;

  cout <<"i: " << i << endl;
  cout <<"*p: " << *p << endl;
  cout <<"*q: " << *q << endl;
  return 0;

}
