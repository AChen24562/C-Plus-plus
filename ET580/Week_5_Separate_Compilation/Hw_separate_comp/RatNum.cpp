#include "RatNum.h"


RatNum::RatNum():RatNum(0,1){}
RatNum::RatNum(int n):RatNum(n, 1){}
RatNum::RatNum(int n , int d): num(n), den(d){}


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
