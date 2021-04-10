#include <iostream>
using namespace std;

class Number{

public:
  int number;
  Number(): Number(0){}
  Number(int n): number( n ){}


};
int main(){
  Number *n1 = new Number{2};

  cout << n1->number;

  return 0;
}
