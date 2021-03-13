#include "Person.h"

Person::Person():Person(0, "noName"){}
Person::Person(int a, string n):Person(a, n, 0, "NoTitle"){}
Person::Person(int a, string n, int p, string t): age(a), name(n), info(p, t){}


string Person::getName() const {return name;}
int Person::getAge() const {return age;}

void Person::setName(string n) {name = n;}
void Person::setAge(int a) {age = a;}

void Person::output() const {
    cout << "Name: " << name << "\nAge: " << age << endl;
    info.output();
}
