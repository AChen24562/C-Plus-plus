#include "Course.h"

Course::Course():Course(0){}
Course::Course(int n):number(n){}

int Course::getNumber()const{return number;}
void Course::setNumber(int n){number = n;}

ostream& operator<<(ostream &out, const Course &c){
  out << "Course Number: " << c.number;
  return out;
}
