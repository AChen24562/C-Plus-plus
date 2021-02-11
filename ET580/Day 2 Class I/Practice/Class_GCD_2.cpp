#include <iostream>

using namespace std;
class Rational{
private:
  int numerator;
  int denominator;
  int gccdRec(int n, int d);
public:
  int getnumerator();
  int getdenominator();

  void setnumerator(int num);
  void setdenominator(int denom);

  int getgcd(){

    int gcd = 0;

    for(int i =1; i<denominator; i ++){
      if(numerator % i ==0 && denominator %i ==0){
        gcd = i;
      }
    }
    return gcd;
  }
};

int Rational::getnumerator() {return numerator;}
int Rational::getdenominator() {return denominator;}

void Rational::setnumerator(int num) {numerator = num;}
void Rational::setdenominator(int denom) {denominator = denom;}


void display(Rational &r){
  cout << r.numerator <<"/" <<r.denominator << endl;
}

int outgcd(int numer, int denom)
{
    if (denom == 0){
      return numer;
    }
    else{
      return outgcd(denom, numer % denom);
    }

}



int main(){
  Rational nd{};

  nd.setnumerator(40);
  nd.setdenominator(24);



  cout << nd.getgcd();
  cout << endl << nd.getnumerator() << endl <<nd.getdenominator();
  return 0;


}
