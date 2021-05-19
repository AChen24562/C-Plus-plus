#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person{
protected:
  std::string name;
public:
  Person():Person("NoName"){}
  Person(std::string n): name(n){}

  virtual void setName(std::string n) =0;
  virtual std::string getName()const = 0;

};


#endif
