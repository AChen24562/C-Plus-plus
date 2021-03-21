#include <iostream>
using namespace std;

int *create(){
  int *i = new int(5);
  return i;
}

void update(int *p){
  *p = *p +=1;
}

int main(){
  int *p = create();
  cout << *p << endl;
  update(p);
  cout << *p << endl;


  return 0;
}
