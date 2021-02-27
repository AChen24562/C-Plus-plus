#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

class RatNum{
private:
  int num;
  int den;

public:
  RatNum(): RatNum(0, 1){}
  RatNum(int n): num(n), den(1){}
  RatNum(int n, int d): num(n), den(d){}

  // Accessors
int getNum()const{return num;}
int getDen()const{return den;}
  // Mutators
void setNum(int n){num = n;}
void setDen(int d){den = d;}

// Static functions
static int gcd(int n, int d){
  if(d ==0){
    return n;
  }
  else{
    return gcd(d, n%d);
  }
}
static int lcm(int n, int d){
  int gcd = RatNum::gcd(n, d);
  return (n*d)/gcd;
}

RatNum reduce(){
  int gcd = RatNum::gcd(num, den);
  num = num/gcd;
  den = den/gcd;

  return RatNum(num, den);
}

// Overload
RatNum operator-()const{
  return RatNum(-num, -den);
}
// friend
friend ostream& operator<<(ostream &out, const RatNum &r);
friend istream& operator>>(istream &in, RatNum &r);

// Arithmetic
friend RatNum operator+(const RatNum &lhs, const RatNum &rhs);
friend RatNum operator-(const RatNum &lhs, const RatNum &rhs);
friend RatNum operator*(const RatNum &lhs, const RatNum &rhs);
friend RatNum operator/(const RatNum &lhs, const RatNum &rhs);

// Relational
friend bool operator==(const RatNum&lhs, const RatNum & rhs);
friend bool operator!=(const RatNum&lhs, const RatNum & rhs);
friend bool operator>(const RatNum&lhs, const RatNum & rhs);
friend bool operator<(const RatNum&lhs, const RatNum & rhs);

// Subscript
int& operator[](int index){
  assert(index>= 1 && index <= 2);
  if(index == 1){
    return num;
  }
  return den;
}

};
// end of class

// friend external
ostream& operator<<(ostream &out, const RatNum &r){
  if(r.num < 0||r.den < 0){
    if(abs(r.den) == 1){
      out << "-" << -r.num << " or -" << -r.num << "/" << -r.den;
      return out;
    }
    out << "-" << -r.num << "/" << -r.den;
    return out;
  }
  else if(r.den == 1){
    out << r.num << ", or " << r.num  << "/" << r.den;
    return out;
  }
  else{
    out << r.num << "/" << r.den;
    return out;
  }
}
istream& operator>>(istream &in, RatNum &r){
  int n;
  int d;

  in >> n;
  in >> d;

  r.num = n;
  r.den = d;
  return in;
}
RatNum operator+(const RatNum &lhs, const RatNum &rhs){
  int lcm = RatNum::lcm(lhs.den, rhs.den);

  return RatNum((lcm/lhs.den)*lhs.num + (lcm/rhs.den)*rhs.num,lcm).reduce();
}
RatNum operator-(const RatNum &lhs, const RatNum &rhs){
  int lcm = RatNum::lcm(lhs.den, rhs.den);
  return RatNum((lcm/lhs.den) * lhs.num -(lcm/rhs.den) * rhs.num, lcm ).reduce();
}
RatNum operator*(const RatNum &lhs, const RatNum &rhs){
  return RatNum(lhs.num * rhs.num, lhs.den * rhs.den).reduce();
}
RatNum operator/(const RatNum &lhs, const RatNum &rhs){
  return RatNum(lhs.num * rhs.den, lhs.den*rhs.num).reduce();
}

bool operator==(const RatNum&lhs, const RatNum & rhs){
  int lcm = RatNum::lcm(lhs.den, rhs.den);
  return ((lcm/lhs.den)*lhs.num == (lcm/rhs.den)*rhs.num);
}
bool operator!=(const RatNum&lhs, const RatNum & rhs){
  int lcm = RatNum::lcm(lhs.den, rhs.den);

  return ((lcm/lhs.den)*lhs.num != (lcm/rhs.den)*rhs.num);
}
bool operator>(const RatNum&lhs, const RatNum & rhs){
  int lcm = RatNum::lcm(lhs.den, rhs.den);
  return ((lcm/lhs.den) *lhs.num > (lcm/rhs.den)*rhs.num);
}
bool operator<(const RatNum&lhs, const RatNum & rhs){
  int lcm = RatNum::lcm(lhs.den, rhs.den);
  return ((lcm/lhs.den) *lhs.num < (lcm/rhs.den)*rhs.num);
}
int main(){

  cout << endl;
  RatNum r1(1,2), r2(1,6), r3(2,5);
  // test operator overloads
  cout << "\nInput/Output Stream Operators: " << endl;

  RatNum r4;
  //cout << "Enter a rational number: ";
  //cin >> r4;
  //cout << r4 << endl;
  //cout << "Negation Operation: " << endl;
  //cout << -r4 << endl;


  // test arithmetic overloads
    cout << "\nArithmetic Operators: " << endl;
    RatNum r5 = r1 + r2;
    cout << r1 << " + " << r2 <<  " = " << r5 << endl;

  RatNum r6 = r1 - r2;
  cout << r1 << " - " << r2 <<  " = " << r6 << endl;
  RatNum r7 = r1 * r2;
  cout << r1 << " * " << r2 <<  " = " << r7 << endl;
  RatNum r8 = r1 / r2;
  cout << r1 << " / " << r2 <<  " = " << r8 << endl;


  // test arithmetic operation chaining
  cout << "\nArithmetic Chaining: " << endl;
  RatNum r9 = r5 + r6 - r7 * r8;
  cout << r5 <<  " + " << r6 << " - " << r7 << " * " << r8 << " = " << r9 << endl;

  // test relational operator overload
  cout << "\nRelational Operators: " << endl;
  cout << r5 << " == " << r6 << "? " << (r5==r6) << endl;


  cout << r5 << " != " << r6 << "? " << (r5!=r6) << endl;
  cout << r5 << " > " << r6 << "? " << (r5>r6) << endl;
  cout << r5 << " < " << r6 << "? " << (r5<r6) << endl;


  // test subscript overload
  cout << "\nSubscript Operator: " << endl;
  cout << r5 << " num=" << r5[1] << " den=" << r5[2] << endl;
  cout << endl;
  return 0;
}
