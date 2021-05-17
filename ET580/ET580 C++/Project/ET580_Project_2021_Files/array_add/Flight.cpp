#include "Flight.h"
#include "Airline.h"
#include "Airport.h"
#include "Pilot.h"
#include "Passenger.h"

Flight::Flight():number(0), airline(new Airline()), source(new Airport()),destination(new Airport()), pilot(new Pilot()){}
Flight::Flight(int n, Airline &a, Airport &s, Airport &d, Pilot &p):number(n),
  airline(&a), source(&s), destination(&d), pilot(&p){}

int Flight::getNumber()const{return number;}
Airline *Flight::getAirline()const{return airline;}
Airport *Flight::getSource()const{return source;}
Airport *Flight::getDestination()const{return destination;}
Pilot *Flight::getPilot()const{return pilot;}

void Flight::setAirline(Airline &a){airline = &a;}
void Flight::setSource(Airport &s){source = &s;}
void Flight::setDestination(Airport &d){destination = &d;}
void Flight::setPilot(Pilot &p){pilot = &p;}

void Flight::addPassenger(Person &p){

  Passenger *temp = new  Passenger("Alvin");
  passengers->push_back(temp);
  std::cout << &p;
  //else{
  //  passengers->setName(p.name);
  //}

}
