#include <iostream>
using namespace std;

class Number{
private:
  int num;

public:
  Number(): Number(0){}
  Number(int n): num(n){}

  int getNum()const{return num;}
  void setNum(int n){num = n;}
};

int main(){


  return 0;
}
