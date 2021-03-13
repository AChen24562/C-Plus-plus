// (c) S. Trowbridge 2019
// ex4 Person class interface

// if person.h is already defined, dont define it (skip this code)
#ifndef PERSON_H  // conditional-compilation preprocessor directive
#define PERSON_H  // conditional-compilation preprocessor directive

#include "Job.h"
#include <iostream>  // #includes should be limited to the bare minimum
using namespace std;

/*
* Person Class
* @author S. Trowbridge
*/
class Person {
public:
    // initializes object's name to ""
    // initalizes object's age to 0
    Person();
    // @param n - set the value for person's name
    // @param a - set the value for person's age
    Person(string n, int a);
    // @param n - set the value for person's name
    // @param a - set the value for person's age
    // @param c - set the value for person's company
    // @param t - set the value for person's title
    Person(string n, int a, string c, string t);
    // @return - person's name as a string
    string getName() const;
    // @return - person's age as an integer
    int getAge() const;
    // @param n - set the value for the person's name
    void setName(string n);
    // @param a - set the value for the person's age
    void setAge(int a);
    // outputs person's name and age
    void output() const;
    // @return - an object of type job
    Job& getJob() const;
    // @return - the number of person objects
    static int getNumPeople();
private:
    string name;
    int age;
    static int numPeople;
    Job employment{};
};

#endif   //  conditional-compilation preprocessor directive
