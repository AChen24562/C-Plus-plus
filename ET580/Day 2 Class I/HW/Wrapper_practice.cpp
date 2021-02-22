#include <iostream>

using namespace std;

class Rational{
private:
  int num;
  int den;
  int gcd(int n, int d){
    if(d == 0){
      return n;
    }
    else{
      return gcd(d, n%d);
    }
  }

public:
  Rational(): Rational(0, 0){}
  Rational(int n, int d): num(n), den(d){}

  // Accessors
  int getNum();
  int getDen();
  // Mutators
  void setNum(int n);
  void setDen(int d);

  // Wraper Function
  int getGCD(){ return gcd(num, den);}
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



int main(){
  Rational r1{};

  r1.setNum(3);
  r1.setDen(5);
  display(r1);
  cout << r1.getGCD();





  return 0;


}
