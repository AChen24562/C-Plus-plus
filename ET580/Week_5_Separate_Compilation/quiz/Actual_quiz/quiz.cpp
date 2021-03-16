#include "quiz.h"


BankAccount::BankAccount():BankAccount(0){}
BankAccount::BankAccount(float b):balance(b){}

float BankAccount::getNumber()const{return balance;}
void BankAccount::setNumber(float b){balance = b;}

void BankAccount::display()const{
  cout << "Balance: " << balance << endl;
}

BankAccount BankAccount::operator-()const{
  return BankAccount(-balance);
}
