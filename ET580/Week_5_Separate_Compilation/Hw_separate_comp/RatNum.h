#ifndef RATNUM_H
#define RATNUM_H

#include <iostream>
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
};
#endif
