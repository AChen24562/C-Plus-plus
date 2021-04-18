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
}; // End of Number Class

class Rational{
private:
  Number numer;
  Number deno;

public:
  Rational(): Rational(0, 1){}
  Rational(int n, int d): numer(n), deno(d){}

  friend ostream& operator<<(ostream &out, Rational &r);
};
ostream& operator<<(ostream &out, Rational &r){
  out << r.numer.getNum() << "/" << r.deno.getNum();
  return out;
}
int main(){
  Rational r1{2, 3};
  cout << r1 << endl;


  return 0;
}
