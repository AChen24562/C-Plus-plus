// (c) S. Trowbridge 2019
// ex3 separate compilation implementation

#include "Person.h"

// static value defined here without static keyword
int Person::numPeople = 0;
// static function defined here without static keyword
int Person::getNumPeople() {
    return numPeople;
}
// instance functions
Person::Person(): Person("", 0, "", "") {
}
Person::Person(string n, int a): Person(n, a, "", ""){
}
Person::Person(string n, int a, string c, string t)
  : name(n), age(a), employment(c, t) {
}
string Person::getName() const {
    return name;
}
int Person::getAge() const {
    return age;
}
void Person::setName(string n) {
    name = n;
}
void Person::setAge(int a) {
    age = a;
}
void Person::output() const {
    cout << "Name: " << name << "\nAge: " << age << endl;
    employment.output();
}
