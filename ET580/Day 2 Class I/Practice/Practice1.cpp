#include <iostream>

using namespace std;
class Rational{
public:
  int numerator;
  int denominator;

  int getnumerator();
  int getdenominator();

  void setnumerator(int num);
  void setdenominator(int denom);
};

int Rational::getnumerator() {return numerator;}
int Rational::getdenominator() {return denominator;}

void Rational::setnumerator(int num) {numerator = num;}
void Rational::setdenominator(int denom) {denominator = denom;}


void display(Rational &r){
  cout << r.numerator <<"/" <<r.denominator << endl;
}

int getgcd(int numer, int denom)
{
    if (denom == 0){
      return numer;
    }
    else{
      return getgcd(denom, numer % denom);
    }

}
/*
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    // base case
    if (a == b)
        return a;
    // a is greater
    if (a > b)
        return getgcd(a-b, b);
    return getgcd(a, b-a);*/


int main(){
  Rational nd{};
  nd.setnumerator(5);
  nd.setdenominator(7);

  display(nd);
  cout << endl << endl;
  nd.setnumerator(40);
  nd.setdenominator(24);

  int numer = nd.getnumerator();
  int denom = nd.getdenominator();

  int gcd = getgcd(numer, denom);
  cout << gcd;
  return 0;


}
