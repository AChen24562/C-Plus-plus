#ifndef AIRPORT_H
#define AIRPORT_H
#include <iostream>

#include "MyArray.h"


class Flight;
class MyArray<Flight*>;

class Airport{
private:
  std::string name;
  std::string symbol;
  MyArray<Flight*> *arrivals;
  MyArray<Flight*> *departures;
public:

  Airport();
  Airport(std::string n, std::string s);

  void setName(std::string n);
  std::string getName()const;

  void setSymbol(std::string s);
  std::string getSymbol()const;

  friend std::ostream& operator<<(std::ostream &out, const Airport &ap){
      out << ap.name << " " << ap.symbol << ap.arrivals << ap.departures;
      return out;
  }
};



#endif
