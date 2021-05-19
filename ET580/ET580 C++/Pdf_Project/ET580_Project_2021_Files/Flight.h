#ifndef FLIGHT_H
#define FLIGHT_H

#include "Airline.h"
#include "Airport.h"
#include "Pilot.h"
#include "Passenger.h"

class Airline;
class Airport;
class Pilot;
class Passenger;

class Flight{
private:
  int number;
  Airline *airline;
  Airport *source;
  Airport *destination;
  Pilot *pilot;
public:
  Flight();
  Flight(int n, Airline &a, Airport &s, Airport &d, Pilot &p);

  int getNumber()const;
  Airline *getAirline()const;
  Airport *getSource()const;
  Airport *getDestination()const;
  Pilot *getPilot()const;

  void setAirline(Airline &a);
  void setSource(Airport &s);
  void setDestination(Airport &d);
  void setPilot(Pilot &p);

  friend std::ostream& operator<<(std::ostream &out, const Flight &f){
      out << f.number << " " << f.airline->getName() << " "
          << *(f.source) << " " << *(f.destination) << " "
          << *(f.pilot);
      return out;
  }

};


#endif
