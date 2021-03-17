#include <iostream>
using namespace std;

int *create(){
  int *i = new int(5);
  return i;
}


int main(){
  int *p;
  p =create();
  cout << *p << endl;


  return 0;


}
