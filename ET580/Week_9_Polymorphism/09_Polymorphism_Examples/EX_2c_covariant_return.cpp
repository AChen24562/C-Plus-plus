// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Animal {
public:
    Animal(string n): name(n) { }
    virtual void output() const { cout << "Animal" << endl; } // virtual
    virtual Animal* getThis() { return this; } // virtual
protected:
    string name;
};

class Primate : public Animal {
public:
    Primate(string n): Animal(n) { }
    void output() const override { cout << "Primate" << endl; } // overridden
    Primate* getThis() override { return this; } // override with covariant return
};

class Bird : public Animal {
public:
    Bird(string n): Animal(n) { }
    void output() const override { cout << "Bird" << endl; } // overridden
    Bird* getThis() override { return this; } // override with covariant return
};

int main() {
    cout << endl;

    Animal *a;

    a = new Animal("Animal");      // a points to a parent object (animal)
    a->getThis()->output();        // executes the parent function
    delete a;
    cout << endl;


    a = new Primate("Human");      // a points to a child object (primate)
    a->getThis()->output();        // executes the child function
    delete a;
    cout << "\n";

    a = new Bird("Eagle");         // a points to a child object (eagle)
    a->getThis()->output();        // executes the child function

    cout << endl;
    return 0;
}
