// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Animal {
public:
    Animal(): Animal("") { }
    Animal(string n): name(n) { }
    virtual void output() const { cout << name << endl; }   // virtual
    string name;
};

class Bird : public Animal {
public:
    Bird(): Bird("",1) { }
    Bird(string n, int w): Animal(n), wingspan(w) { }
    void output() const { cout << name << ", " << wingspan << "\"" << endl; }
    int wingspan;
};

// object passed by reference (data retained)
void print(const Animal &a) {
    a.output();
}

// the slicing problem: data is lost when child objects are copied to parent objects
int main() {
    cout << endl;

    Animal *a;
    Bird *b;

    b = new Bird("Eagle", 72);

    a = b;              // copy a pointer to a bird object
    b->output();        // print a child object
    a->output();        // print a child object
    cout << "\n";

    print(*b);          // child argument sent to parameter object by reference (data retained)

    cout << endl;
    return 0;
}
