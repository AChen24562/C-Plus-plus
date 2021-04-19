#include <iostream>
using namespace std;

class Number{
private:
  int num;

public:
  Number(): Number(0){}
  Number(int n): num(n){}

  int getNum()const{return num;}
  void setNum(int n){num =n;}
};

class Rational{
private:
  Number num;
  Number den;

public:
  Rational(): Rational(0, 1){}
  Rational(int n, int d): num(n), den(d){}
  friend ostream& operator<<(ostream &out, Rational &r);

};
 ostream& operator<<(ostream &out, Rational &r){
   out << r.num.getNum() << "/" << r.den.getNum() ;
   return out;
 }

int main(){
  Rational r1{2, 3};
  cout << r1 << endl;


  return 0;
}
