#include <iostream>
using namespace std;

int *create(){
  int *i = new int(5);
  return i;
}

void update(int*p){
  *p = *p +=1;
}

int main(){
  int *q = create();
  cout << *q << endl;

  update(q);
  cout << *q << endl;
  return 0;

}
