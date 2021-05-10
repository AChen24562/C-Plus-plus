#ifndef PASSENGER_H
#define PASSENGER_H

#include "Person.h"
#include "MyArray.h"

class Flight;

class Passenger:public Person{
private:
MyArray<Flight*> *flights;
public:
  Passenger();
  Passenger(std:: string n);

  void setName(std::string n)override{name = n;}
  std::string getName()const override{return name;}

  friend std::ostream& operator<<(std::ostream &out, const Passenger &p){
    out << p.name;
    return out;
  }
};


#endif
