#include <iostream>
using namespace std;

int* create(){
  int *i = new int(5);
  return i;
}

void update(int *i){
  *i +=1;
}

int main(){
  /*int i = 5;
  int *p = &i;


  *p = *p+=1;
  cout << *p;*/

  int *p;
  p = create();
  cout << *p << endl;
  update(p);
  cout << *p << endl << endl;

  delete p;
  p = nullptr;
  cout << *p;

  return 0;


}
