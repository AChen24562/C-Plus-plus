// S. Trowbridge 2020
#include <iostream>
using namespace std;

// dependancy - a relies upon b
// 1) person relies upon ostream objects to output person objects
// 2) person and ostream are otherwise unrelated
class Person {
private:
    string name;
public:
    Person(): Person("Anonymous") {}
    Person(string n): name(n) {}
    friend ostream& operator<<(ostream &out, const Person &c);
};

ostream& operator<<(ostream &out, const Person &p) { return out << p.name; }

int main() {
    cout << endl;

    Person c1{};
    Person c2{"John"};

    cout << c1 << "\n";
    cout << c2 << "\n";

    cout << endl;
    return 0;
}
