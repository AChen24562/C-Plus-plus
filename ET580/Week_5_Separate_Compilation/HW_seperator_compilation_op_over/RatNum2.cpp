#include "RatNum2.h"
RatNum::RatNum():RatNum(0, 1){}
RatNum::RatNum(int n):num(n),den(1){}
RatNum::RatNum(int n , int d):num(n), den(d){}

// Accessor
int RatNum::getNum()const{return num;}
int RatNum::getDen() const{return den;}

// Mutator
void RatNum::setNum(int n){num =n;}
void RatNum::setDen(int d){den = d;}

// gcd static
int RatNum::gcd(int n, int d){
  if(d ==0){
    return n;
  }
  else{
    return gcd(d, n%d);
  }
}
// lcm static
int RatNum::lcm(int n, int d){
  int gcd = RatNum::gcd(n, d);
  return (n * d)/gcd;
}
// reduce function
RatNum RatNum::reduce(){
  int gcd = RatNum::gcd(num, den);
  num = num/gcd;
  den = den/gcd;
  return RatNum(num, den);
}


//Friend overloads
ostream& operator<<(ostream& out, const RatNum r){
  if(r.num <0 || r.den <0){
    out <<"-" <<-r.num <<"/" <<-r.den;
  }
  else{
    out << r.num << "/"<<r.den ;
  }
  return out;
}
istream& operator>>(istream& in, RatNum &r){
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

  return RatNum(((lcm/lhs.den)*lhs.num + (lcm/rhs.den)*rhs.num), lcm).reduce();
}
RatNum operator/(const RatNum &lhs, const RatNum &rhs){
  return RatNum((lhs.num*rhs.den), (lhs.den*rhs.num)).reduce();
}

RatNum operator-(const RatNum &lhs, const RatNum &rhs){
  int lcm = RatNum::lcm(lhs.den, rhs.den);
  return RatNum(((lcm/lhs.den)*lhs.num - (lcm/rhs.den)*rhs.num), lcm).reduce();
}
RatNum operator*(const RatNum &lhs, const RatNum &rhs){
  return RatNum(lhs.num*rhs.num, lhs.den*rhs.den).reduce();
}

// Relation
bool operator==(const RatNum &lhs, const RatNum rhs){
  int lcm = RatNum::lcm(lhs.den, rhs.den);

  return ((lcm/lhs.den)*lhs.num == (lcm/rhs.den)*rhs.num);

}
bool operator!=(const RatNum &lhs, const RatNum rhs){
  int lcm = RatNum::lcm(lhs.den, rhs.den);
  return ((lcm/lhs.den)*lhs.num != (lcm/rhs.den)*rhs.num);
}
bool operator>(const RatNum &lhs, const RatNum rhs){
  int lcm = RatNum::lcm(lhs.den, rhs.den);
  return ((lcm/lhs.den)*lhs.num > (lcm/rhs.den)*rhs.num);
}
bool operator<(const RatNum &lhs, const RatNum rhs){
  int lcm = RatNum::lcm(lhs.den, rhs.den);
  return ((lcm/lhs.den)*lhs.num < (lcm/rhs.den)*rhs.num);
}


// Subscript []
int& RatNum::operator[](int index){
  assert(index == 1 || index == 2);
  if(index == 1){
    return num;
  }
  else{
    return den;
  }
}

// Unary overload '-'
RatNum RatNum::operator-()const{
  return RatNum(-num, -den);
}
