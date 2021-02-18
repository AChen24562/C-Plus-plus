#include <iostream>

using namespace std;

class Rational{
private:
  int num;
  int den;

public:
  Rational(): Rational(0, 0){}
  Rational(int n, int d): num(n), den(d){}

  // Accessors
  int getNum();
  int getDen();
  // Mutators
  void setNum(int n);
  void setDen(int d);
};
// Defined Externally
int Rational::getNum(){return num;}
int Rational::getDen(){return den;}

void Rational::setNum(int n){num = n;}
void Rational::setDen(int d){den = d;}

// End of Defined Externally
void display(Rational &r){
  cout << r.getNum() << "/" << r.getDen()<<endl <<endl;
}

int nonRecGCD(int n, int d){
  if(d == 0){
    return n;
  }

  else{
    return nonRecGCD(d, n%d);
  }
}

int main(){
  Rational r1{};
  display(r1);
  r1.setNum(5);
  r1.setDen(7);
  display(r1);

  r1.setNum(40);
  r1.setDen(24);
  display(r1);

  cout << nonRecGCD(r1.getNum(), r1.getDen());



  return 0;


}
