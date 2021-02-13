#include <iostream>

using namespace std;

class Fraction{
private:
  int numerator;
  int denominator;
  int gcdRec(int n, int d);
public:
  // accessors
  int getNumerator();
  int getDenominator();

  // mutators
  void setNumerator(int n);
  void setDenominator(int d);

  int getGCDRec();


};//End of Class

//Externally Defined
int Fraction::getNumerator(){return numerator;}
int Fraction::getDenominator(){return denominator;}

void Fraction::setNumerator(int n){numerator = n;}
void Fraction::setDenominator(int d){denominator =d;}

// Recursion GCD Abstraction, only allow what is needed
int Fraction::getGCDRec(){return gcdRec(numerator, denominator);} //Wrapper
//Wrapped Private function
int Fraction::gcdRec(int n, int d){if(d==0) return n; return gcdRec(d, n%d);}

//Non-member Functions
void displayFrac(Fraction &f){
  cout << f.getNumerator() << "/" <<f.getDenominator()<<endl <<endl;
}

int extGCD(int n, int d){
  if(d ==0){
    return n;
  }
  else{
    return extGCD(d, n%d);
  }
}

int main(){
  Fraction f1{};
  f1.setNumerator(5);
  f1.setDenominator(7);
  displayFrac(f1);

  f1.setNumerator(40);
  f1.setDenominator(24);
  cout << extGCD(f1.getNumerator(),f1.getDenominator()) << endl;
  cout << f1.getGCDRec();
}
