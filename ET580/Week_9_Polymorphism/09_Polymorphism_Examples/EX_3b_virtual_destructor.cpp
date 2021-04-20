// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Animal {
public:
    Animal(string n): name(new string(n)) { }
    string getName() const { return *name; }
    virtual void output() { cout << *name << endl; }

    virtual ~Animal() { // virtual destructor
        cout << "==> animal destructor" << endl;
        delete name;
    }
private:
    string *name;
};

class Bird : public Animal {
public:
    Bird(string n, int w): Animal(n), wingspan(new int(w)) { }
    void output() override { cout << this->getName() << ", " << *wingspan << "\"" << endl; }

    ~Bird() {
        cout << "==> bird destructor" << endl;
        delete wingspan;
    }
private:
    int *wingspan;
};

int main() {
    cout << endl;

    Animal *a;
    a = new Bird("Eagle", 72);  // instantiate a child object
    a->output();

    delete a;                   // calls the child destructor (due to virtual destructor)

    cout << endl;
    return 0;
}
