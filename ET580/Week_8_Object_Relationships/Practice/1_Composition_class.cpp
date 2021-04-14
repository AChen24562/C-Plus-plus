#include <iostream>
using namespace std;

class Number{
private:
  int num;

public:
  Number(): Number(0){}
  Number(int n): num(n){}


  // Accessor/ Mutator
  int getNum()const{return num;}
  void setNum(int n) {num = n;}
};

class RatNum{
private:
  Number num;
  Number den;

public:
  RatNum(): RatNum(0, 1){}
  RatNum(int n, int d): num(n), den(d){}
  friend ostream& operator<<(ostream &out, RatNum &r);
};
ostream& operator<<(ostream &out, RatNum &r){
  out << r.num.getNum() << "/" << r.den.getNum();
  return out;
}

int main(){
  RatNum r1{2, 3};
  cout << r1;


  return 0;
}
