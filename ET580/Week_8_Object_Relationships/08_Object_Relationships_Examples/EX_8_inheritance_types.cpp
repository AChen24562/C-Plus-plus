// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Parent {
public:
    Parent(int p1, int p2, int p3): pub(p1), pro(p2), pri(p3) { }
    int getProtected() const { return pro; }
    int getPrivate() const { return pri; }
    int pub;        // stays public in a child class
protected:
    int pro;        // becomes protected in child class (similar to private)
private:
    int pri;        // unnaccessible in a child class
};

class Child: public Parent {
public:
    Child(int c1, int c2, int c3): Parent(c1, c2, c3) { }
    int getProtectedFromParent() const { return pro; }
    // int getPrivateFromParent() const { return pri; } // compiler error, cannot access pri from parent
};


int main() {
    cout << endl;

    Parent p(1, 2, 3);
    cout << p.pub << "\n";                        // public access everywhere
    //cout << p.pro << "\n";                      // protected access only from parent/child members
    //cout << p.pri << "\n";                      // private access only from parent members

    Child c(4, 5, 6);
    cout << c.pub << "\n";
    cout << c.getProtected() << "\n";             // protected access from parent accessor
    cout << c.getPrivate() << "\n";               // private access from parent accessor
    cout << c.getProtectedFromParent() << "\n";   // protected access from child accessor

    cout << endl;
    return 0;
}
