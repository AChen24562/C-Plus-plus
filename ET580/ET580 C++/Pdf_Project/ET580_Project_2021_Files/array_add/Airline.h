#ifndef AIRLINE_H
#define AIRLINE_H
#include <iostream>


class Airline{
private:
  std::string name;
public:
  Airline();
  Airline(std::string n);

  void setName(std::string n);
  std::string getName()const;
};

#endif
