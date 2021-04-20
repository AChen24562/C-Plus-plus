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
    void output() const override { cout << name << ", " << wingspan << "\"" << endl; }
    int wingspan;
};

// object passed by value (argument is copied to a parent parameter object)
void print(const Animal a) {
    a.output();
}

// the slicing problem: data is lost when child objects are copied to parent objects
int main() {
    cout << endl;

    Animal a;
    Bird b("Eagle", 72);

    a = b;             // copy from child to parent
    b.output();        // print a child object
    a.output();        // print a parent object (data lost)
    cout << "\n";

    print(b);          // child argument sent to parameter object by value (data lost)

    cout << endl;
    return 0;
}
