#include <iostream>

using namespace std;

class Rational{
private:
  int num;
  int den;
  int gcdRec(int n, int d);
public:
  void setNum(int n);
  void setDen(int d);

  int getNum();
  int getDen();

  int memberGCDIter();
  int getGCDRec();
};

//Externally defined
void Rational::setNum(int n){num = n;}
void Rational::setDen(int d){den = d;}

int Rational::getNum(){return num;}
int Rational::getDen(){return den;}

int Rational::memberGCDIter(){
  int n= num, d = den;
  int gcd =0;

  for(int i =1; i<=d; i++){
    if(n % i ==0&& d%i ==0){
      gcd = i;
    }
  }
  return gcd;
}
int Rational::getGCDRec(){
  return gcdRec(num , den);
}

int Rational::gcdRec(int n, int d){
  if(d ==0){
    return n;
  }
  return gcdRec(d, n %d);
}

// End of external

// Nonmember functions
void displayFrac(Rational &r){
  cout <<endl<< r.getNum() << "/" << r.getDen() << endl;
}

int extGCD(int n, int d){
  if(d == 0){
    return n;
  }
  return extGCD(d, n %d);
}



int main(){
  Rational r1{};
  r1.setNum(5);
  r1.setDen(7);
  displayFrac(r1);

  r1.setNum(40);
  r1.setDen(24);
  displayFrac(r1);
  cout << "GCD: "<<extGCD(r1.getNum(), r1.getDen()) << endl;

  cout <<"GCD Iteration: "<<r1.memberGCDIter() << endl;
  cout << "GCD Recutsion: "<<r1.getGCDRec();

  return 0;

}
