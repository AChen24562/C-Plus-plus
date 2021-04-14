// S. Trowbridge 2020

// Container: data structure coded as a class (object oriented form)
// Modularity, Compartmentalizing
#include <iostream>
using namespace std;

// composition - a has-a b
// 1) a person has-a arm, an arm is part-of a person
// 2) an arm can only belong to one person
// 3) the scope of an arm is linked to the the scope of a person
// 4) an arm is not aware that is part-of a person
class Arm {
private:
    string position;
public:
    Arm(): Arm("") {}
    Arm(string p): position(p) {}
    string getPosition() const { return position; }
};

class Person {
private:
    string name;
    Arm left;
    Arm right;
public:
    Person(): Person("Anonymous") {}
    Person(string n): name(n), left("left arm"), right("right arm") {}
    friend ostream& operator<<(ostream &out, const Person &c);
};

ostream& operator<<(ostream &out, const Person &p) {
    out << p.name << " " << p.left.getPosition() << " " << p.right.getPosition();
    return out;
}

int main() {
    cout << endl;

    Person c1{};
    Person c2{"John"};

    cout << c1 << "\n";
    cout << c2 << "\n";

    cout << endl;
    return 0;
}
