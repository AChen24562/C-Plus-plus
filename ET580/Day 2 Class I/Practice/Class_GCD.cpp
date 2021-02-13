#include <iostream>

using namespace std;
class Rational{
private:
  int numerator;
  int denominator;
public:
  int getnumerator();
  int getdenominator();

  void setnumerator(int num);
  void setdenominator(int denom);

  int getgcd(){
    int n = numerator, d = denominator;
    int gcd = 0;

    for(int i =1; i<d; i ++){
      if(n % i ==0 && d %i ==0){
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
  cout << r.getnumerator() <<"/" <<r.getdenominator() << endl;
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
  nd.setnumerator(5);
  nd.setdenominator(7);

  display(nd);
  cout << endl << endl;
  nd.setnumerator(40);
  nd.setdenominator(24);

  //int numer = nd.getnumerator();
  //int denom = nd.getdenominator();
  /*
  int gcd = outgcd(numer, denom);
  cout << gcd;*/

  cout << "gcd: " << nd.getgcd();
  cout << endl << nd.getnumerator() << endl <<nd.getdenominator();
  return 0;


}
