#include <iostream>

using namespace std;

class Rational{
private:
  int numerator;
  int denominator;
  int returnGCD(int n, int d); // Wrapped

public:
  Rational(){ // Constructor
    numerator = 0;
    denominator = 0;
  }
  int getNumerator();
  int getDenominator();

  void setNumerator(int n);
  void setDenominator(int d);

  int getgcd(){ //Wrapper
    return returnGCD(numerator, denominator);
  }
};
// Externally Defined
int Rational::getNumerator(){return numerator;}
int Rational::getDenominator(){return denominator;}

void Rational::setNumerator(int n){numerator = n;}
void Rational::setDenominator(int d){denominator = d;}

// Private Wrapped
int Rational::returnGCD(int n, int d){
  if(d==0){
    return n;
  }
  return returnGCD(d, n%d);
}

// End of External

//Non Member Functions
void displayFrac(Rational &r){
  cout << r.getNumerator() <<"/" <<r.getDenominator() << endl;
}

int externalGCD(int n, int d){
  if(d == 0){
    return n;
  }
  else{
    return externalGCD(d, n % d);
  }
}

int main(){
  Rational r1{};
  displayFrac(r1);
  r1.setNumerator(5);
  r1.setDenominator(7);
  displayFrac(r1);

  r1.setNumerator(40);
  r1.setDenominator(24);
  cout <<endl<<endl;
  displayFrac(r1);
  cout <<externalGCD(r1.getNumerator(), r1.getDenominator()) <<endl;
  cout << r1.getgcd();


  return 0;
}
