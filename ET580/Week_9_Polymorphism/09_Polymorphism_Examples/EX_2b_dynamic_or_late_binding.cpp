// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Animal {
public:
    Animal(): Animal("") {}
    Animal(string n): name(n) { }
    virtual void move() { cout << name << " moves" << endl; } // virtual
protected:
    string name;
};

class Primate : public Animal {
public:
    Primate(string n): Animal(n) {}
    void move() override { cout << name << " walks" << endl; } // overridden
};

class Bird : public Animal {
public:
    Bird(string n): Animal(n) {}
    void move() override { cout << name << " flies" << endl; } // overridden
};

int main() {
    cout << endl;

    Animal *a = new Animal[5];      // dynamic array of animal objects
    a[0] = Primate("Human");        // object is an Animal
    a[1] = Bird("Eagle");           // object is an Animal
    a[2] = Primate("Gorilla");      // object is an Animal
    a[3] = Bird("Hawk");            // object is an Animal
    a[4] = Bird("Falcon");          // object is an Animal

    for(int i=0; i<5; i++) { a[i].move();}  // calls parent version of move()
    cout << "\n";

    Animal **b = new Animal*[5];    // dynamic array of pointers to animal objects (polymorphic effect)
    b[0] = new Primate("Human");    // object is a Primate (child of Animal)
    b[1] = new Bird("Eagle");       // object is a Eagle (child of Animal)
    b[2] = new Primate("Gorilla");  // object is a Primate (child of Animal)
    b[3] = new Bird("Hawk");        // object is a Bird (child of Animal)
    b[4] = new Bird("Falcon");      // object is a Bird (child of Animal)

    for(int i=0; i<5; i++) { b[i]->move();}  // calls child version of move()

    cout << endl;
    return 0;
}
