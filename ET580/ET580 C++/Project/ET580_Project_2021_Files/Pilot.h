#ifndef PILOT_H
#define PILOT_H

#include "Person.h"


class Pilot:public Person{
private:

public:
  Pilot();
  Pilot(std:: string n);
  void setName(std::string n)override{name = n;}
  std::string getName()const override{return name;}

  friend std::ostream& operator<<(std::ostream &out, const Pilot &p){
    out << p.name;
    return out;
  }
};



#endif
