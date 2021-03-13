// (c) S. Trowbridge 2019
// ex1 separate compilation interface

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
    // @return - the number of person objects
    static int getNumPeople();
private:
    string name;
    int age;
    static int numPeople;
};
