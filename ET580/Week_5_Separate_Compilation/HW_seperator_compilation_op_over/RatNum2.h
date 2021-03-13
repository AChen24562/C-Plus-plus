#ifndef RATNUM2_H
#define RATNUM2_H

#include <iostream>
#include<cassert>
using namespace std;

class RatNum{
private:
  int num;
  int den;

public:
  RatNum();
  RatNum(int n);
  RatNum(int n , int d);

// Accessor
int getNum()const;
int getDen() const;

// Mutator
void setNum(int n);
void setDen(int d);

// gcd static
static int gcd(int n, int d);
// lcm static
static int lcm(int n, int d);
// reduce function
RatNum reduce();


//Friend overloads
friend ostream& operator<<(ostream& out, const RatNum r);
friend istream& operator>>(istream& in, RatNum &r);
friend RatNum operator+(const RatNum &lhs, const RatNum &rhs);
friend RatNum operator/(const RatNum &lhs, const RatNum &rhs);
friend RatNum operator-(const RatNum &lhs, const RatNum &rhs);
friend RatNum operator*(const RatNum &lhs, const RatNum &rhs);

// Relation
friend bool operator==(const RatNum &lhs, const RatNum rhs);
friend bool operator!=(const RatNum &lhs, const RatNum rhs);
friend bool operator>(const RatNum &lhs, const RatNum rhs);
friend bool operator<(const RatNum &lhs, const RatNum rhs);


// Subscript []
int& operator[](int index);

// Unary overload '-'
RatNum operator-()const;

};
#endif
