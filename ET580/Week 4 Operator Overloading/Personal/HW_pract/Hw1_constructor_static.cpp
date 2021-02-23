#include <iostream>

using namespace std;

class RatNum{
private:
  int num;
  int den;

public:
  RatNum(): RatNum(0){}
  RatNum(int n): num(n), den(1){}
  RatNum(int n, int d): num(n), den(d){}

  // Accessor
  int getNum()const{return num;}
  int getDen()const{return den;}
  // Mutator
  void setNum(int n){num =n;}
  void setDen(int d){den =d;}

  // Statics
  static int gcd(int n, int d){
    if(d == 0){
      return n;
    }
    else{
      return gcd(d, n%d);
    }
  }
  static int lcm(int n, int d){
    int gcd = RatNum::gcd(n, d);
    return (n * d)/gcd;
  }

  RatNum reduce(){
    int gcd = RatNum::gcd(num ,den);
    num = num /gcd;
    den = den/gcd;
    return RatNum(num, den);
  }

};
int main(){
  cout << endl;

  // test constructors, accessors, mutators
  cout << "Default Constructor: ";
  RatNum r1;
  cout << r1.getNum() << "/" << r1.getDen() << endl;
  cout << "Single Parameter Constructor: ";
  RatNum r2(2);
  cout << r2.getNum() << "/" << r2.getDen() << endl;
  cout << "Dual Parameter Constructor: ";
  RatNum r3(1,3);
  cout << r3.getNum() << "/" << r3.getDen() << endl;
  cout << "Accessors / Mutators: ";
  r3.setNum(3);
  r3.setDen(12);
  cout << r3.getNum() << "/" << r3.getDen() << endl;

  // test gcd
  cout << "\nGCD of the last fraction: "
       << RatNum::gcd(r3.getNum(),r3.getDen()) << endl;
  cout << "GCD of 40 and 24: " << RatNum::gcd(40,24) << endl;

  // test lcm
  cout << "\nLCM of the last fraction: "
       << RatNum::lcm(r3.getNum(),r3.getDen()) << endl;
  cout << "LCM of 3 and 5: " << RatNum::lcm(3,5) << endl;

  // test reduce
  cout << "\nReducing the last fraction: ";
  r3.reduce();
  cout << r3.getNum() << "/" << r3.getDen() << endl;

  return 0;


}
