#include <iostream>
using namespace std;

int main(){
  int i = 5;
  int *p, *q;

  p = &i;
  q = &i;

  cout << *p << endl << *q;
  *p = 10;
  cout << endl << "Updated: " << endl <<*p << endl << *q << endl << i << endl;

  return 0;

}
