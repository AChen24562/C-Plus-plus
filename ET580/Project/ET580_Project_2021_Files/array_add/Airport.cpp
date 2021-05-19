#include "Airport.h"
#include "MyArray.h"
Airport::Airport():Airport("", ""){}
Airport::Airport(std::string n, std::string s):name(n), symbol(s){}

void Airport::setName(std::string n){name = n;}
std::string Airport::getName()const{return name;}

void Airport::setSymbol(std::string s){symbol = s;}
std::string Airport::getSymbol()const{return symbol;}
