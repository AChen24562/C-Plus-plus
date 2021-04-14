// S. Trowbridge 2020
#include <iostream>
using namespace std;

// aggregation - a has-a b
// 1/4 are same as composition (see composition example)
// 2) an address can simultaneously belong to multiple person objects
// 3) object lifetimes are independent (no big three)
class Address {
private:
    string location;
public:
    Address(): Address("") {}
    Address(string l): location(l) {}
    string getLocation() const { return location; }
};

class Person {
private:
    string name;
    Address *home;  // pointer to an external object (can use dynamic or automatic memory)
public:
    Person(): Person("Anonymous", "homeless") {}
    Person(string n): Person(n, "homeless") {}
    Person(string n, string a): name(n), home(new Address(a)) {}    // create a dynamic address object
    Person(string n, Address &h): name(n), home(&h) {}              // accept an address object
    void setHome(Address &h) { home = &h; }                         // assign an address object
    Address& getHome() const { return *home; }                      // return the address object
    friend ostream& operator<<(ostream &out, const Person &c);
    // the big three is typically NOT included (external objects manage their own lifetime)
};

ostream& operator<<(ostream &out, const Person &p) {
    out << p.name << " " << p.home->getLocation();  // arrow operator used to deference the pointer
    return out;
}

int main() {
    cout << endl;

    Address *a1 = new Address{"5150 Ventura Blvd."};

    Person p1{"Kim"};
    Person p2{"Sloan", *a1};
    p1.setHome( p2.getHome() );   // kim moves in with sloan, a1 belongs to multiple people

    cout << p1 << "\n";
    cout << p2 << "\n";

    cout << endl;
    return 0;
}
