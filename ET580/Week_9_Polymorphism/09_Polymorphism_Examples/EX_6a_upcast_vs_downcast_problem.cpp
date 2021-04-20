// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
public:
    Animal(): Animal("") { }
    Animal(string n): name(n) { }
    virtual void output() const { cout << name << endl; }   // virtual
};

class Bird : public Animal {
private:
    int wingspan;
public:
    Bird(): Bird("",1) { }
    Bird(string n, int w): Animal(n), wingspan(w) { }
    void output() const { cout << name << ", " << wingspan << "\"" << endl; }
    int getWingSpan() const { return wingspan; }
};

int main() {
    cout << endl;

    Animal *a = new Animal("Zebra");
    Bird *b = new Bird("Vulture", 84);

    Animal *pAnimal;
    Bird *pBird;

    pAnimal = b;                              // implicit upcast from child to parent legal
    //pBird = a;                              // compiler error: implicit downcast from parent to child not legal
    pBird = static_cast<Bird*>(a);            // explicit downcast from parent to child legal
    pAnimal->output();
    pBird->output();
    cout << pBird->getWingSpan() << "\n";     // problem since bird points to an animal which lacks a wingspan

    cout << endl;
    return 0;
}
