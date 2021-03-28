#include <iostream>
using namespace std;

int *create(){
  int *p = new int(5);
  return p;
}

void update(int *p){
  *p +=1;
}

int main(){
  int *q = create();
  cout << *q << endl;

  update(q);
  cout << *q << endl;



  return 0;
}
