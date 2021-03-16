#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

class BankAccount{
private:
  float balance;
public:
  BankAccount();
  BankAccount(float b);

  float getNumber()const;
  void setNumber(float b);

  void display()const;

  BankAccount operator-()const;
};


#endif
