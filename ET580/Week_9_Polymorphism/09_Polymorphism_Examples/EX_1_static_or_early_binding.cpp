// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Parent {
protected:
    string name;
public:
    Parent(string n): name(n) {}
    void output() const { cout << name << " (Parent)\n"; }
};

class Child: public Parent {
public:
    Child(string n): Parent(n) {}
    void output() const { cout << name << " (Child)\n"; }     // redefined
};

int main() {
    cout << endl;

    Child c1("C1");
    c1.output();
    cout << "\n";

    // the reference decides which output function to call (fixed at compile time)
    Parent &p2 = c1;        // parent reference to a child object
    Child &c2 = c1;         // child reference to a child object
    p2.output();            // calls the parent function
    c2.output();            // calls the child function
    cout << "\n";

    // the pointer type decides which output function to call (fixed at compile time)
    Parent *p3 = &c1;       // parent pointer to a child object
    Child *c3 = &c1;        // parent pointer to a child object
    p3->output();           // calls the parent function
    c3->output();           // calls the child function

    // illegal: a child cannot reference a parent, only a parent can reference a child
    //Child &c4 = p1;
    // illegal: a child cannot point to a parent, only a parent can point to a child
    //Child *c5 = &p1;

    cout << endl;
    return 0;
}
