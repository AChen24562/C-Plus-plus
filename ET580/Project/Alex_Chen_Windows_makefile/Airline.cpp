#include "Airline.h"
Airline::Airline(): Airline("NoName"){}
Airline::Airline(std::string n): name(n){}

void Airline::setName(std::string n){name = n;}
std::string Airline::getName()const{return name;}
