#include "quiz1.h"

Course::Course(): Course(0){}
Course::Course(int n): number(n){}

int Course::getNum()const{return number;}
void Course::setNum(int m){number = m;}

ostream& operator<<(ostream &out, const Course &c){
  out << "Number: " <<c.number;
  return out;
}
