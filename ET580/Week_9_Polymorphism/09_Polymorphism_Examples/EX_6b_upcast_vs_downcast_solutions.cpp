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

class Primate : public Animal {
private:
    int numFingers;
public:
    Primate(): Primate("", 0) { }
    Primate(string n, int f): Animal(n), numFingers(f) { }
    void output() const { cout << name << ", " << numFingers << endl; }
    int getNumFingers() const  { return numFingers; }
};

int main() {
    cout << endl;

    Animal **a = new Animal*[5];
    a[0] = new Animal("Zebra");
    a[1] = new Bird("Vulture", 84);
    a[2] = new Primate("Human", 5);
    a[3] = new Bird("Eagle", 60);
    a[4] = new Primate("Monkey", 4);

    for(int i=0; i<5; ++i) {
        if( dynamic_cast<Bird*>(a[i]) ) {               // check if a[i] is-a bird
            Bird *b = dynamic_cast<Bird*>(a[i]);        // if so cast, then run a bird function
            cout << b->getWingSpan() << "\n";
        }
        else if( dynamic_cast<Primate*>(a[i]) ) {       // check if a[i] is-a primate
            Primate *p = dynamic_cast<Primate*>(a[i]);  // if so cast, then run a primate function
            cout << p->getNumFingers() << "\n";
        }
    }
    cout << "\n";

    a[1]->output();                                     // works because output is in all classes
    a[2]->output();                                     // works because output is in all classes

    //a[1]->getWingSpan();                              // compiler error, requires bird pointer
    //a[2]->getNumFingers();                            // compiler error, requires primate pointer

    cout << endl;
    return 0;
}
