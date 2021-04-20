// S. Trowbridge 2020
#include <iostream>
using namespace std;

// abstract class
// 1) abstract classes are incomplete classes
// 2) an abstract class contains one or more pure virtual functions
// 3) abstract classes are only instantiated through derived classes

class Animal { // an abstract class
public:
    Animal(): Animal("") { }
    Animal(string n): name(n) { }
    virtual void move() const = 0; // pure virtual function, only defined in child classes
protected:
    string name;
};

class Primate : public Animal { // derived from an abstract class
public:
    Primate(string n): Animal(n) { }
    void move() const override {  cout << name << " walks" << endl; }
};

class Bird : public Animal { // derived from an abstract class
public:
    Bird(string n): Animal(n) { }
    void move() const override {  cout << name << " flies" << endl; }
};


int main() {
    cout << endl;

    //Animal animal;                // compiler error, abstract types cannot be instantiated

    Animal *a;                      // abstract class pointer is ok
    Primate p("Human");             // child class (automatic variable)
    Bird *b = new Bird("Eagle");    // child class (dynamic variable)

    p.move();                       // calls primate move
    b->move();                      // calls bird move
    cout << "\n";

    a = &p;                         // parent pointer to a child object (primate object)
    a->move();                      // calls primate move
    a = b;                          // parent pointer to a child object (bird object)
    a->move();                      // calls bird move

    cout << endl;
    return 0;
}
