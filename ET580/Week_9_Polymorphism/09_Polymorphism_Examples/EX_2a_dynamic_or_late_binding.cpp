// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Parent {
public:
    Parent(string n): name(n) {}
    // virtual function
    virtual void output() const { cout << name << " (Parent)\n"; };
protected:
    string name;
};

class Child: public Parent {
public:
    Child(string n): Parent(n) {}
    // override - a redefined function of an inherited virtual function (parent function is virtual)
    void output() const override { cout << name << " (Child)\n"; };
};

int main() {
    cout << endl;

    Child c1("C1");
    c1.output();
    cout << "\n";

    // the object decides which output function to call (decided at run time)
    Parent &p2 = c1;        // parent reference to a child object
    Child &c2 = c1;         // child reference to a child object
    p2.output();            // calls the child function
    c2.output();            // calls the child function
    cout << "\n";

    // the object decides which output function to call (decided at run time)
    Parent *p3 = &c1;       // parent pointer to a child object
    Child *c3 = &c1;        // parent pointer to a child object
    p3->output();           // calls the child function
    c3->output();           // calls the child function

    cout << endl;
    return 0;
}
